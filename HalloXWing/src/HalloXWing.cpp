/*
 * Project HalloXWing
 * Description:
 * Author:
 * Date:
 */
#include "application.h"

int led1 = D8; // Pin 13 on the HalloWing, mapped to D8 on the Feather footprint

void setup()
{
  pinMode(led1, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(1000);

  digitalWrite(led1, LOW);
  delay(1000);
}
