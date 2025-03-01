# 🌐 IoT Monitoring System: Temperature & Humidity with ESP32, DHT22, MQTT & Node-RED Dashboard

## 🚀 About The Project

This project is a **Smart Environmental Monitoring System** built using **ESP32** and **DHT22 Sensor** to measure **temperature** and **humidity** in real-time. Data is transmitted wirelessly via **MQTT Protocol** and visualized using an interactive **Node-RED Dashboard**.

Perfect for **smart farming**, **greenhouses**, or indoor climate control projects! 🌱🌡️

---

### Components
| Component         | Description                          |
|------------------|----------------------------------|
| **ESP32**        | WiFi-enabled microcontroller  |
| **DHT22**        | Temperature & Humidity Sensor |
| **MQTT Broker**  | Data transport (e.g., Mosquitto) |
| **Node-RED**     | Dashboard visualization & logic handling |

---

## 🔗 Features at a Glance

✅ Real-time temperature & humidity updates  
✅ Wireless data transmission via MQTT  
✅ Customizable & user-friendly dashboard  
✅ Scalable to add more sensors (Soil Moisture, Light, etc.)  
✅ Works in local network or cloud setup  

---

## 🛠️ How to Set Up

### 1️⃣ Hardware Setup
- Connect **DHT22** to ESP32:  
    - VCC → 3.3V  
    - GND → GND  
    - DATA → GPIO33

### 2️⃣ ESP32 Code
- Use **Arduino IDE** with ESP32 board support.
- Install required libraries:
    - `DHT.h`
    - `PubSubClient.h`
    - `WiFi.h`

### 3️⃣ MQTT Broker
- Install **Mosquitto** locally or use free broker like:
    - `broker.hivemq.com` (public broker)
    - Or set up your own server (local or cloud)

### 4️⃣ Node-RED Dashboard
- Install Node-RED:
    - `npm install -g --unsafe-perm node-red`
- Add **Dashboard Node**:
    - In Node-RED, go to Manage Palette → Install → Search `node-red-dashboard`
- Import provided flow (if available) or build your own dashboard.

---

## 📡 System Architecture

+----------------+       +------------------+       +---------------------+
|  ESP32 + DHT22 | --->  |   MQTT Broker    | --->  |  Node-RED Dashboard |
+----------------+       +------------------+       +---------------------+

---

## 📊 Simple Dashboard Preview

![Node-RED Dashboard Preview](https://github.com/Andreasss1/temperature-humidity-monitoring-ESP32-NodeRed/blob/main/node-red-dashboard-preview.png)

Dashboard includes live **charts**, **gauges**, and customizable UI widgets! 🎨

---

## 💻 Quick Start Checklist

| Step | ✅ Done |
| --- | --- |
| Hardware Connected | ✔️ |
| Arduino Code Uploaded | ✔️ |
| MQTT Broker Running | ✔️ |
| Node-RED Dashboard Ready | ✔️ |

---
