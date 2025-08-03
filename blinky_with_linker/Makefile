CC = arm-none-eabi-gcc
CC_OPT = -c -mcpu=cortex-m4 -mthumb -std=gnu11

final : blinky_with_linker.elf

main.o : main.c 
	$(CC) $(CC_OPT) $^ -o $@

tm4c123gxl_startup.o : tm4c123gxl_startup.c 
	$(CC) $(CC_OPT) $^ -o $@

blinky_with_linker.elf : main.o tm4c123gxl_startup.o
	$(CC) -nostdlib -T tm4c123gxl_ls.ld *.o -o $@ -Wl,-Map=blinky_with_linker_project.map 

load:
	openocd -f /board/ti_ek-tm4c123gxl.cfg

clean:
	rm -f *.o *.elf *.map