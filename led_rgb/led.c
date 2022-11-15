/*
 * led.c
 *
 *  Created on: Nov 10, 2022
 *      Author: gen
 */

/* Includes
 * --------------------------------------------*/
#include "led.h"

/* Private variables
 * --------------------------------------------*/

/* Private function prototypes
 * --------------------------------------------*/

/* Public function implementations
 * --------------------------------------------*/

void LEDRGB_On(LEDColor LED_Color)
{
  uint16_t redPin, bluePin;
  GPIO_TypeDef *redPort, *bluePort;

  redPin = USER_LED1_Pin;
  redPort = USER_LED1_GPIO_Port;
  bluePin = USER_LED2_Pin;
  bluePort = USER_LED2_GPIO_Port;

  switch (LED_Color)
  {
    case RED:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_SET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_RESET);
      break;
    case GREEN:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_RESET);
      break;
    case BLUE:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_SET);
      break;
    case YELLOW:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_SET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_RESET);
      break;
    case PURPLE:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_SET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_SET);
      break;
    case CYAN:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_SET);
      break;
    case WHITE:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_SET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_SET);
      break;
    case BLACK:
      HAL_GPIO_WritePin(redPort, redPin, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(bluePort, bluePin, GPIO_PIN_RESET);
//      HAL_GPIO_WritePin(LEDR_L3_GPIO_Port, LEDR_L3_Pin, GPIO_PIN_RESET);
      break;
  }
}

