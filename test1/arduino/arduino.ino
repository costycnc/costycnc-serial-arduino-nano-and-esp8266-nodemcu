// if nodemcu esp8266 (this) receive c send "a" to arduino nano (this) rispond with "b"
byte a;

void setup() {
    Serial.begin(115200);

}

void loop() {
  
 Serial.print(a);
  delay(1000);
  a++;
}
