# Monitoring Suhu dan Kelembaban dengan DHT22 & ESP32 via MQTT ke Node-RED Dashboard

## 📌 Deskripsi
Proyek ini merupakan monitoring sederhana suhu dan kelembaban menggunakan sensor **DHT22** yang terhubung ke **ESP32**. Data dikirimkan ke **Node-RED** melalui **MQTT** menggunakan broker publik `broker.emqx.io` dan divisualisasikan menggunakan **Node-RED Dashboard**.

---

## 💻 Peralatan dan Komponen
| No  | Komponen               | Keterangan |
|----|------------------|----|
| 1 | ESP32 Devkit | Mikrokontroler |
| 2 | DHT22 | Sensor Suhu dan Kelembaban |
| 3 | Kabel Jumper | Penghubung |
| 4 | Breadboard | Perakitan |

---

## 🌐 Arsitektur Sistem
![Topology](./images/topology.png)

---

## 📥 Arduino Code
Source code ada di folder `Arduino_Code/`.

---

## 🌐 MQTT Topic
| Topic | Data |
|----|----|
| `12032343/dht22/suhu` | Suhu (°C) |
| `12032343/dht22/kelembaban` | Kelembaban (%) |

---

## 📊 Tampilan Node-RED Dashboard
![Dashboard Preview](./images/dashboard_preview.png)

---

## 📦 Cara Menjalankan
### 1️⃣ Upload Kode ke ESP32
- Buka file `Monitoring_DHT22_ESP32.ino` di Arduino IDE.
- Pastikan library sudah lengkap:
    - `DHT.h`
    - `WiFi.h`
    - `PubSubClient.h`
- Sesuaikan WiFi SSID & Password.
- Upload ke ESP32.

### 2️⃣ Import Flow ke Node-RED
- Buka Node-RED di browser: `http://localhost:1880`.
- Import file `flow.json` dari folder `NodeRED_Flow/`.
- Klik **Deploy**.

### 3️⃣ Buka Dashboard
- Akses: `http://localhost:1880/ui`.

---
