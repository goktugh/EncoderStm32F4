# EncoderStm32F4
EncoderStm32F4 library decoding quadrature pulses using hardware based timer-encoder mode.
WARNING: This library software is new and has not ben widely tested by many people. Also a few planned features are still mising. But it does seem to work and gives usable results. 
# Software requirements
STM32 core support for Arduino. https://github.com/stm32duino/Arduino_Core_STM32
# Hardware requirements
Generic STM32F407 Development Board.
# Quadrature Encoder Connections

| Encoder 1  | Stm32f407ve |                     
| ------------- | ------------- |
| CH_A  | PA0  |
| CH_B  | PA1  |

| Encoder 2  | Stm32f407ve |
| ------------- | ------------- |            
| CH_A  | PA6  |
| CH_B  | PA7  |

| Encoder 3 | Stm32f407ve |                     
| ------------- | ------------- |
| CH_A  | PD12  |
| CH_B  | PD13  |

| Encoder 4  | Stm32f407ve |
| ------------- | ------------- |            
| CH_A  | PC6  |
| CH_B  | PC7  |
