# **Bauanleitung für die MANOSapiens-Boje**

## **1. Benötigte Komponenten**
### **3D-gedruckte Teile:**
- **Boje-Oberteil (Solardeckel)** – Integrierte Halterungen für zwei Solarpanels.
- **Elektronik-Halterungsplatten** – Mehrere Platten zur gestapelten Befestigung von Platinen und Batterien.
- **Boje-Unterteil** – Verschließt die Basis und sorgt für die Befestigung der Gewindestangen.
- **Batteriehalter** – Sicherer Halt für drei **18650-Batterien**.

### **Gekaufte Teile:**
- **Bojenkörper** – Kunststoffrohr mit **20 cm Durchmesser**, variable Länge (30 cm für Boje 1, 50 cm für Boje 2).
- **Metall-Gewindestangen (M8, Edelstahl)** – Zur Fixierung der internen Komponenten.
- **Befestigungsmaterial (Muttern, Schrauben und Abstandshalter)** – Für eine stabile Montage.

### **Elektronik:**
- **TTGO T-Beam LoRa ESP32** – Mikrocontroller für Datenerfassung und Mesh-Kommunikation.
- **Waveshare MPPT Power Management Modul** – Effiziente Solarladeregelung.
- **Solarpanels (2x)** – Auf der Oberseite zur kontinuierlichen Stromversorgung.
- **18650-Batterien (3x)** – Energiespeicher für den Nachtbetrieb.

---

## **2. Montageanleitung**

### **Schritt 1: Vorbereitung des Hauptkörpers**
1. **Das Kunststoffrohr auf die gewünschte Länge zuschneiden** (**30 cm oder 50 cm**).
2. Sicherstellen, dass beide Enden **glatt und eben** sind, um eine dichte Versiegelung mit den 3D-gedruckten Kappen zu gewährleisten.

### **Schritt 2: Einsetzen der Gewindestangen**
1. **Vier M8-Gewindestangen** durch die Löcher der Unterkappe führen.
2. Mit **Muttern und Unterlegscheiben** fixieren, um sie in Position zu halten.

### **Schritt 3: Montage der Elektronik**
1. **Die 3D-gedruckten Halteplatten** auf die Stangen stapeln:
   - **Untere Ebene**: Batteriehalter für die drei **18650-Batterien**.
   - **Mittlere Ebene**: **Waveshare MPPT Power Management Modul**.
   - **Obere Ebene**: **TTGO T-Beam LoRa ESP32**.
2. Jede Ebene mit **Abstandshaltern und Muttern** sichern, um ein Verrutschen zu verhindern.

### **Schritt 4: Verkabelung der Elektronik**
1. **Solarpanels mit dem MPPT-Modul verbinden**.
2. **MPPT-Modul mit dem Batteriepack verkabeln** (auf richtige Polarität achten).
3. **TTGO T-Beam ESP32 mit dem Stromversorgungssystem verbinden**.
4. **GPS-Antenne befestigen** und für optimalen Empfang positionieren.

### **Schritt 5: Boje verschließen**
1. **Die Oberkappe (Solardeckel) mit den Solarpanels befestigen**.
2. **Alle Öffnungen mit Dichtmittel (z. B. Dichtol oder Silikon) abdichten**.
3. **Ober- und Unterkappe mit Muttern an den Stangen festziehen**, um eine stabile Fixierung zu gewährleisten.

### **Schritt 6: Funktionstest**
1. **System einschalten** und den **Batterieladezustand überprüfen**.
2. **LoRa-Kommunikation mit einem anderen Meshtastic-Knoten testen**.
3. **Solar-Ladefunktion bei Tageslicht überprüfen**.
4. **GPS-Signalempfang sicherstellen**.

---

## **3. Einsatz und Optimierung**
- **Aufstellungsort**: Ein Standort mit **maximaler Sonneneinstrahlung** gewährleistet eine optimale Solarleistung.
- **Wasserdichtigkeit testen**: Vor dem Langzeiteinsatz kurz unter Wasser halten, um **Dichtigkeit zu prüfen**.
- **Mesh-Netzwerk testen**: Überprüfen, ob das **LoRa-Signal benachbarte Bojen erreicht**.

---

Diese modulare Boje ist für eine **kostengünstige, Open-Source-Umwelt-Datenerfassung** ausgelegt und eignet sich **ideal für Forschungsanwendungen in abgelegenen Gebieten**. Falls Anpassungen oder weitere Details benötigt werden, lass es mich wissen! 🚀
