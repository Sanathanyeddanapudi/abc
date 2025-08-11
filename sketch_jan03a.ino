int data;
void setup() {
Serial.begin(9600);
}

void loop() {
 while(Serial.available()>0)
 {
 data=Serial.read();
 Serial.println(data);
 }
}
