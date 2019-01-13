# Arduino Iot Controller
Wifi Controller Chrome Extension for microcontrollers: NodeMcu , Esp8266 , Arduino Ethernet and Raspberry pi 




![picture](https://github.com/Quzal/arduino-iot-controller/blob/master/Iot%20Controller1.png?raw=true)
![picture1](https://github.com/Quzal/arduino-iot-controller/blob/master/Iot%20Controller%202.png?raw=true)

## Getting Started
Arduino Iot Controller , a Chrome Extension for controlling various microcontroller boards.Send data to multple boards with a Single Click

**Supported Boards**

- Nodemcu
- Esp8266
- Arduino Ethernet
- Raspberrypi
## Installation 
### Step 1 
Add <a href="">Arduino IOT Controller</a> Extension to Chrome
### Step 2
Download Arduino Library from Library Manager: <a href="">SocketIoClient by Vincent Wyszynski</a>
 
 
![library](https://github.com/Quzal/arduino-iot-controller/blob/master/SocketIoLib.png?raw=true)
## Setting Up Code
Copy Example Code from <a href="https://github.com/Quzal/arduino-iot-controller/blob/master/arduinoiotcontroller.ino">here</a>

###Step 1
Connect board to Wifi

```javascript
const char* ssid     = "ssid";                       // Enter Ssid
const char* password = "password";                   // Enter Password
```
###Step 2
Connect Board to Arduino IOT Controller Server

