// --------------------------------------------------------
// Copyright (c) 2025 rapid4mifu 
//
// These codes are licensed under MIT license.
// https://opensource.org/licenses/mit-license.php
// --------------------------------------------------------

// This software module is part of the Railway Model Power Pack (RMPP)

#ifndef __TASK_RMPP_H__	/* ��d��`�h�~ */

#include <Arduino.h>

typedef enum {
	RMPP_DIR_NULL = 0,	/* �i�s�����E���w�� */
	RMPP_DIR_FWD,		/* �i�s�����E�O�i */
	RMPP_DIR_RVS		/* �i�s�����E��� */
} rmpp_dir_t;

bool RMPP_initTask(void);

void RMPP_startOutput(rmpp_dir_t dir);
void RMPP_stopOutput(void);
void RMPP_setOutputDuty(uint16_t duty);

#endif /* __TASK_RMPP_H__*/	/* ��d��`�h�~ */
#define __TASK_RMPP_H__	/* ��d��`�h�~ */

