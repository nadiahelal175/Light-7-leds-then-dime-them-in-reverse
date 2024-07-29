/*
 * GccApplication3.c
 *
 * Created: 7/29/2024 6:40:40 PM
 *  Author: Nadia
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
int main(void)
{
	LED_vInit('D',0);
	LED_vInit('D',1);
	LED_vInit('D',2);
	LED_vInit('D',3);
	LED_vInit('D',4);
	LED_vInit('D',5);
	LED_vInit('D',6);
	LED_vInit('D',7);
	signed  char i;
	while(1)
	{
		for (i=0;i<=7;i++)
		{
			LED_vTurnOn('D',i);
			_delay_ms(1000);
		}
		for (i=7;i>=0;i--)
		{
			LED_vTurnOff('D',i);
			_delay_ms(1000);
		}
	}
}