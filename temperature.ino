//offset voltage:- 0.5v
//10mv=0.01v =1°C


void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
int value= analogRead(A1);
float voltage= value*5.0/1024;
float temp=(voltage-0.5)*100;

Serial.println(temp);
delay(1000);
}
