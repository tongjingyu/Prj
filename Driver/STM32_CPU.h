#ifndef _STM32_CPU_H_
#define _STM32_CPU_H_
#include <Include.h>

#include <STM32LIB_Include.h>

typedef struct 
{
	uint8 GPIO_Speed;
	GPIOMode_TypeDef GPIO_Mode;
	GPIO_TypeDef *GPIOx;
	uint16 GPIO_Pin;
}GPIO_InitStruct;


#endif
