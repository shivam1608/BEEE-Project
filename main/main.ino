// @shivzee (Shivam Bhatt)

#define gas_sensor A0   // Pin A0
#define red_led 13      // Pin 13
#define green_led 12    // Pin 12
#define buzzer 8        // Pin 8

int BREAK = 125;        // Define the breakpoint of somke sensor

// setup will run only at initial time
void setup(){
  pinMode(gas_sensor, INPUT);     // set the pin A0 to take input
  pinMode(red_led, OUTPUT);       // set the pin 13 to give output
  pinMode(green_led, OUTPUT);     // set the pin 12 to give output
  Serial.begin(9600);             // connect to serial
}

// this keeps updating
void loop(){

  int smoke_reading = analogRead(gas_sensor);        // reading form pin A0
  Serial.println(smoke_reading);                     // write the readings from A0 to serial

  if(smoke_reading > BREAK){                         // check if breakpoint is achived
    digitalWrite(red_led, HIGH);                     // set pin 13 to ON
    digitalWrite(green_led, LOW);                    // set pin 12 to OFF
    tone(buzzer, 220 , 200);                         // send analog signal to buzzer of 220 Hz for 200ms
  }else{
    digitalWrite(green_led, HIGH);                   // set pin 12 to ON
    digitalWrite(red_led, LOW);                      // set pin 13 to OFF
    noTone(buzzer);                                  // turn off the analog signal to buzzer
  }

}