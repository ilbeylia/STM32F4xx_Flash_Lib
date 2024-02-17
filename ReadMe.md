# Flash Process for STM32

This repository contains a simple flash memory management library for STM32 microcontrollers. The provided code allows writing, reading, and erasing data from the internal flash memory of STM32 devices.

## Description

### Flash_WR
Function to write data to a specific flash address. It first unlocks the flash, erases the specified sector, programs the data at the given address, and locks the flash again.

### Flash_RD
Function to read data from a specific flash address. It directly returns the 32-bit data pointed by the provided address.

### Flash_Erase
Function to erase a specified number of bytes starting from a given flash address. It clears the data by writing 0x00 to each address in the specified range.

## Usage
- Include "Flash_Process.h" in your STM32 project.
- Call the respective functions (Flash_WR, Flash_RD, Flash_Erase) as needed in your application.

## Note
Ensure proper handling of flash operations to prevent unintentional data loss or corruption.
