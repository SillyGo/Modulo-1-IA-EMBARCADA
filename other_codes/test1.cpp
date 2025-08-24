#include <arduino.h>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    #ifdef ESP32
      Serial.print("Temperature: ");
      Serial.print(temperatureRead());
      Serial.println(" ºC");
    #endif
    delay(2000);
}