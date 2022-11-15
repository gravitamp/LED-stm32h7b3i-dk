################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../led_rgb/led.c 

OBJS += \
./led_rgb/led.o 

C_DEPS += \
./led_rgb/led.d 


# Each subdirectory must supply rules for building sources it contributes
led_rgb/%.o led_rgb/%.su: ../led_rgb/%.c led_rgb/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H7B3xxQ -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"/home/gen/STM32CubeIDE/workspace_1.10.1/LED_Project/led_rgb" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-led_rgb

clean-led_rgb:
	-$(RM) ./led_rgb/led.d ./led_rgb/led.o ./led_rgb/led.su

.PHONY: clean-led_rgb

