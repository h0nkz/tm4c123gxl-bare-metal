CC = arm-none-eabi-gcc
CC_FLAGS = -c -mcpu=cortex-m4 -mthumb -std=gnu11
LD_FLAGS = -nostdlib -T tm4c123gxl_ls.ld -Wl,-Map=blinky_with_linker_project.map 
final : blinky_with_linker.elf

main.o : main.c 
	$(CC) $(CC_FLAGS) $^ -o $@

tm4c123gxl_startup.o : tm4c123gxl_startup.c 
	$(CC) $(CC_FLAGS) $^ -o $@

blinky_with_linker.elf : main.o tm4c123gxl_startup.o
	$(CC) $(LD_FLAGS) $^ -o $@ 

load:
	openocd -f /board/ti_ek-tm4c123gxl.cfg

clean:
	rm -f *.o *.elf *.map