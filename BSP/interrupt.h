#ifndef _INTERRUPT_H_
#define _INTERRUPT_H_
#include "main.h"
#include "stdbool.h"

struct keys
{
	uint8_t key_judage;
	bool key_sta;
	bool single_flag;
	bool long_flag;
	unsigned int key_time;
};

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif
