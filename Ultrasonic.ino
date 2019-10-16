#include<NewPing.h>
int echo=12;
int trig =13;
int m=0;
NewPing sonar(trig,echo,maxdist); int
h1,h2;
void setup() {
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(4,INPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
Serial.begin(9600);
}
void loop()
{
h1=digitalRead(A0);
h2=digitalRead(A1);
m=sonar.ping_cm();

4

if(m>0 && m<20) {
stopBuggy();
delay(2000);
}
else{
if(h1==1 && h2==1) {
forward(); }
else if(h1==0 && h2==0) {
forward();
}
else if(h1==0 && h2==1) {
left();
}
else if(h1==1 && h2==0) {
right();
}
}}
void stopBuggy() {
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW); }

5

void forward() {
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void right() {
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void left(
)
{
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}