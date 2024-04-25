int soilSensor1 = 0;
int soilSensor2 = 1; 
int soilSensor3 = 2; 

int relayControl1 = 7;
int relayControl2 = 6; 
int relayControl3 = 5; 


int Pump = 0;



void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT); 
  pinMode(A2, INPUT); 


  Serial.begin(9600);

  pinMode(3, OUTPUT);
  //pinMode
  //pinMode(); 

  //Serial.begin(9600);

  pinMode(relayControl1, OUTPUT);
  pinMode(relayControl2, OUTPUT); 
  pinMode(relayControl3, OUTPUT); 
}



void loop() {
  Serial.println(soilSensor1);
  if (soilSensor1 > 500) { // control first pump
    digitalWrite(relayControl1,HIGH);// NO1 and COM1 Connected (Pump on)
  } else {
    digitalWrite(relayControl1,LOW);// NO1 and COM1 disconnected (Pump off)
  }
  soilSensor1 = analogRead(A0);


  if (soilSensor2 > 500) { // control second pump
    digitalWrite(relayControl2,HIGH);// NO1 and COM1 Connected (Pump on)
  } else {
    digitalWrite(relayControl2,LOW);// NO1 and COM1 disconnected (Pump off)
  }
  soilSensor2 = analogRead(A1);

  if (soilSensor3 > 500) { // control third pump
    digitalWrite(relayControl3,HIGH);// NO1 and COM1 Connected (Pump on)
  } else {
    digitalWrite(relayControl3,LOW);// NO1 and COM1 disconnected (Pump off)
  }
  soilSensor3 = analogRead(A2);



  delay(10); // Delay a little bit to improve simulation performance

}