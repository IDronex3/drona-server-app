#include <WiFi.h>

const char * ssid = "Tekwill-kids";
const char * password = "";

String FirmwareVer = {
  "3.8"
};

void connect_wifi();




void setup() {
  
  Serial.begin(115200);
 
  connect_wifi();
}
void loop() {

  updateCall();
  Serial.println("lol lol lol");
  Serial.println("cristi");
}
