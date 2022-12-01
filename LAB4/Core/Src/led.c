/*
 * led.c
 *
 *  Created on: Nov 30, 2022
 *      Author: Admin
 */

#include "main.h"
#include "led.h"

void blink_LED1()
{
	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
}

void blink_LED2()
{
	HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
}

void blink_LED3()
{
	HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
}

void blink_LED4()
{
	HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
}

void blink_LED5()
{
	HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);
}
