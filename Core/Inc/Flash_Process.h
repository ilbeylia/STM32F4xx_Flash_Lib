/*
 * Flash_Process.h
 *
 *  Created on: Feb 17, 2024
 *      Author: ilbeyli
 */

#ifndef INC_FLASH_PROCESS_H_
#define INC_FLASH_PROCESS_H_

#include "stm32f4xx.h"
#include "stdio.h"

void Flash_WR(uint32_t Flash_Address, uint32_t Flash_WR_Data);

uint32_t Flash_RD(uint32_t Flash_Address);

void Flash_Erase(uint32_t Start_Erase_Address, uint32_t Byte );


#endif /* INC_FLASH_PROCESS_H_ */
