void setup()
{
Serial.begin(115200);
dht.begin();
delay(10);
Serial.println();
Serial.println();
Serial.print(“Connecting to “);
Serial.println(ssid);
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED)
{
delay(500);
Serial.print(“.”);
}
Serial.println(“”);
Serial.println(“WiFi connected”);
Serial.println(WiFi.localIP());
ThingSpeak.begin(client);
}
