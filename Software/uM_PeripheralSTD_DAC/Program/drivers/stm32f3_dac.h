/* #include "stm32f3_dac.h" */

#ifndef __STM32F3_DAC_H
#define __STM32F3_DAC_H

#include "stm32f30x.h"
/*====================================================================================================*/
/*====================================================================================================*/
void DAC_Config( void );
void DAC_SetData( uint8_t channel, uint16_t data );
/*====================================================================================================*/
/*====================================================================================================*/
#endif