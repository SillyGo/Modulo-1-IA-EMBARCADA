#include <arduino.h>

TaskHandle_t Task1;
TaskHandle_t Task2;

void task1(void *pvParameters)
{
  while (1)
  {
    #ifdef ESP32
      Serial.print("Temperature: ");
      Serial.print(temperatureRead());
      Serial.println(" ºC");
    #endif
    delay(1000);
  }
}

void task2(void *pvParameters)
{
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2,LOW);
    delay(200);
}

void setup()
{
    Serial.begin(115200);
    xTaskCreatePinnedToCore(
    task1,
    "Task1",
    10000,
    NULL,
    1,
    &Task1,
    0
  );
  xTaskCreatePinnedToCore(
    task2,
    "Task2",
    10000,
    NULL,
    1,
    &Task2,
    1
  );
  pinMode(2, OUTPUT);
}

void loop()
{
    int x = 10;
    int y = 15;
    int z = x * y;
    x++;
    y++;
}