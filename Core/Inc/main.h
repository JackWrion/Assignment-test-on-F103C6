/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTONUSER_Pin GPIO_PIN_0
#define BUTTONUSER_GPIO_Port GPIOA
#define BUTTON1_Pin GPIO_PIN_1
#define BUTTON1_GPIO_Port GPIOA
#define BUTTON2_Pin GPIO_PIN_5
#define BUTTON2_GPIO_Port GPIOA
#define BUTTON3_Pin GPIO_PIN_0
#define BUTTON3_GPIO_Port GPIOB
#define LED_RED1_Pin GPIO_PIN_10
#define LED_RED1_GPIO_Port GPIOB
#define LED_YELLOW1_Pin GPIO_PIN_11
#define LED_YELLOW1_GPIO_Port GPIOB
#define LED_GREEN1_Pin GPIO_PIN_12
#define LED_GREEN1_GPIO_Port GPIOB
#define LED_RED2_Pin GPIO_PIN_13
#define LED_RED2_GPIO_Port GPIOB
#define LED_YELLOW2_Pin GPIO_PIN_14
#define LED_YELLOW2_GPIO_Port GPIOB
#define LED_GREEN2_Pin GPIO_PIN_15
#define LED_GREEN2_GPIO_Port GPIOB
#define LED_RED3_Pin GPIO_PIN_7
#define LED_RED3_GPIO_Port GPIOB
#define LED_YELLOW3_Pin GPIO_PIN_8
#define LED_YELLOW3_GPIO_Port GPIOB
#define LED_GREEN3_Pin GPIO_PIN_9
#define LED_GREEN3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */