// Global para ประกาศ
int led_b = 21;
int led_r = 19;
int led_y = 18;
int led_g = 5;

void setup() {  // ทำ 1 ครั้ง
 pinMode(led_b, OUTPUT);
 pinMode(led_r, OUTPUT);
 pinMode(led_y, OUTPUT);
 pinMode(led_g, OUTPUT);
}

void loop() { //ทำไม่รู้จบ
  // job 1/3 : go
  digitalWrite(led_b,HIGH); delay(500); digitalWrite(led_b,LOW);
  digitalWrite(led_r,HIGH); delay(500); digitalWrite(led_r,LOW);
  digitalWrite(led_y,HIGH); delay(500); digitalWrite(led_y,LOW);
  digitalWrite(led_g,HIGH); delay(500); digitalWrite(led_g,LOW);
  // job 2/3 : back
  digitalWrite(led_g,HIGH); delay(500); digitalWrite(led_g,LOW);
  digitalWrite(led_y,HIGH); delay(500); digitalWrite(led_y,LOW);
  digitalWrite(led_r,HIGH); delay(500); digitalWrite(led_r,LOW);
  digitalWrite(led_b,HIGH); delay(500); digitalWrite(led_b,LOW);
  // job 3/3 : blink 2 x
  // Blink All : 1
  digitalWrite(led_b,HIGH); 
  digitalWrite(led_r,HIGH);  
  digitalWrite(led_y,HIGH); 
  digitalWrite(led_g,HIGH); 
  delay(200); 
  digitalWrite(led_b,LOW); 
  digitalWrite(led_r,LOW);  
  digitalWrite(led_y,LOW); 
  digitalWrite(led_g,LOW); 
  delay(200); 
  // Blink All : 2 
  digitalWrite(led_b,HIGH); 
  digitalWrite(led_r,HIGH);  
  digitalWrite(led_y,HIGH); 
  digitalWrite(led_g,HIGH); 
  delay(200); 
  digitalWrite(led_b,LOW); 
  digitalWrite(led_r,LOW);  
  digitalWrite(led_y,LOW); 
  digitalWrite(led_g,LOW); 
  delay(200);            
}
