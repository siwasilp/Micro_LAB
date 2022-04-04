#include <TM1638plus.h>
#define Brd_STB 18 // strobe = GPIO connected to strobe line of module
#define Brd_CLK 19 // clock = GPIO connected to clock line of module
#define Brd_DIO 21 // data = GPIO connected to data line of module
bool high_freq = true; //default false,, If using a high freq CPU > ~100 MHZ set to true.
TM1638plus tm(Brd_STB, Brd_CLK , Brd_DIO, high_freq);
#define myTestDelay 1000
void setup()
{ Serial.begin(115200);
  tm.displayBegin();
  delay(myTestDelay);
  tm.display7Seg(0, 0x40);
  tm.display7Seg(1, 0x40);
  tm.display7Seg(2, 0x40);
  tm.display7Seg(3, 0x40);
  tm.display7Seg(4, 0x40);
  tm.display7Seg(5, 0x40);
  tm.display7Seg(6, 0x40);
  tm.display7Seg(7, 0x40);
}
void loop() {
  int SwInput = tm.readButtons();
  Serial.print("Switch Input = ");
  Serial.println(SwInput, HEX);

  tm.setLED(0, 0);
  tm.setLED(1, 0);
  tm.setLED(2, 0);
  tm.setLED(3, 0);
  tm.setLED(4, 0);
  tm.setLED(5, 0);
  tm.setLED(6, 0);
  tm.setLED(7, 0);
  tm.display7Seg(0, 0x40);   // >>> 0100 0000 >> tgfe dcba
  tm.display7Seg(1, 0x40);
  tm.display7Seg(2, 0x40);
  tm.display7Seg(3, 0x40);
  tm.display7Seg(4, 0x40);
  tm.display7Seg(5, 0x40);
  tm.display7Seg(6, 0x40);
  tm.display7Seg(7, 0x40);

  if (SwInput == 0x01) {
    tm.setLED(0, 1); tm.displayHex(0, 1);
  }
  if (SwInput == 0x02) {
    tm.setLED(1, 1); tm.displayHex(1, 2);
  }
  if (SwInput == 0x04) {
    tm.setLED(2, 1); tm.displayHex(2, 3);
  }
  if (SwInput == 0x08) {
    tm.setLED(3, 1); tm.displayHex(3, 4);
  }
  if (SwInput == 0x10) {
    tm.setLED(4, 1); tm.displayHex(4, 5);
  }
  if (SwInput == 0x20) {
    tm.setLED(5, 1); tm.displayHex(5, 6);
  }
  if (SwInput == 0x40) {
    tm.setLED(6, 1); tm.displayHex(6, 7);
  }
  if (SwInput == 0x80) {
    tm.setLED(7, 1); tm.displayHex(7, 8);
  }
  delay(100);
}
