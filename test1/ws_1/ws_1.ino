
 
//http://www.martyncurrey.com/esp8266-and-the-arduino-ide-part-9-websockets/

#include <WebSocketsServer.h>
#include <ESP8266WiFi.h> 
 
WebSocketsServer webSocket = WebSocketsServer(81);
 char res[50];

 
String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete


 
void setup()
{
 
  Serial.begin(115200);
  Serial.println();
  Serial.println("Serial started at 115200");
  Serial.println();
 

   WiFi.softAP("costycnc");
  webSocket.begin();
}
 
void loop()
{
    webSocket.loop();
      if (Serial.available()) {
        inputString +=char(Serial.read());
        inputString +="\n";
    webSocket.broadcastTXT(inputString);
    }
 
}
