/*
 * led.h
 *
 *  Created on: Nov 10, 2022
 *      Author: gen
 */

#ifndef MODULE_LED_RGB_LED_H_
#define MODULE_LED_RGB_LED_H_

/* Includes
 * --------------------------------------------*/
#include <gpio.h>

/* Public variables
 * --------------------------------------------*/
typedef enum
{
  RED,
  GREEN,
  BLUE,
  YELLOW,
  PURPLE,
  CYAN,
  WHITE,
  BLACK,
} LEDColor;

typedef enum
{
  Pin_R1,
  Pin_R2,
  Pin_R3,
  Pin_R4,
  Pin_R5,
  Pin_L1,
  Pin_L2,
  Pin_L3,
  Pin_L4,
  Pin_L5,
} LEDPin;

/* Public function prototypes
 * --------------------------------------------*/

void LEDRGB_On(LEDColor LED_Color);

#endif /* MODULE_LED_RGB_LED_H_ */
