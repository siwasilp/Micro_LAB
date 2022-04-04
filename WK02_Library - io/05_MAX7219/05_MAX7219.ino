// LAB2_5:MAX7219
// 5.1 ท้าทาย [ ADD 3 point ]
                           //   1234   5678
                           //      C      H
// ท้าทาย DHT 11 >> MAX 7219 [ 25.6 C 56.7 H ]
#include <SPI.h>
#include <bitBangedSPI.h>
#include <MAX7219.h>
const byte chips = 1;
// ESP32 - 7219    / CS / DIN / CLK
MAX7219 display (chips,19, 21, 18);  

void setup ()
  {
  display.begin ();
  display.sendString ("B5500208");
  } 

void loop ()
  {
  
  }  // end of loop
