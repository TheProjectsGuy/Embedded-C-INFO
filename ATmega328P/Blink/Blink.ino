int main() {
  DDRB |= (1 << PB5); //Digital Pin 13
  while(true) {
    PORTB ^= (1 << PB5);  //Toggle the LED on Pin 13
    _delay_ms(1000);  //Delay of 1 second
  }
  return 0;
}

