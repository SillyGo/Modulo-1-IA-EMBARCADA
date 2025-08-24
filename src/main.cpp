#include <Arduino.h>
#include "NeuralNetwork.h"
#include <cmath>

NeuralNetwork *nn;
TaskHandle_t Task1;

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

void setup()
{
  Serial.begin(115200);
  nn = new NeuralNetwork();

  xTaskCreatePinnedToCore(
    task1,
    "Task1",
    10000,
    NULL,
    1,
    &Task1,
    0
  );
}

void loop()
{
  float number1 = random(100) / 100.0;

  nn->getInputBuffer()[0] = number1;

  float result = nn->predict();

  float expected_result = sin(number1);

  Serial.printf("valor esperado: %f, valor obtido: %f\n", expected_result, result);
  delay(100);
}