/*
STM32F746G

1. What's the base address of AHB1 BUS peripherals?
AHB1_PERI_START_ADDRESS :    0x4002 0000
AHB1_PERI_END_ADDRESS   :    0x4007 FFFF

2. What's the base address of GPIOA registers?
0x4002 0000

3. What's the base address of RCC engine registers of the MCU?
0x4002 3800

4. What's the base address of APB1 peripherals?
0x4000 0000

5. What's the base address of FLASH memory?
0x0800 0000

6. What's the base address of SRAM2?
SRAM1 starts from 0x2001 0000
SIZE_OF_SRAM1 = X bytes
base address of SRAM2 = 0x2001 0000 + X
BASE_ADDRESS_OF_SRAM2 = BASE_ADDRESS_OF_SRAM1 + SIZE_OF_SRAM1
SRAM2 = 0x2004 C000

7. What's the base address of ADC registers?
0x4001 2000

*/