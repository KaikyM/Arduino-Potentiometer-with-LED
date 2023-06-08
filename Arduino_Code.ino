// C++ code
int ReadValue = 0;
void setup(){
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  ReadValue = analogRead(A0);
  digitalWrite(13, HIGH);
  delay(ReadValue);
  digitalWrite(13, LOW);
  delay(ReadValue);
}
