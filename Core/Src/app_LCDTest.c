/*
 * app_LCDTest.c
 *
 *  Created on: Nov 15, 2024
 *      Author: tylermiller
 */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "stm32l4xx_hal.h"
#include "app.h"
#include "lcd.h"

void App_Init(void) {

	initLCD();

}

void App_MainLoop(void) {

	char value[16];

	for (int i = 0; i < 30; i++) {

		sprintf(value,"Increment: %d",i);
		clearLCD();
		writeLCD(value);
		HAL_Delay(1000);

	}

}
