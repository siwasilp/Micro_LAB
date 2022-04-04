// Lab2 - 3 : 2Swicth
// Global para ประกาศ
//======= SW_INPUT ======
int sw_1 = 22;
int sw_2 = 23;
//====== LED_OUT ========
int led_b = 21;
int led_r = 19;
int led_y = 18;
int led_g = 5;

void setup() {  // ทำ 1 ครั้ง
  pinMode(led_b, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_y, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(sw_1, INPUT_PULLUP);
  pinMode(sw_2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() { //ทำไม่รู้จบ
  int sw_a = digitalRead(sw_1);
  int sw_b = digitalRead(sw_2);
  Serial.print(sw_a);
  Serial.println(sw_b);


  if (sw_a == 0 ) {
    Serial.println("SW1_yyyyy");
    digitalWrite(led_b, LOW);
    digitalWrite(led_r, LOW);
    digitalWrite(led_y, LOW);
    digitalWrite(led_g, LOW);
  } else {
    digitalWrite(led_b, HIGH); delay(500); digitalWrite(led_b, LOW);
    digitalWrite(led_r, HIGH); delay(500); digitalWrite(led_r, LOW);
    digitalWrite(led_y, HIGH); delay(500); digitalWrite(led_y, LOW);
    digitalWrite(led_g, HIGH); delay(500); digitalWrite(led_g, LOW);
  }

  if (sw_b == 0 ) {
    Serial.println("SW2_XXXXXX");
    // job 1/3 : go
    digitalWrite(led_b, HIGH); delay(500); digitalWrite(led_b, LOW);
    digitalWrite(led_r, HIGH); delay(500); digitalWrite(led_r, LOW);
    digitalWrite(led_y, HIGH); delay(500); digitalWrite(led_y, LOW);
    digitalWrite(led_g, HIGH); delay(500); digitalWrite(led_g, LOW);
    // job 2/3 : back
    digitalWrite(led_g, HIGH); delay(500); digitalWrite(led_g, LOW);
    digitalWrite(led_y, HIGH); delay(500); digitalWrite(led_y, LOW);
    digitalWrite(led_r, HIGH); delay(500); digitalWrite(led_r, LOW);
    digitalWrite(led_b, HIGH); delay(500); digitalWrite(led_b, LOW);
    // job 3/3 : blink 2 x
    // Blink All : 1
    digitalWrite(led_b, HIGH);
    digitalWrite(led_r, HIGH);
    digitalWrite(led_y, HIGH);
    digitalWrite(led_g, HIGH);
    delay(200);
    digitalWrite(led_b, LOW);
    digitalWrite(led_r, LOW);
    digitalWrite(led_y, LOW);
    digitalWrite(led_g, LOW);
    delay(200);
    // Blink All : 2
    digitalWrite(led_b, HIGH);
    digitalWrite(led_r, HIGH);
    digitalWrite(led_y, HIGH);
    digitalWrite(led_g, HIGH);
    delay(200);
    digitalWrite(led_b, LOW);
    digitalWrite(led_r, LOW);
    digitalWrite(led_y, LOW);
    digitalWrite(led_g, LOW);
    delay(200);
  }

}
