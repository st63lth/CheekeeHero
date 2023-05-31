/**
 * ENEL599 2021 - Assignment 2 - Analog Signal via Serial Comms
 *
 * This Arduino program takes analog input via a potentiometer and transfers the amplitude from analog to digital 
 * so a RED LED or GREEN LED light up depending on the voltage change of the potentiometer. A buzzer is implemented 
 * when the potentiometer amplitude nears 5V (volts) and the change in on off states make the LEDs fade into one another.
 *
 * @author Kevin Vi, Student ID 20118699
 * @version 1 24/09/2021: Creator
 */
// const int PIN_LEDS[] = {3, 5}; // led pins
// const int NUM_LEDS = (sizeof(PIN_LEDS) / sizeof(PIN_LEDS[0]));
const int PIN_PT = A0; // potentiometer pin

 void setup(){
  Serial.begin(115200); //set baudrate for serial monitor
  
  //for (int i = 0; i < NUM_LEDS; i++){
   // int pin = PIN_LEDS[i];
    //pinMode(pin, OUTPUT);
    //digitalWrite(pin, LOW); // keep LEDs off
    //}
}

  void loop()
  {
    //int ptValue = analogRead(PIN_PT); // observe potentiometer analog value
    //Serial.println(ptValue);
    Serial.write(analogRead(PIN_PT));
    delay(50);
    // split 16bit data into high and low byte
    //int byteHigh = (ptValue >> 8) & 0xFF;
    //int byteLow = ptValue & 0xFF;

    // send data, highbyte first (big endian)
    //Serial.write(byteHigh);
    //Serial.write(byteLow);
    //Serial.print(byteHigh, byteLow);
    
  }
  // function that receives new threshold value from processing sketch to compare with Green & Red LEDs and buzzer
  //void thresholdUpdate()
  //{
    //Serial.read
    
  //}
