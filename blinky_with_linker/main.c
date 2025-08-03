#define RCGCGPIO_ENR (*((volatile unsigned long *) 0x400FE608)) // Run Mode Clock Gate Control for GPIO Enable Register
#define PORTF_GPIODIR (*((volatile unsigned int *) 0x40025400)) // Direction of GPIO Port F
#define PORTF_GPIODATA (*(volatile unsigned int *) 0x40025038) // Data on GPIO Port F
#define PORTF_GPIODEN (*(volatile unsigned int *) 0x4002551C) // Digital Enable on GPIO Port F

void main(void)
{
	RCGCGPIO_ENR |= (1 << 5); // enable clock
	PORTF_GPIODEN = 0x0E; // digital enable
	PORTF_GPIODIR = 0x0E; // set direction to output

	volatile int i; 
	while (1) 
	{
		PORTF_GPIODATA |= (1 << 3); // turn on light
		for(i = 0; i < 250000; i++) {}
		PORTF_GPIODATA &= ~(1 << 3); // turn off light
		for(i = 0; i < 250000; i++) {}
	}
}
