################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Lib/Peripherals/GPIO/led.c 

OBJS += \
./Core/Lib/Peripherals/GPIO/led.o 

C_DEPS += \
./Core/Lib/Peripherals/GPIO/led.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Lib/Peripherals/GPIO/led.o: ../Core/Lib/Peripherals/GPIO/led.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F401xE -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"C:/Users/srkia/OneDrive/Documents/GitHub/Mehatronika/Core/Lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Lib/Peripherals/GPIO/led.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

