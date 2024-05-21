#define pin 7
#define buzzer 9
int ran =0;
int c = 1;
void setup() {
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);  
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
  digitalWrite(pin,LOW);
}


void loop() {
  
  if(c == 1){
  

  
  Serial.println("Rotating");
  digitalWrite(buzzer,HIGH);
  digitalWrite(pin,HIGH);
  ran = random(2000,8000);
    Serial.print("Random Value : ");
  Serial.println(ran);
  delay(ran);
  digitalWrite(pin,LOW);
  Serial.println("Stopped");
  digitalWrite(buzzer,LOW);
  // put your main code here, to run repeatedly:
}
c = 0;
}
