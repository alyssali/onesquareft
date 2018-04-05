/*************************************************** 
  This is a library for our I2C LED Backpacks

  Designed specifically to work with the Adafruit LED 7-Segment backpacks 
  ----> http://www.adafruit.com/products/881
  ----> http://www.adafruit.com/products/880
  ----> http://www.adafruit.com/products/879
  ----> http://www.adafruit.com/products/878

  These displays use I2C to communicate, 2 pins are required to 
  interface. There are multiple selectable I2C addresses. For backpacks
  with 2 Address Select pins: 0x70, 0x71, 0x72 or 0x73. For backpacks
  with 3 Address Select pins: 0x70 thru 0x77

  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/

#include <Wire.h> // Enable this line if using Arduino Uno, Mega, etc.
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_7segment matrix = Adafruit_7segment();

int potPin1 = 0;
int potPin2 = 1;
int val1 = 0;
int val2 = 0;

void setup() {
#ifndef __AVR_ATtiny85__
  Serial.begin(9600);
  Serial.println("7 Segment Backpack Test");
#endif
  matrix.begin(0x70);
  //attachInterrupt(digitalPinToInterrupt(0), loop, CHANGE);
} 

void loop() {

  val1 = analogRead(potPin1);
  Serial.println("val1 =");
  Serial.println(val1);

  val2 = analogRead(potPin2);
  Serial.println("val2 =");
  Serial.println(val2);

  if(val1 < 250 && val2 < 250) {
  matrix.print(3.59);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 < 250) && (val2 > 250) && (val2 < 500)) {
  matrix.print(4.32);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 < 250) && (val2 > 500) && (val2 < 750)) {
  matrix.print(4.08);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 < 250) && (val2 > 750)) {
  matrix.print(4.24);
  matrix.writeDisplay();
  delay(2000);
  }

 
  if((val1 > 250) && (val1 < 500) && (val2 < 250)) {
  matrix.print(2.85);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 250) && (val1 < 500) && (val2 > 250) && (val2 < 500)) {
  matrix.print(3.39);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 250) && (val1 < 500) && (val2 > 500) && (val2 < 750)) {
  matrix.print(3.57);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 250) && (val1 < 500) && (val2 > 750)) {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
  matrix.print(4.38);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 500) && (val1 < 750) && (val2 < 250)) {
  matrix.print(5.76);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 500) && (val1 < 750) && (val2 > 250) && (val2 < 500)) {
  matrix.print(4.95);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 500) && (val1 < 750) && (val2 > 500) && (val2 < 750)) {
  matrix.print(6.63);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 500) && (val1 < 750) && (val2 > 750)) {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
  matrix.print(5.71);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 750) && (val2 < 250)) {
  matrix.print(0.94);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 750) && (val2 > 250) && (val2 < 500)) {
  matrix.print(1.07);
  matrix.writeDisplay();
  delay(2000);
  }


  if((val1 > 750) && (val2 > 500) && (val2 < 750)) {
  matrix.print(1.15);
  matrix.writeDisplay();
  delay(2000);
  }

  if((val1 > 750) && (val2 > 750)) {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
  matrix.print(1.53);
  matrix.writeDisplay();
  delay(2000);
  }  


  

}

 
