
# 🏠 Home Automation System using ESP32, Arduino Uno & ESP Rainmaker

## 📌 Overview  
This project is an **IoT-based Home Automation System** built using **ESP32, Arduino Uno, 8-Channel Relay Module, and 12V Power Supply**.  
It leverages **ESP Rainmaker**, enabling users to control up to **8 household appliances remotely** via a smartphone app or voice assistants like **Google Assistant & Alexa**.  

The system is designed to be **cost-effective, scalable, and reliable**, making it a strong foundation for smart home solutions.  

---

## ⚙️ Components Used  
- **ESP32 Development Board** – Main microcontroller with Wi-Fi & BLE support  
- **Arduino Uno** – Secondary controller for signal processing (optional)  
- **8-Channel Relay Module** – Switching unit for appliances  
- **12V Power Supply** – Provides power to the relay and ESP32  
- **ESP Rainmaker Platform** – Cloud-based device management & control  

---

## 🔑 Features  
- ✅ Remote control of up to **8 devices/appliances**  
- ✅ **ESP Rainmaker app support** (Android & iOS)  
- ✅ **Voice control** via Google Assistant & Alexa  
- ✅ **Real-time status updates** on mobile app  
- ✅ **Scalable design** (can add more devices/relays)  
- ✅ **Low-cost and energy-efficient**  

---

## 🔌 Circuit Diagram / Connections  
1. **ESP32 → Relay Module**  
   - GPIO pins (e.g., GPIO 13, 12, 14, 27, 26, 25, 33, 32) → IN1–IN8  
   - Relay VCC → 5V, GND → GND  

2. **Relay → Appliances**  
   - Common (COM) and Normally Open (NO) terminals used to switch AC loads  

3. **Power Supply**  
   - ESP32 powered via USB or regulator  
   - Relay powered via 12V adapter (with onboard regulator if available)  

---

## 🖥️ Working Principle  
1. ESP32 connects to **Wi-Fi** and links with **ESP Rainmaker Cloud**.  
2. Each relay channel is registered as a **switch device** in the Rainmaker app.  
3. User toggles appliances from the **mobile app/voice assistants**.  
4. ESP32 processes the command and updates the corresponding GPIO pin.  
5. Relay switches ON/OFF → Appliance operates accordingly.  
6. ESP32 sends **real-time feedback** to the app for status monitoring.  

---

## 📲 Setup Instructions  

### 1. Install ESP Rainmaker App  
- Download from **[Google Play](https://play.google.com/store/apps/details?id=com.espressif.rainmaker&hl=en)** or **[App Store](https://apps.apple.com/us/app/esp-rainmaker/id1497491540)**  
- Sign up and create an account  

### 2. Install Arduino IDE & Configure ESP32  
- Install **[Arduino IDE](https://www.arduino.cc/en/software)**  
- Add ESP32 board support:  
  - File → Preferences → Add Boards Manager URL:  
    ```
    https://dl.espressif.com/dl/package_esp32_index.json
    ```
  - Tools → Board → Board Manager → Install ESP32  
- Install required libraries:  
  - **ESP Rainmaker**  
  - **WiFi**  
  - **ArduinoJSON**  

### 3. Upload the Code  
- Open the provided `.ino` file  
- Select **ESP32 Dev Module** from Tools → Board  
- Connect ESP32 via USB and upload the code  

### 4. Pair Device with ESP Rainmaker  
- Open Rainmaker app → Add Device → Connect to Wi-Fi  
- ESP32 will automatically register relays as **8 switches**  
- Control appliances from app or voice assistants  

---
