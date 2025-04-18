<p align="center">
  <img src="https://github.com/user-attachments/assets/f1782354-2643-4a11-96d7-ef02d58a4eb0" width="800" />
</p>

# Gecko: Open-Source Modular Buoy for Mesh-Connected Ocean Sensing

## **1. Required Components ⚙️**

### **3D-Printed Parts: 🖨️**
- **Buoy Top (Solar Cap) ☀️** – Integrated mounts for two solar panels.  
- **Electronics Mounting Plates 📟** – Multiple plates for stacking circuit boards and batteries.  
- **Buoy Bottom ⚓** – Seals the base and allows mounting of the threaded rods.  
- **Battery Holder 🔋** – Secure hold for three **18650 batteries**.

### **Purchased Parts: 🛒**
- **Buoy Body 🌊** – Plastic tube with **20 cm diameter**, variable length (30 cm for Buoy 1, 50 cm for Buoy 2).  
- **Metal Threaded Rods (M8, stainless steel) 🔩** – For securing internal components.  
- **Mounting Hardware 🔧 (nuts, bolts, and spacers)** – For stable assembly.

### **Electronics: ⚡**
- **TTGO T-Beam LoRa ESP32 📡** – Microcontroller for data collection and mesh communication.  
- **Waveshare MPPT Power Management Module 🔄** – Efficient solar charging regulation.  
- **Solar Panels (2x) ☀️** – Mounted on the top for continuous power supply.  
- **18650 Batteries (3x) 🔋** – Energy storage for nighttime operation.

---

## **2. Assembly Instructions 🔨**

### **Step 1: Preparing the Main Body 🏗️**
1. **Cut the plastic tube to the desired length ✂️** (**30 cm or 50 cm**).  
2. Ensure both ends are **smooth and flat** to allow a tight seal with the 3D-printed caps.

### **Step 2: Inserting the Threaded Rods 🔩**
1. Insert **four M8 threaded rods** through the holes in the bottom cap.  
2. Secure them in place using **nuts and washers**.

### **Step 3: Mounting the Electronics ⚙️**
1. Stack the **3D-printed mounting plates 📟** onto the rods:
   - **Bottom Level 🔋**: Battery holder for the three **18650 batteries**.  
   - **Middle Level 🔄**: **Waveshare MPPT Power Management Module**.  
   - **Top Level 📡**: **TTGO T-Beam LoRa ESP32**.
2. Secure each level with **spacers and nuts 🔧** to prevent movement.

### **Step 4: Wiring the Electronics 🔌**
1. **Connect the solar panels to the MPPT module ☀️🔗**.  
2. **Wire the MPPT module to the battery pack 🔋** (observe correct polarity ⚠️).  
3. **Connect the TTGO T-Beam ESP32 to the power supply system 📡**.  
4. **Attach the GPS antenna 🌍** and position it for optimal reception.

### **Step 5: Adding Sensors or Custom Modules 🛠️**
1. If needed, mount additional **sensors or modules 📟** on a separate level or existing layers.  
2. Connect sensors to the **TTGO T-Beam ESP32 or an additional control board**.  
3. Ensure proper power distribution and clean wiring.

### **Step 6: Sealing the Buoy 🚢**
1. **Attach the top cap (solar lid) with the solar panels ☀️**.  
2. **Seal all openings using sealant (e.g., Dichtol or silicone) 🏗️**.  
3. **Tighten the top and bottom caps with nuts on the rods 🔩** for a stable fit.

### **Step 7: Function Test ✅**
1. **Power on the system ⏻** and **check battery charge 🔋**.  
2. **Test LoRa communication with another Meshtastic node 📡**.  
3. **Verify solar charging function in daylight ☀️**.  
4. **Ensure GPS signal reception 🌍**.

---

## **3. Deployment and Optimization 🚀**

- **Deployment Location 📍**: Choose a site with **maximum sunlight ☀️** for best solar performance.  
- **Waterproofing Test 💦**: Briefly submerge before long-term use to **check watertightness 🏗️**.  
- **Mesh Network Check 📶**: Verify that the **LoRa signal reaches nearby buoys 📡**.

---

## **4. Customizing Firmware for Your Own Modules 💻**

1. Set up firmware source compiling using this guide: [Meshtastic Firmware Build](https://meshtastic.org/docs/development/firmware/build/).  
2. Start by copying the template from `src/modules/GECKOBCustomTemplate.cpp` and `.h`, and rename both files.  
3. Then go to `src/modules/Modules.cpp` and add:
   ```cpp
   #include "modules/[NAME_OF_MODULE].h"
   ```
And inside the setupModules() function:
   ```cpp
[NAME_OF_MODULE_IN_SNAKE_CASE] = new [NAME_OF_MODULE]();
   ```
Replace the placeholders accordingly.
4. Build and upload the firmware according to the website instructions.
