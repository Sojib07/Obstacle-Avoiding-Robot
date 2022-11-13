const int trigf = 3;
const int echof = 4;
const int in1= 5;
const int in2= 6;
const int in3= 7;
const int in4= 8;
const int ena= 9;
const int enb= 10; 
int i,distf;
long timef;

void setup() {
  // put your setup code here, to run once:
  for(i=5;i<=10;i++)
    pinMode(i,OUTPUT);
    pinMode(trigf, OUTPUT); 
    pinMode(echof, INPUT); 
  
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(trigf, LOW);
    delayMicroseconds(2);

    digitalWrite(trigf, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigf, LOW);
    timef = pulseIn(echof,HIGH);
    distf= timef*0.034/2;

    if(distf<20)
    {
      analogWrite(ena,250);
      analogWrite(enb,250);
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      delay(500);
    }

     else 
    {
      analogWrite(ena,150);
      analogWrite(enb,150);
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      }

}
