#include <Wire.h> // This library allows you to communicate with I2C/TWI devices
#include <Digital_Light_TSL2561.h> // This module is based on the I2C light-to-digital converter TSL2561 to transform light intensity to a digital signal.
void setup()
{
  Wire.begin();
  Serial.begin(9600);
  TSL2561.init();
}
 
void loop()
{
  Serial.print("The Light value is: ");
  Serial.println(TSL2561.readVisibleLux());
  delay(1000);
}