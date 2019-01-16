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
Download Arduino Library from Library Manager: <a href="https://www.arduinolibraries.info/libraries/socket-io-client">SocketIoClient by Vincent Wyszynski</a>
 
 
![library](https://github.com/Quzal/arduino-iot-controller/blob/master/SocketIoLib.png?raw=true)
## Setting Up Code
Copy Example Code from <a href="https://github.com/Quzal/arduino-iot-controller/blob/master/arduinoiotcontroller.ino">here</a>

### Step 1
Connect board to Wifi

```javascript
const char* ssid     = "ssid";                       // Enter Ssid
const char* password = "password";                   // Enter Password
```

```javascript
 Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  ```
### Step 2
Connect Board to Arduino IOT Controller Server

```javascript
  // Connecting to Arduino Iot Controller Server
  webSocket.begin("iotcontroller.herokuapp.com");
```
### Step 3
Login From Board 

```javascript
  // Login 
  webSocket.emit("Login", "{\"email\":\"enter_username\",\"password\":\"enter_password\"}");
```
Call Listener :
##### Note: 1st Argument i.e Login is Fixed , 2nd argument is login listener function name
```javascript
webSocket.on("Login", getloginresponse);
```
Login Listener :
Add Login Listener Function above void setup()

```javascript
// Login Listener Function
void getloginresponse(const char * payload, size_t length) {
  USE_SERIAL.printf("got message: %s\n", payload);
}
```
### Step 4
Listen from Controllers:
##### Note : 1st Argument is yourusername:controllerId , 2nd Argument is listener function name
```javascript
// Listen From Controller
  webSocket.on("username:controllerid",fan2);
```

