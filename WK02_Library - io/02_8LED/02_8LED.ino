// Lab2 - 2 : 8_LED
// Global para ประกาศ
int led_1 = 2;
int led_2 = 4;
int led_3 = 5;
int led_4 = 18;
int led_5 = 19;
int led_6 = 21;
int led_7 = 22;
int led_8 = 23;

void setup() {  // ทำ 1 ครั้ง
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
}

void loop() { //ทำไม่รู้จบ
  // job 1/3 : go
  digitalWrite(led_1, LOW); delay(500); digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW); delay(500); digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW); delay(500); digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW); delay(500); digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW); delay(500); digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW); delay(500); digitalWrite(led_6, HIGH);
  digitalWrite(led_7, LOW); delay(500); digitalWrite(led_7, HIGH);
  digitalWrite(led_8, LOW); delay(500); digitalWrite(led_8, HIGH);
  // job 2/3 : back
  digitalWrite(led_8, LOW); delay(500); digitalWrite(led_8, HIGH);
  digitalWrite(led_7, LOW); delay(500); digitalWrite(led_7, HIGH);
  digitalWrite(led_6, LOW); delay(500); digitalWrite(led_6, HIGH);
  digitalWrite(led_5, LOW); delay(500); digitalWrite(led_5, HIGH);
  digitalWrite(led_4, LOW); delay(500); digitalWrite(led_4, HIGH);
  digitalWrite(led_3, LOW); delay(500); digitalWrite(led_3, HIGH);
  digitalWrite(led_2, LOW); delay(500); digitalWrite(led_2, HIGH);
  digitalWrite(led_1, LOW); delay(500); digitalWrite(led_1, HIGH);
  // job 3/3 : blink 2 x
  // Blink All : 1
  digitalWrite(led_8, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_1, LOW);
  delay(500);
  digitalWrite(led_8, HIGH);
  digitalWrite(led_7, HIGH);
  digitalWrite(led_6, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_1, HIGH);
  delay(200);
  // Blink All : 2
  digitalWrite(led_8, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_1, LOW);
  delay(500);
  digitalWrite(led_8, HIGH);
  digitalWrite(led_7, HIGH);
  digitalWrite(led_6, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_1, HIGH);
}
