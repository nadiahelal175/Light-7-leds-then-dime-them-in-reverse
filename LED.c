/*
 * CFile1.c
 *
 * Created: 7/29/2024 6:42:37 PM
 *  Author: Nadia
 */ 
#include "DIO.h"
void LED_vInit(unsigned char portname,unsigned char pinnumber)
{
	DIO_vsetPINDir(portname,pinnumber,1);// output
}
void LED_vTurnOn(unsigned char portname,unsigned char pinnumber)
{
	DIO_write(portname,pinnumber,1);// on
}
void LED_vTurnOff(unsigned char portname,unsigned char pinnumber)
{
	DIO_write(portname,pinnumber,0);// off
}
void LED_vToggle(unsigned char portname,unsigned char pinnumber)
{
	DIO_toggle(portname,pinnumber);// reverse
}

