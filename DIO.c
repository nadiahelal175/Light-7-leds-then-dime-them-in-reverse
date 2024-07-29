/*
 * CFile1.c
 *
 * Created: 7/29/2024 6:42:01 PM
 *  Author: Nadia
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "std_macros.h"
void DIO_vsetPINDir(unsigned char portname,unsigned char pinnumber,unsigned char direction)
{
	switch(portname)
	{
		
		
		case 'A':
		if(direction==1)
		{
			SET_BIT(DDRA,pinnumber);//output
		}
		else
		{
			CLR_BIT(DDRA,pinnumber);//input
		}
		break;
		case 'B':
		if(direction==1)
		{
			SET_BIT(DDRB,pinnumber);
		}
		else
		{
			CLR_BIT(DDRB,pinnumber);
		}
		break;
		case 'C':
		if(direction==1)
		{
			SET_BIT(DDRC,pinnumber);
		}
		else
		{
			CLR_BIT(DDRC,pinnumber);
		}
		break;
		case 'D':
		if(direction==1)
		{
			SET_BIT(DDRD,pinnumber);
		}
		else
		{
			CLR_BIT(DDRD,pinnumber);
		}
		break;
		default:
		break;
	}
}


void DIO_write(unsigned char portname,unsigned char pinnumber,unsigned char outputvalue)
{
	switch(portname)
	{
		case 'A' :
		
		if(outputvalue==1)
		{
			SET_BIT(PORTA,pinnumber);// High
		}
		else
		{
			CLR_BIT(PORTA,pinnumber);// Low
		}
		break ;
		case 'B':
		
		if(outputvalue==1)
		{
			SET_BIT(PORTB,pinnumber);
		}
		else
		{
			CLR_BIT(PORTB,pinnumber);
		}
		break ;
		case 'C' :
		
		if(outputvalue==1)
		{
			SET_BIT(PORTC,pinnumber);
		}
		else
		{
			CLR_BIT(PORTC,pinnumber);
		}
		break ;
		case 'D':
		
		if(outputvalue==1)
		{
			SET_BIT(PORTD,pinnumber);
		}
		else
		{
			CLR_BIT(PORTD,pinnumber);
		}
		break ;
		default: break ;
	}
}


unsigned char DIO_u8read(unsigned char portname,unsigned char pinnumber)
{
	unsigned char return_value=0;
	switch(portname)
	{
		case 'A' :
		return_value=READ_BIT(PINA,pinnumber);//Read the value from the given pin in port A
		break;
		
		case 'B' :
		return_value=READ_BIT(PINB,pinnumber);//Read the value from the given pin in port B
		break;
		
		case 'C' :
		return_value=READ_BIT(PINC,pinnumber);//Read the value from the given pin in port C
		break;
		
		case 'D' :
		return_value=READ_BIT(PIND,pinnumber);//Read the value from the given pin in port D
		break;
		default:
		break;
	}
	return return_value ;
}
void DIO_toggle(unsigned char portname,unsigned char pinnumber)
{
	switch(portname)
	{
		case 'A':
		TOG_BIT(PORTA,pinnumber);//Toggle the value of the given pin in port A
		break;
		case 'B':
		TOG_BIT(PORTB,pinnumber);//Toggle the value of the given pin in port B
		break;
		case 'C':
		TOG_BIT(PORTC,pinnumber);//Toggle the value of the given pin in port C
		break;
		case 'D':
		TOG_BIT(PORTD,pinnumber);//Toggle the value of the given pin in port D
		break;
		default: break;
	}
}
void DIO_set_port_direction(unsigned char portname,unsigned char direction)
{
	switch(portname)
	{
		case 'A' :
		DDRA=direction; //set the direction of port A
		break ;
		case 'B':
		DDRB=direction; //set the direction of port B
		break ;
		case 'C' :
		DDRC=direction; //set the direction of port C
		break ;
		case 'D':
		DDRD=direction; //set the direction of port D
		break ;
		default:
		break ;
	}
	
}
void DIO_write_port(unsigned char portname,unsigned char portvalue)
{
	switch(portname)
	{
		case 'A' :
		PORTA=portvalue; //Write the given value to the port A
		break ;
		case 'B':
		PORTB=portvalue; //Write the given value to the port B
		break ;
		case 'C' :
		PORTC=portvalue; //Write the given value to the port C
		break ;
		case 'D':
		PORTD=portvalue; //Write the given value to the port D
		break ;
		default:
		break ;
	}
}

unsigned char DIO_read_port(unsigned char portname)
{
	unsigned char return_val=0;
	switch(portname)
	{
		case 'A' :
		return_val=PINA; // read the value of port A
		break ;
		case 'B':
		return_val=PINB; // read the value of port B
		break ;
		case 'C' :
		return_val=PINC; // read the value of port C
		break ;
		case 'D':
		return_val=PIND; // read the value of port D
		break ;
		default:
		break ;
	}
	return return_val;
}
