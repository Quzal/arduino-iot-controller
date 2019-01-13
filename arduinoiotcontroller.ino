#include <ESP8266WiFi.h>
#include <SocketIoClient.h>
SocketIoClient webSocket;

const char* ssid     = "Maggi";
const char* password = "foxbox2345";

#define USE_SERIAL Serial
void connecta(const char * payload, size_t length) {
  USE_SERIAL.printf("got message: %s\n", payload);
 

}
void arduino(const char * payload, size_t length) {
  USE_SERIAL.printf("got message: %s\n", payload);
 

}
void setup() {


 Serial.begin(9600);
  delay(10);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
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
 
  webSocket.begin("192.168.1.102", 3000, "/socket.io/?transport=websocket");
  webSocket.emit("Login", "{\"email\":\"abc8\",\"password\":\"4326\"}");
  webSocket.on("Login", connecta);
  webSocket.on("abc8:fan2",arduino);
 

}

void loop() {
  // put your main code here, to run repeatedly:
webSocket.loop();

}
