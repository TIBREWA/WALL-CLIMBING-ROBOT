int in1 = 2;
int in2 = 4;
int in3 = 12;
int in4 = 13;
int enable1 = 3;  // pin with ~ symbol
int enable2 = 11;  // pin with ~ symbol

int channel_1 = 9;
int channel_2 = 10;  // pin with ~ symbol

int en1roller = 5;
int en2roller = 6;
int in1roller = 7;
int in2roller = 8;

void setup() 
{
  pinMode(channel_1, INPUT);
  pinMode(channel_2, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT); 
  Serial.begin(9600);
}

void loop() {

  controlmotor1();
  controlmotor2();
}

void controlmotor1() {
  int pwm = 0;
  int value1 = pulseIn(channel_1, HIGH, 25000);


  if(value1==0)
  {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      analogWrite(enable1, 0);
  }
  
  else if(value1 > 1530)
  {
      pwm = map(value1, 1530, 2000, 0, 255); 
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      analogWrite(enable1, pwm);
  }
  
  else if(value1 < 1460)
  {
      pwm = map(value1, 1460, 1000, 0, 255); 
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(enable1, pwm);
  }
  
  else
  {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      analogWrite(enable1, 0);
  }
Serial.println(value1),
  delay(10);
}

void controlmotor2() {
  int pwm1 = 0;
  int value2 = pulseIn(channel_2, HIGH, 25000);


  if(value2==0)
  {
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      analogWrite(enable2, 0);
  }
  
  else if(value2 > 1530)
  {
      pwm1 = map(value2, 1530, 2000, 0, 255); 
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      analogWrite(enable2, pwm1);
  }
  
  else if(value2 < 1460)
  {
      pwm1 = map(value2, 1460, 1000, 0, 255); 
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enable2, pwm1);
  }
  
  else
  {
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      analogWrite(enable2, 0);
  }
Serial.println(value2),
  delay(10);
}
