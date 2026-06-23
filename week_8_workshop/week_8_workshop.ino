void setup() {
  Serial.begin(9600);
  Serial.println(78);
  Serial.println(1.23456);
  Serial.println('N');
  Serial.println("Hello world.");
  
  Serial.println(78, BIN); //displays "1001110"

  Serial.println(78, OCT); //displays "116"

  Serial.println(78, DEC); //displays "78"

  Serial.println(78, HEX); //displays "4E"

  Serial.println(1.23456, 0); //displays "1"

  Serial.println(1.23456, 2); //displays "1.23"

  Serial.println(1.23456, 4); //displays "1.2346"

}

void loop() {
  // put your main code here, to run repeatedly:

}
