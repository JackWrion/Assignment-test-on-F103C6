/*
 * LED_TOGGLE.c
 *
 *  Created on: Dec 11, 2022
 *      Author: ASUS
 */

#include "LED_TOGGLE.h"

int RED1 = 0;
int YELLOW1 = 0;
int GREEN1 = 0;

int RED2 = 0;
int YELLOW2 = 0;
int GREEN2 = 0;

int RED3 = 0;
int YELLOW3 = 0;
int GREEN3 = 0;

// GROUP LED1;
void LED1_OFF(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
}

void RED1_TOGGLE(){
	if (RED1 == 0){
		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
		RED1 = 1;
	}
	else{
		LED1_OFF();
		RED1 = 0;
	}
}
void YELLOW1_TOGGLE(){
	if (YELLOW1 == 0){
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
		YELLOW1 = 1;
	}
	else{
		LED1_OFF();
		YELLOW1 = 0;
	}
}
void GREEN1_TOGGLE(){
	if (GREEN1 == 0){
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
		GREEN1 = 1;
	}
	else{
		LED1_OFF();
		GREEN1 = 0;
	}
}


//GROUP LED2
void LED2_OFF(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
}

void RED2_TOGGLE(){
	if (RED2 == 0){
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
		RED2 = 1;
	}
	else{
		LED2_OFF();
		RED2 = 0;
	}
}
void YELLOW2_TOGGLE(){
	if (YELLOW2 == 0){
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
		YELLOW2 = 1;
	}
	else{
		LED2_OFF();
		YELLOW2 = 0;
	}
}
void GREEN2_TOGGLE(){
	if (GREEN2 == 0){
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
		GREEN2 = 1;
	}
	else{
		LED2_OFF();
		GREEN2 = 0;
	}
}


//GROUP LED3
void LED3_OFF(){
	HAL_GPIO_WritePin(LED_RED3_GPIO_Port, LED_RED3_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW3_GPIO_Port, LED_YELLOW3_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN3_GPIO_Port, LED_GREEN3_Pin, SET);
}

void RED3_TOGGLE(){
	if (RED3 == 0){
		HAL_GPIO_WritePin(LED_RED3_GPIO_Port, LED_RED3_Pin, RESET);
		RED3 = 1;
	}
	else{
		LED3_OFF();
		RED3 = 0;
	}
}
void YELLOW3_TOGGLE(){
	if (YELLOW3 == 0){
		HAL_GPIO_WritePin(LED_YELLOW3_GPIO_Port, LED_YELLOW3_Pin, RESET);
		YELLOW3 = 1;
	}
	else{
		LED3_OFF();
		YELLOW3 = 0;
	}
}
void GREEN3_TOGGLE(){
	if (GREEN3 == 0){
		HAL_GPIO_WritePin(LED_GREEN3_GPIO_Port, LED_GREEN3_Pin, RESET);
		GREEN3 = 1;
	}
	else{
		LED3_OFF();
		GREEN3 = 0;
	}
}
