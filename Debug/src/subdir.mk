################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/gdk-test.c 

OBJS += \
./src/gdk-test.o 

C_DEPS += \
./src/gdk-test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -I"C:\cygwin\usr\include\gtk-3.0" -I"C:\cygwin\usr\include\glib-2.0" -I"C:\Cygwin\usr\include\gdk-pixbuf-2.0" -I"C:\cygwin\usr\include\libpng16" -I"C:\cygwin\usr\include\freetype2" -I"C:\cygwin\usr/include/pixman-1" -I"C:\cygwin/usr/include/atk-1.0" -I"C:\cygwin/usr/include/harfbuzz" -I"C:\cygwin/usr/include/pango-1.0" -I"C:\cygwin/usr/include/cairo" -I"C:\cygwin/usr/include/gio-unix-2.0/" -I"C:\cygwin/usr/include/dbus-1.0" -I"C:\cygwin/usr/include/at-spi-2.0" -I"C:\cygwin/usr/include/at-spi2-atk/2.0" -I"C:\cygwin/usr/include/gtk-3.0" -I"C:\cygwin\usr\include\GL" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


