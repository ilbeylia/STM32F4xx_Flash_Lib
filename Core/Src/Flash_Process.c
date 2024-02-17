/*
 * Flash_Process.c
 *
 *  Created on: Feb 17, 2024
 *      Author: ilbeyli
 */
#include "Flash_Process.h"


void Flash_WR(uint32_t Flash_Address, uint32_t Flash_WR_Data){
	HAL_FLASH_Unlock();
	FLASH_Erase_Sector(FLASH_SECTOR_11, VOLTAGE_RANGE_3);  // add sector usage
	HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, Flash_Address, Flash_WR_Data);
	HAL_FLASH_Lock();
}

uint32_t Flash_RD(uint32_t Flash_Address){
	return *((uint32_t*)Flash_Address);
}

void Flash_Erase(uint32_t Start_Erase_Address, uint32_t Byte){
	uint32_t End_Address = Start_Erase_Address + Byte;
	HAL_FLASH_Unlock();
	while (Start_Erase_Address <= End_Address){
		HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, Start_Erase_Address, 0x00);
		Start_Erase_Address +=4;  // 4byte == 32bit == FLASH_TYPEPROGRAM_WORD
	}
	HAL_FLASH_Lock();
}
