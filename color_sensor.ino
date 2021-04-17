#include <Servo.h>

#define S0 2
#define S1 3
#define S2 4
#define S3 5
#define sensorOut 6

Servo topServo;
Servo bottomServo

int frequency = 0;
int color = 0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  topServo.attach(7);
  bottomServo.attach(8);


  Serial.begin(9600);
}

void loop () {

  topServo.write(115);
  delay(500);  

 for(int i = 115; i > 65; i--) {
  topServo.write(i);
  delay(2);
 }
 delay(500);

 color = readColor();
 delay(10);

 switch (color) {
  case
 }
  
  
  
  
  
  
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  frequency = pulseIn(sensorOut, LOW);

  frequency = map(frequency, 25, 72, 255, 0);

  Serial.print("R= ");
  Serial.print(frequency);

  Serial.print("  ");
  delay(100);

  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);

  frequency = pulseIn(sensorOut, LOW);

  frequency = map(frequency, 30, 90, 255, 0);

  Serial.print("G= ");
  Serial.print(frequency);

  Serial.print("  ");
  delay(100);

  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  frequency = pulseIn(sensorOut, LOW);

  frequency = map(frequency, 25, 70, 255, 0);

  Serial.print("B= ");
  Serial.print(frequency);

  Serial.println("  ");
  delay(100);


}
