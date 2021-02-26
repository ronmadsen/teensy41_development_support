//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// FILENAME : Teensy41_GPIO_MapTest.ino
//  UPDATED : 2021-JAN-21-THU @08:23 Creation
//   AUTHOR : Ron Madsen
//**********************************************************************************************************************

#include <Arduino.h>
#include <stdint.h>

//VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
//  MODULE : setup
// UPDATED : 2021-JAN-21-THU @08:24 Creation
//  AUTHOR : Ron Madsen
//**********************************************************************************************************************
void setup()
{
  GPIO6_DR = 0;
  GPIO7_DR = 0;
  GPIO8_DR = 0;
  GPIO9_DR = 0;

  pinMode(1, OUTPUT);  // PinLabel=1;  write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q2
  pinMode(0, OUTPUT);  // PinLabel=0;  write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q3

  pinMode(24, OUTPUT); // PinLabel=24; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q12
  pinMode(25, OUTPUT); // PinLabel=25; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q13

  pinMode(19, OUTPUT); // PinLabel=19; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q16
  pinMode(18, OUTPUT); // PinLabel=18; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q17
  pinMode(14, OUTPUT); // PinLabel=14; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q18
  pinMode(15, OUTPUT); // PinLabel=15; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q19
  pinMode(40, OUTPUT); // PinLabel=40; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q20
  pinMode(41, OUTPUT); // PinLabel=41; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q21
  pinMode(17, OUTPUT); // PinLabel=17; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q22
  pinMode(16, OUTPUT); // PinLabel=16; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q23
  pinMode(22, OUTPUT); // PinLabel=22; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q24
  pinMode(23, OUTPUT); // PinLabel=23; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q25
  pinMode(20, OUTPUT); // PinLabel=20; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q26
  pinMode(21, OUTPUT); // PinLabel=21; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q27
  pinMode(38, OUTPUT); // PinLabel=38; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q28
  pinMode(39, OUTPUT); // PinLabel=39; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q29
  pinMode(26, OUTPUT); // PinLabel=26; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q30
  pinMode(27, OUTPUT); // PinLabel=27; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q31

  pinMode(10, OUTPUT); // PinLabel=10; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q0
  pinMode(12, OUTPUT); // PinLabel=12; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q1
  pinMode(11, OUTPUT); // PinLabel=11; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q2
  pinMode(13, OUTPUT); // PinLabel=13; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q3

  pinMode(6, OUTPUT);  // PinLabel=6;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q10
  pinMode(9, OUTPUT);  // PinLabel=9;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q11
  pinMode(32, OUTPUT); // PinLabel=32; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q12

  pinMode(8, OUTPUT);  // PinLabel=8;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q16
  pinMode(7, OUTPUT);  // PinLabel=7;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q17
  pinMode(36, OUTPUT); // PinLabel=36; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q18
  pinMode(37, OUTPUT); // PinLabel=37; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q19

  pinMode(35, OUTPUT); // PinLabel=35; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q28
  pinMode(34, OUTPUT); // PinLabel=34; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q29

  pinMode(28, OUTPUT); // PinLabel=28; write to GPIO8_DR; read from GPIO8_PSR; set direction using GPIO8_GDIR; Bit: Q18

  pinMode(31, OUTPUT); // PinLabel=31; write to GPIO8_DR; read from GPIO8_PSR; set direction using GPIO8_GDIR; Bit: Q22
  pinMode(30, OUTPUT); // PinLabel=30; write to GPIO8_DR; read from GPIO8_PSR; set direction using GPIO8_GDIR; Bit: Q23

  pinMode(2, OUTPUT);  // PinLabel=2;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q4
  pinMode(3, OUTPUT);  // PinLabel=3;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q5
  pinMode(4, OUTPUT);  // PinLabel=4;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q6
  pinMode(33, OUTPUT); // PinLabel=33; write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q7
  pinMode(5, OUTPUT);  // PinLabel=5;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q8
  pinMode(29, OUTPUT); // PinLabel=29; write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q31

} // END OF MODULE setup
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

#define TOGGLE_GPIO(REG, BIT) REG |= ((uint32_t)1 << BIT); delayMicroseconds(200000); REG &= 0xFFFFFFFF ^ ((uint32_t)1 << BIT); delayMicroseconds(50000) 

//VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
//  MODULE : loop
// UPDATED : 2021-JAN-21-THU @08:54 Creation
//  AUTHOR : Ron Madsen
//**********************************************************************************************************************
void loop()
{
  static int16_t gpio_port_ID = 0;
  static int16_t bit_number = 0;
  static uint32_t val;
  
  TOGGLE_GPIO(GPIO6_DR, 2);  // PinLabel=1;  write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q2
  TOGGLE_GPIO(GPIO6_DR, 3);  // PinLabel=0;  write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q3
  TOGGLE_GPIO(GPIO6_DR, 12); // PinLabel=24; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q12
  TOGGLE_GPIO(GPIO6_DR, 13); // PinLabel=25; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q13
  TOGGLE_GPIO(GPIO6_DR, 16); // PinLabel=19; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q16
  TOGGLE_GPIO(GPIO6_DR, 17); // PinLabel=18; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q17
  TOGGLE_GPIO(GPIO6_DR, 18); // PinLabel=14; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q18
  TOGGLE_GPIO(GPIO6_DR, 19); // PinLabel=15; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q19
  TOGGLE_GPIO(GPIO6_DR, 20); // PinLabel=40; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q20
  TOGGLE_GPIO(GPIO6_DR, 21); // PinLabel=41; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q21
  TOGGLE_GPIO(GPIO6_DR, 22); // PinLabel=17; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q22
  TOGGLE_GPIO(GPIO6_DR, 23); // PinLabel=16; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q23
  TOGGLE_GPIO(GPIO6_DR, 24); // PinLabel=22; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q24
  TOGGLE_GPIO(GPIO6_DR, 25); // PinLabel=23; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q25
  TOGGLE_GPIO(GPIO6_DR, 26); // PinLabel=20; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q26
  TOGGLE_GPIO(GPIO6_DR, 27); // PinLabel=21; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q27
  TOGGLE_GPIO(GPIO6_DR, 28); // PinLabel=38; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q28
  TOGGLE_GPIO(GPIO6_DR, 29); // PinLabel=39; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q29
  TOGGLE_GPIO(GPIO6_DR, 30); // PinLabel=26; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q30
  TOGGLE_GPIO(GPIO6_DR, 31); // PinLabel=27; write to GPIO6_DR; read from GPIO6_PSR; set direction using GPIO6_GDIR; Bit: Q31
    
  TOGGLE_GPIO(GPIO7_DR, 0);  // PinLabel=10; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q0
  TOGGLE_GPIO(GPIO7_DR, 1);  // PinLabel=12; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q1
  TOGGLE_GPIO(GPIO7_DR, 2);  // PinLabel=11; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q2
  TOGGLE_GPIO(GPIO7_DR, 3);  // PinLabel=13; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q3
  TOGGLE_GPIO(GPIO7_DR, 10); // PinLabel=6;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q10
  TOGGLE_GPIO(GPIO7_DR, 11); // PinLabel=9;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q11
  TOGGLE_GPIO(GPIO7_DR, 12); // PinLabel=32; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q12
  TOGGLE_GPIO(GPIO7_DR, 16); // PinLabel=8;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q16
  TOGGLE_GPIO(GPIO7_DR, 17); // PinLabel=7;  write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q17
  TOGGLE_GPIO(GPIO7_DR, 18); // PinLabel=36; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q18
  TOGGLE_GPIO(GPIO7_DR, 19); // PinLabel=37; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q19
  TOGGLE_GPIO(GPIO7_DR, 28); // PinLabel=35; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q28
  TOGGLE_GPIO(GPIO7_DR, 29); // PinLabel=34; write to GPIO7_DR; read from GPIO7_PSR; set direction using GPIO7_GDIR; Bit: Q29
    
  TOGGLE_GPIO(GPIO8_DR, 18); // PinLabel=28; write to GPIO8_DR; read from GPIO8_PSR; set direction using GPIO8_GDIR; Bit: Q18
  TOGGLE_GPIO(GPIO8_DR, 22); // PinLabel=31; write to GPIO8_DR; read from GPIO8_PSR; set direction using GPIO8_GDIR; Bit: Q22
  TOGGLE_GPIO(GPIO8_DR, 23); // PinLabel=30; write to GPIO8_DR; read from GPIO8_PSR; set direction using GPIO8_GDIR; Bit: Q23
    
  TOGGLE_GPIO(GPIO9_DR, 4);  // PinLabel=2;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q4
  TOGGLE_GPIO(GPIO9_DR, 5);  // PinLabel=3;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q5
  TOGGLE_GPIO(GPIO9_DR, 6);  // PinLabel=4;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q6
  TOGGLE_GPIO(GPIO9_DR, 7);  // PinLabel=33; write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q7
  TOGGLE_GPIO(GPIO9_DR, 8);  // PinLabel=5;  write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q8
  TOGGLE_GPIO(GPIO9_DR, 31); // PinLabel=29; write to GPIO9_DR; read from GPIO9_PSR; set direction using GPIO9_GDIR; Bit: Q31

  // Now prove that the Teensy 4.1 edge pins are wired in correct bit order.
  // There will be gaps, where GPIO bits get activated which are not connected to edge pins.
  
  for (gpio_port_ID = 0; gpio_port_ID <= 3; gpio_port_ID++)
  {
    for (bit_number = 0; bit_number <= 31; bit_number++)
    {
      val = 1 << bit_number; 
      if (gpio_port_ID == 0)
      {
        GPIO6_DR = val;
        GPIO7_DR = 0;    
        GPIO8_DR = 0;    
        GPIO9_DR = 0;    
      }
      else if (gpio_port_ID == 1)
      {
        GPIO6_DR = 0;    
        GPIO7_DR = val;    
        GPIO8_DR = 0;    
        GPIO9_DR = 0;    
      }
      else if (gpio_port_ID == 2)
      {
        GPIO6_DR = 0;    
        GPIO7_DR = 0;    
        GPIO8_DR = val;    
        GPIO9_DR = 0;    
      }
      else if (gpio_port_ID == 3)
      {
        GPIO6_DR = 0;
        GPIO7_DR = 0;    
        GPIO8_DR = 0;    
        GPIO9_DR = val;    
      }
      delay(250);
    }
  }
  
  GPIO6_DR = 0;
  GPIO7_DR = 0;    
  GPIO8_DR = 0;    
  GPIO9_DR = 0;
  
  // use the Arduino library function to toggle the Teensy 4.1 edge pins in bit order, using their labeled names    
  digitalWrite(1, HIGH); delayMicroseconds(300000); digitalWrite(1, LOW); delayMicroseconds(50000);
  digitalWrite(0, HIGH); delayMicroseconds(300000); digitalWrite(0, LOW); delayMicroseconds(50000);
  digitalWrite(24, HIGH); delayMicroseconds(300000); digitalWrite(24, LOW); delayMicroseconds(50000);
  digitalWrite(25, HIGH); delayMicroseconds(300000); digitalWrite(25, LOW); delayMicroseconds(50000);
  digitalWrite(19, HIGH); delayMicroseconds(300000); digitalWrite(19, LOW); delayMicroseconds(50000);
  digitalWrite(18, HIGH); delayMicroseconds(300000); digitalWrite(18, LOW); delayMicroseconds(50000);
  digitalWrite(14, HIGH); delayMicroseconds(300000); digitalWrite(14, LOW); delayMicroseconds(50000);
  digitalWrite(15, HIGH); delayMicroseconds(300000); digitalWrite(15, LOW); delayMicroseconds(50000);
  digitalWrite(40, HIGH); delayMicroseconds(300000); digitalWrite(40, LOW); delayMicroseconds(50000);
  digitalWrite(41, HIGH); delayMicroseconds(300000); digitalWrite(41, LOW); delayMicroseconds(50000);
  digitalWrite(17, HIGH); delayMicroseconds(300000); digitalWrite(17, LOW); delayMicroseconds(50000);
  digitalWrite(16, HIGH); delayMicroseconds(300000); digitalWrite(16, LOW); delayMicroseconds(50000);
  digitalWrite(22, HIGH); delayMicroseconds(300000); digitalWrite(22, LOW); delayMicroseconds(50000);
  digitalWrite(23, HIGH); delayMicroseconds(300000); digitalWrite(23, LOW); delayMicroseconds(50000);
  digitalWrite(20, HIGH); delayMicroseconds(300000); digitalWrite(20, LOW); delayMicroseconds(50000);
  digitalWrite(21, HIGH); delayMicroseconds(300000); digitalWrite(21, LOW); delayMicroseconds(50000);
  digitalWrite(38, HIGH); delayMicroseconds(300000); digitalWrite(38, LOW); delayMicroseconds(50000);
  digitalWrite(39, HIGH); delayMicroseconds(300000); digitalWrite(39, LOW); delayMicroseconds(50000);
  digitalWrite(26, HIGH); delayMicroseconds(300000); digitalWrite(26, LOW); delayMicroseconds(50000);
  digitalWrite(27, HIGH); delayMicroseconds(300000); digitalWrite(27, LOW); delayMicroseconds(50000);

  digitalWrite(10, HIGH); delayMicroseconds(300000); digitalWrite(10, LOW); delayMicroseconds(50000);
  digitalWrite(12, HIGH); delayMicroseconds(300000); digitalWrite(12, LOW); delayMicroseconds(50000);
  digitalWrite(11, HIGH); delayMicroseconds(300000); digitalWrite(11, LOW); delayMicroseconds(50000);
  digitalWrite(13, HIGH); delayMicroseconds(300000); digitalWrite(13, LOW); delayMicroseconds(50000);
  digitalWrite(6, HIGH); delayMicroseconds(300000); digitalWrite(6, LOW); delayMicroseconds(50000);
  digitalWrite(9, HIGH); delayMicroseconds(300000); digitalWrite(9, LOW); delayMicroseconds(50000);
  digitalWrite(32, HIGH); delayMicroseconds(300000); digitalWrite(32, LOW); delayMicroseconds(50000);
  digitalWrite(8, HIGH); delayMicroseconds(300000); digitalWrite(8, LOW); delayMicroseconds(50000);
  digitalWrite(7, HIGH); delayMicroseconds(300000); digitalWrite(7, LOW); delayMicroseconds(50000);
  digitalWrite(36, HIGH); delayMicroseconds(300000); digitalWrite(36, LOW); delayMicroseconds(50000);
  digitalWrite(37, HIGH); delayMicroseconds(300000); digitalWrite(37, LOW); delayMicroseconds(50000);
  digitalWrite(35, HIGH); delayMicroseconds(300000); digitalWrite(35, LOW); delayMicroseconds(50000);
  digitalWrite(34, HIGH); delayMicroseconds(300000); digitalWrite(34, LOW); delayMicroseconds(50000);

  digitalWrite(28, HIGH); delayMicroseconds(300000); digitalWrite(28, LOW); delayMicroseconds(50000);
  digitalWrite(31, HIGH); delayMicroseconds(300000); digitalWrite(31, LOW); delayMicroseconds(50000);
  digitalWrite(30, HIGH); delayMicroseconds(300000); digitalWrite(30, LOW); delayMicroseconds(50000);

  digitalWrite(2, HIGH); delayMicroseconds(300000); digitalWrite(2, LOW); delayMicroseconds(50000);
  digitalWrite(3, HIGH); delayMicroseconds(300000); digitalWrite(3, LOW); delayMicroseconds(50000);
  digitalWrite(4, HIGH); delayMicroseconds(300000); digitalWrite(4, LOW); delayMicroseconds(50000);
  digitalWrite(33, HIGH); delayMicroseconds(300000); digitalWrite(33, LOW); delayMicroseconds(50000);
  digitalWrite(5, HIGH); delayMicroseconds(300000); digitalWrite(5, LOW); delayMicroseconds(50000);
  digitalWrite(29, HIGH); delayMicroseconds(300000); digitalWrite(29, LOW); delayMicroseconds(50000);

} // END OF MODULE loop
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// END OF FILE "Teensy41_GPIO_MapTest.ino"
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
