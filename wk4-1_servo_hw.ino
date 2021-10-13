#include <Servo.h>  //匯入函式庫
Servo myservo;  // 建立伺服馬達控制

const int servoPin = 14;  //用常態變數設定pin腳位，與之前define方式差不多
int pos = 0;

void setup() {
  myservo.attach(servoPin);  // 將伺服馬達連接的GPIO pin連接伺服物件
  Serial.begin(115200);//序列阜連線速率(鮑率)
  pinMode(13,INPUT);
  myservo.attach(servoPin);
}

void loop() {
// for(pos = 0; pos < 360; pos++){ // 一度一度由 0 度旋轉到 180 度
//        myservo.write(pos); //Servo設定角度
//        Serial.println(pos);
//        delay(50);
// }
 int input = analogRead(13);
 int input_map=map(input,0,4095,0,360);
 Serial.println(input_map);
  myservo.write(input_map);
//  delay(50);
}