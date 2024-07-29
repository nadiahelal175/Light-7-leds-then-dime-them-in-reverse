/*
 * IncFile1.h
 *
 * Created: 7/29/2024 6:42:51 PM
 *  Author: Nadia
 */ 

#ifndef LED_H_
#define LED_H_

void LED_vInit(unsigned char portname,unsigned char pinnumber);

void LED_vTurnOn(unsigned char portname,unsigned char pinnumber);

void LED_vTurnOff(unsigned char portname,unsigned char pinnumber);

void LED_vToggle(unsigned char portname,unsigned char pinnumber);

unsigned char LED_u8ReadStatus(unsigned char portname,unsigned char pinnumber);

#endif 