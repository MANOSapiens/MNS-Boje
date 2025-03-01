#include "ReplyModule.h"
#include "MeshService.h"
#include "configuration.h"
#include "main.h"
#include <Wire.h>
#include <Adafruit_BME280.h>
#include <assert.h>

Adafruit_BME280 bme;

class BME280Module : public ReplyModule
{
public:
    BME280Module() {}
    void begin()
    {
        Wire.begin();
        if (!bme.begin(0x76)) // Default I2C address for BME280
        {
            LOG_ERROR("Could not find a valid BME280 sensor!");
        }
    }

    meshtastic_MeshPacket *allocReply() override
    {
        assert(currentRequest); // should always be !NULL
#ifdef DEBUG_PORT
        auto req = *currentRequest;
        auto &p = req.decoded;
        LOG_INFO("Received message from=0x%0x, id=%d, msg=%.*s", req.from, req.id, p.payload.size, p.payload.bytes);
#endif

        if (!bme.begin(0x76))
        {
            const char *errorStr = "BME280 init failed";
            auto reply = allocDataPacket();
            reply->decoded.payload.size = strlen(errorStr);
            memcpy(reply->decoded.payload.bytes, errorStr, reply->decoded.payload.size);
            return reply;
        }

        float temperature = bme.readTemperature();
        float pressure = bme.readPressure() / 100.0F; // Convert Pa to hPa
        float humidity = bme.readHumidity();

        char replyStr[80];
        snprintf(replyStr, sizeof(replyStr), "Temp: %.2f C, Pressure: %.2f hPa, Humidity: %.2f%%", temperature, pressure, humidity);

        auto reply = allocDataPacket();
        reply->decoded.payload.size = strlen(replyStr);
        memcpy(reply->decoded.payload.bytes, replyStr, reply->decoded.payload.size);

        return reply;
    }
};

static BME280Module bme280Module;
