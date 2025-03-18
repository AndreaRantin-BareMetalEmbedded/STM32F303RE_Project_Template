Compiler=arm-none-eabi-gcc
Core=cortex-m4
CFlags= -c -mcpu=$(Core) -mthumb -std=gnu17 -g -O0 \
		-Wall -Wextra -Wpedantic -Werror \
		-Wshadow -Wpointer-arith -Wcast-qual -Wcast-align \
		-Wsign-conversion -Wswitch-default -Wswitch-enum \
		-Wstrict-prototypes	-Wmissing-prototypes -Wconversion \
		-Wredundant-decls -Winline -Wundef -Wbad-function-cast \
		-Wfloat-equal -Wlogical-op -Waggregate-return \
		-Wformat=2 -Wmissing-include-dirs \
		-Wstrict-overflow=5 -Wunreachable-code \
		-Wunused -Wuninitialized

LDFlags= -mcpu=$(Core) -mthumb -nostdlib -T linkerScript.ld -Wl,-Map=final.map

all:main.o startup.o final.elf

main.o:main.c
	$(Compiler) $(CFlags) main.c -o main.o

startup.o:startup.c
	$(Compiler) $(CFlags) startup.c -o startup.o

final.elf: main.o startup.o
	$(Compiler) $(LDFlags) -o $@ $^

clean:
	del /Q *.o *.elf *.map 2>nul || exit 0

load:
	openocd -f board/st_nucleo_f3.cfg