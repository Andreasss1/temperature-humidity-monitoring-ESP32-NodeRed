# 🌐 IoT Monitoring System: Temperature & Humidity with ESP32, DHT22, MQTT & Node-RED Dashboard

## 🚀 About The Project
This project is a **Smart Environmental Monitoring System** built using **ESP32** and **DHT22 Sensor** to measure **temperature** and **humidity** in real-time. Data is transmitted wirelessly via **MQTT Protocol** and visualized using an interactive **Node-RED Dashboard**.

Perfect for **smart farming**, **greenhouses**, or indoor climate control projects! 🌱🌡️

---

## 💻 Components
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

## 💻 System Architecture
![System Architecture Preview](https://github.com/Andreasss1/temperature-humidity-monitoring-ESP32-NodeRed/blob/main/System-Architecture.png)
#### Explanation
- **ESP32 + DHT22**: Reads temperature & humidity data.
- **MQTT Broker**: Acts as the communication protocol hub between ESP32 and Node-RED.
- **Node-RED**: Subscribes to the sensor data topic, processes the data, and displays it on a web dashboard for Real-time data visualization for easy monitoring.
#### Quality of Service 1 (QoS 1)
![Quality of Service #1](https://github.com/Andreasss1/temperature-humidity-monitoring-ESP32-NodeRed/blob/main/QoS(1).png)
- **Quality of Service (QoS) Level 1**:
    - Message is guaranteed to be delivered **at least once**.
    - The sender (ESP32) sends a message, and the broker must acknowledge (PUBACK) it.
    - If no PUBACK is received, ESP32 will retry sending the message.
- This is ideal for monitoring sensors in IoT where **data loss** should be minimized.

---

## 🛠️ How to Set Up
#### 1️⃣ Hardware Setup
- Connect **DHT22** to ESP32:  
    - VCC → 3.3V  
    - GND → GND  
    - DATA → GPIO33

#### 2️⃣ ESP32 Code
- Use **Arduino IDE** with ESP32 board support.
- Install required libraries:
    - `DHT.h`
    - `PubSubClient.h`
    - `WiFi.h`

#### 3️⃣ MQTT Broker
- Install **Mosquitto** locally or use free broker like:
    - `broker.hivemq.com` (public broker)
    - Or set up your own server (local or cloud)

#### 4️⃣ Node-RED Dashboard
- Install Node-RED:
    - `npm install -g --unsafe-perm node-red`
- Add **Dashboard Node**:
    - In Node-RED, go to Manage Palette → Install → Search `node-red-dashboard`
- Import provided flow (if available) or build your own dashboard.

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

<div align="center">

## 📬 Need a Similar Project? Let's Collaborate!
If you need a **custom IoT project** for **smart home, agriculture, industrial monitoring**, or other use cases,  
I’m ready to assist you!  

📧 **Reach out at:**  
### andreas.sebayang9999@gmail.com  

Let’s create something amazing together! 🚀

</div>
