#include <stdint>

#define RCGCGPIO_ENR (*(volatile unsigned int *) 0x400FE608) // Run Mode Clock Gate Control for GPIO Enable Register
#define PORTF_GPIODIR (*(volatile unsigned int *) 0x40025400) // Direction of GPIO Port F
#define PORTF_GPIODATA (*(volatile unsigned int *) 0x40025000) // Data on GPIO Port F
#define PORTF_GPIODEN (*(volatile unsigned int *) 0x4002551C) // Digital Enable on GPIO Port F

void main(void)
{
	RCGCGPIO_ENR |= 1 << 5; // enable clock
	PORTF_GPIODEN |= 1 << 1; // digital enable
	PORTF_GPIODIR |= 1 << 1; // set direction to output

	while (1) 
	{
		PORTF_GPIODATA |= 1 << 1; // turn on light
		for(int i = 0; i < 10000; i++;) {}
		PORTF_GPIODATA &= ~(1 << 1); // turn off light
		for(int i = 0; i < 10000; i++) {}
	}
}
