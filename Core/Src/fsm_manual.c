/*
 * fsm_automatic.c
 *
 *  Created on: Oct 28, 2022
 *      Author: ASUS
 */

#include "fsm_manual.h"

int status_man = INIT;
int temp_timer = 0;
int checkprint = 0;

void fsm_manual_run(){

	switch(status_man){

	case INIT:
		if (isButton1Pressed()){
			status_man = MAN_RED;
			temp_timer = 0;
			checkprint = 1;
		}
		if (isButton3Pressed()){
			timer_red = 5000;
			timer_green = 3000;
			timer_yellow = 2000;
			status_light1 = INIT1;
			status_light2 = INIT2;
			status_man = INIT;
			checkprint = 1;
		}
		break;



	case MAN_RED:

		if (isButton1Pressed()){
			status_man = MAN_YELLOW;
			temp_timer = 0;
			checkprint = 1;
		}
		if (isButton2Pressed()){
			temp_timer = temp_timer + 1000;
		}
		if (isButton3Pressed()){
			timer_red = temp_timer;
			status_man = INIT;
			checkprint = 1;
		}
		break;


	case MAN_YELLOW:
		if (isButton1Pressed()){
			temp_timer = 0;
			status_man = MAN_GREEN;
			checkprint = 1;
		}
		if (isButton2Pressed()){
			temp_timer = temp_timer + 1000;
		}
		if (isButton3Pressed()){
			timer_yellow = temp_timer;
			status_man = INIT;
			checkprint = 1;
		}
		break;


	case MAN_GREEN:

		if (isButton1Pressed()){
			temp_timer = 0;
			status_man = INIT;
			checkprint = 1;
		}
		if (isButton2Pressed()){
			temp_timer = temp_timer + 1000;
		}
		if (isButton3Pressed()){
			timer_green = temp_timer;
			status_man = INIT;
			checkprint = 1;
		}
		break;

	default:
		break;
	}

}










