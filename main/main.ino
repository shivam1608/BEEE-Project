// @shivzee (Shivam Bhatt)

#define gas_sensor A0
#define red_led 13
#define green_led 12
#define buzzer 8

int BREAK = 125;

void setup(){
  pinMode(gas_sensor, INPUT);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int smoke_reading = analogRead(gas_sensor);
  Serial.println(smoke_reading);
  if(smoke_reading > BREAK){
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
    tone(buzzer, 220 , 200);
  }else{
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);
    noTone(buzzer);
  }
}