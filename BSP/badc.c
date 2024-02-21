#include "badc.h"


double getADC(ADC_HandleTypeDef * Pin)
{
	double adc;
	HAL_ADC_Start(Pin);
	adc = HAL_ADC_GetValue(Pin);
	return adc*3.3/4096;
}