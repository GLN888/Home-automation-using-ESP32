#include <WiFi.h>
#include <WiFiClient.h>
#include "RMaker.h"
#include "WiFiProv.h"

#define RELAY1 13
#define RELAY2 12
#define RELAY3 14
#define RELAY4 27
#define RELAY5 26
#define RELAY6 25
#define RELAY7 33
#define RELAY8 32


const char *service_name = "HomeAutomationESP32";
const char *pop = "1234567"; 


static Node my_node;
static Switch my_switch1("Relay1", &RELAY1);
static Switch my_switch2("Relay2", &RELAY2);
static Switch my_switch3("Relay3", &RELAY3);
static Switch my_switch4("Relay4", &RELAY4);
static Switch my_switch5("Relay5", &RELAY5);
static Switch my_switch6("Relay6", &RELAY6);
static Switch my_switch7("Relay7", &RELAY7);
static Switch my_switch8("Relay8", &RELAY8);

void setup()
{
  Serial.begin(115200);

  
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
  pinMode(RELAY5, OUTPUT);
  pinMode(RELAY6, OUTPUT);
  pinMode(RELAY7, OUTPUT);
  pinMode(RELAY8, OUTPUT);

  
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);
  digitalWrite(RELAY5, HIGH);
  digitalWrite(RELAY6, HIGH);
  digitalWrite(RELAY7, HIGH);
  digitalWrite(RELAY8, HIGH);


  my_node = RMaker.initNode("HomeAutomation");


  my_node.addDevice(my_switch1);
  my_node.addDevice(my_switch2);
  my_node.addDevice(my_switch3);
  my_node.addDevice(my_switch4);
  my_node.addDevice(my_switch5);
  my_node.addDevice(my_switch6);
  my_node.addDevice(my_switch7);
  my_node.addDevice(my_switch8);


  RMaker.start();


  WiFiProv.beginProvision(WIFI_PROV_SCHEME_BLE, WIFI_PROV_SECURITY_1, pop, service_name);
}

void loop()
{

  RMaker.run();
}
