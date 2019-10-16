void setup() {
Serial.begin(9600);
pinMode(5,OUTPUT);
}
void loop() {
int a;
a=Serial.parseInt();
Serial.print(a);

Page 10 of 20

analogWrite(5,a);
delay(1000);
}