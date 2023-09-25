/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define a1_Pin GPIO_PIN_1
#define a1_GPIO_Port GPIOA
#define b1_Pin GPIO_PIN_2
#define b1_GPIO_Port GPIOA
#define c1_Pin GPIO_PIN_3
#define c1_GPIO_Port GPIOA
#define d1_Pin GPIO_PIN_4
#define d1_GPIO_Port GPIOA
#define e1_Pin GPIO_PIN_5
#define e1_GPIO_Port GPIOA
#define f1_Pin GPIO_PIN_6
#define f1_GPIO_Port GPIOA
#define g1_Pin GPIO_PIN_7
#define g1_GPIO_Port GPIOA
#define a2_Pin GPIO_PIN_1
#define a2_GPIO_Port GPIOB
#define b2_Pin GPIO_PIN_2
#define b2_GPIO_Port GPIOB
#define LED_RED_1_Pin GPIO_PIN_8
#define LED_RED_1_GPIO_Port GPIOA
#define LED_YELLOW_1_Pin GPIO_PIN_9
#define LED_YELLOW_1_GPIO_Port GPIOA
#define LED_GREEN_1_Pin GPIO_PIN_10
#define LED_GREEN_1_GPIO_Port GPIOA
#define LED_RED_2_Pin GPIO_PIN_11
#define LED_RED_2_GPIO_Port GPIOA
#define LED_YELLOW_2_Pin GPIO_PIN_12
#define LED_YELLOW_2_GPIO_Port GPIOA
#define LED_GREEN_2_Pin GPIO_PIN_13
#define LED_GREEN_2_GPIO_Port GPIOA
#define c2_Pin GPIO_PIN_3
#define c2_GPIO_Port GPIOB
#define d2_Pin GPIO_PIN_4
#define d2_GPIO_Port GPIOB
#define e2_Pin GPIO_PIN_5
#define e2_GPIO_Port GPIOB
#define f2_Pin GPIO_PIN_6
#define f2_GPIO_Port GPIOB
#define g2_Pin GPIO_PIN_7
#define g2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
