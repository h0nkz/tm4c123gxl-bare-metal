#include <stdint.h>

extern uint32_t _estack;
extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

void Reset_Handler(void);
int main(void);
void NMI_Handler(void)__attribute__((weak, alias("Default_Handler")));
void HardFault_Handler(void)__attribute__((weak, alias("Default_Handler")));
void MemManage_Handler(void)__attribute__((weak, alias("Default_Handler")));

void Default_Handler(void)
{
    while(1)
    {
        
    }
}

uint32_t vector_tbl[] __attribute((section(".isr_vector_tbl"))) = 
{
    (uint32_t) &_estack, // The initial stack pointer
    (uint32_t) &Reset_Handler, // The reset handler
    (uint32_t) &NMI_Handler, // The NMI handler
    (uint32_t) &HardFault_Handler, // The hard fault handler
    (uint32_t) &Default_Handler,                      // The MPU fault handler
    (uint32_t) &Default_Handler,                      // The bus fault handler
    (uint32_t) &Default_Handler,                      // The usage fault handler
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // SVCall handler
    (uint32_t) &Default_Handler,                      // Debug monitor handler
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // The PendSV handler
    (uint32_t) &Default_Handler,                      // The SysTick handler
    (uint32_t) &Default_Handler,                      // GPIO Port A
    (uint32_t) &Default_Handler,                      // GPIO Port B
    (uint32_t) &Default_Handler,                      // GPIO Port C
    (uint32_t) &Default_Handler,                      // GPIO Port D
    (uint32_t) &Default_Handler,                      // GPIO Port E
    (uint32_t) &Default_Handler,                      // UART0 Rx and Tx
    (uint32_t) &Default_Handler,                      // UART1 Rx and Tx
    (uint32_t) &Default_Handler,                      // SSI0 Rx and Tx
    (uint32_t) &Default_Handler,                      // I2C0 Master and Slave
    (uint32_t) &Default_Handler,                      // PWM Fault
    (uint32_t) &Default_Handler,                      // PWM Generator 0
    (uint32_t) &Default_Handler,                      // PWM Generator 1
    (uint32_t) &Default_Handler,                      // PWM Generator 2
    (uint32_t) &Default_Handler,                      // Quadrature Encoder 0
    (uint32_t) &Default_Handler,                      // ADC Sequence 0
    (uint32_t) &Default_Handler,                      // ADC Sequence 1
    (uint32_t) &Default_Handler,                      // ADC Sequence 2
    (uint32_t) &Default_Handler,                      // ADC Sequence 3
    (uint32_t) &Default_Handler,                      // Watchdog timer
    (uint32_t) &Default_Handler,                      // Timer 0 subtimer A
    (uint32_t) &Default_Handler,                      // Timer 0 subtimer B
    (uint32_t) &Default_Handler,                      // Timer 1 subtimer A
    (uint32_t) &Default_Handler,                      // Timer 1 subtimer B
    (uint32_t) &Default_Handler,                      // Timer 2 subtimer A
    (uint32_t) &Default_Handler,                      // Timer 2 subtimer B
    (uint32_t) &Default_Handler,                      // Analog Comparator 0
    (uint32_t) &Default_Handler,                      // Analog Comparator 1
    (uint32_t) &Default_Handler,                      // Analog Comparator 2
    (uint32_t) &Default_Handler,                      // System Control (PLL, OSC, BO)
    (uint32_t) &Default_Handler,                      // FLASH Control
    (uint32_t) &Default_Handler,                      // GPIO Port F
    (uint32_t) &Default_Handler,                      // GPIO Port G
    (uint32_t) &Default_Handler,                      // GPIO Port H
    (uint32_t) &Default_Handler,                      // UART2 Rx and Tx
    (uint32_t) &Default_Handler,                      // SSI1 Rx and Tx
    (uint32_t) &Default_Handler,                      // Timer 3 subtimer A
    (uint32_t) &Default_Handler,                      // Timer 3 subtimer B
    (uint32_t) &Default_Handler,                      // I2C1 Master and Slave
    (uint32_t) &Default_Handler,                      // Quadrature Encoder 1
    (uint32_t) &Default_Handler,                      // CAN0
    (uint32_t) &Default_Handler,                      // CAN1
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // Hibernate
    (uint32_t) &Default_Handler,                      // USB0
    (uint32_t) &Default_Handler,                      // PWM Generator 3
    (uint32_t) &Default_Handler,                      // uDMA Software Transfer
    (uint32_t) &Default_Handler,                      // uDMA Error
    (uint32_t) &Default_Handler,                      // ADC1 Sequence 0
    (uint32_t) &Default_Handler,                      // ADC1 Sequence 1
    (uint32_t) &Default_Handler,                      // ADC1 Sequence 2
    (uint32_t) &Default_Handler,                      // ADC1 Sequence 3
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // GPIO Port J
    (uint32_t) &Default_Handler,                      // GPIO Port K
    (uint32_t) &Default_Handler,                      // GPIO Port L
    (uint32_t) &Default_Handler,                      // SSI2 Rx and Tx
    (uint32_t) &Default_Handler,                      // SSI3 Rx and Tx
    (uint32_t) &Default_Handler,                      // UART3 Rx and Tx
    (uint32_t) &Default_Handler,                      // UART4 Rx and Tx
    (uint32_t) &Default_Handler,                      // UART5 Rx and Tx
    (uint32_t) &Default_Handler,                      // UART6 Rx and Tx
    (uint32_t) &Default_Handler,                      // UART7 Rx and Tx
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // I2C2 Master and Slave
    (uint32_t) &Default_Handler,                      // I2C3 Master and Slave
    (uint32_t) &Default_Handler,                      // Timer 4 subtimer A
    (uint32_t) &Default_Handler,                      // Timer 4 subtimer B
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // Timer 5 subtimer A
    (uint32_t) &Default_Handler,                      // Timer 5 subtimer B
    (uint32_t) &Default_Handler,                      // Wide Timer 0 subtimer A
    (uint32_t) &Default_Handler,                      // Wide Timer 0 subtimer B
    (uint32_t) &Default_Handler,                      // Wide Timer 1 subtimer A
    (uint32_t) &Default_Handler,                      // Wide Timer 1 subtimer B
    (uint32_t) &Default_Handler,                      // Wide Timer 2 subtimer A
    (uint32_t) &Default_Handler,                      // Wide Timer 2 subtimer B
    (uint32_t) &Default_Handler,                      // Wide Timer 3 subtimer A
    (uint32_t) &Default_Handler,                      // Wide Timer 3 subtimer B
    (uint32_t) &Default_Handler,                      // Wide Timer 4 subtimer A
    (uint32_t) &Default_Handler,                      // Wide Timer 4 subtimer B
    (uint32_t) &Default_Handler,                      // Wide Timer 5 subtimer A
    (uint32_t) &Default_Handler,                      // Wide Timer 5 subtimer B
    (uint32_t) &Default_Handler,                      // FPU
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // I2C4 Master and Slave
    (uint32_t) &Default_Handler,                      // I2C5 Master and Slave
    (uint32_t) &Default_Handler,                      // GPIO Port M
    (uint32_t) &Default_Handler,                      // GPIO Port N
    (uint32_t) &Default_Handler,                      // Quadrature Encoder 2
    (uint32_t) 0,                                      // Reserved
    (uint32_t) 0,                                      // Reserved
    (uint32_t) &Default_Handler,                      // GPIO Port P (Summary or P0)
    (uint32_t) &Default_Handler,                      // GPIO Port P1
    (uint32_t) &Default_Handler,                      // GPIO Port P2
    (uint32_t) &Default_Handler,                      // GPIO Port P3
    (uint32_t) &Default_Handler,                      // GPIO Port P4
    (uint32_t) &Default_Handler,                      // GPIO Port P5
    (uint32_t) &Default_Handler,                      // GPIO Port P6
    (uint32_t) &Default_Handler,                      // GPIO Port P7
    (uint32_t) &Default_Handler,                      // GPIO Port Q (Summary or Q0)
    (uint32_t) &Default_Handler,                      // GPIO Port Q1
    (uint32_t) &Default_Handler,                      // GPIO Port Q2
    (uint32_t) &Default_Handler,                      // GPIO Port Q3
    (uint32_t) &Default_Handler,                      // GPIO Port Q4
    (uint32_t) &Default_Handler,                      // GPIO Port Q5
    (uint32_t) &Default_Handler,                      // GPIO Port Q6
    (uint32_t) &Default_Handler,                      // GPIO Port Q7
    (uint32_t) &Default_Handler,                      // GPIO Port R
    (uint32_t) &Default_Handler,                      // GPIO Port S
    (uint32_t) &Default_Handler,                      // PWM 1 Generator 0
    (uint32_t) &Default_Handler,                      // PWM 1 Generator 1
    (uint32_t) &Default_Handler,                      // PWM 1 Generator 2
    (uint32_t) &Default_Handler,                      // PWM 1 Generator 3
    (uint32_t) &Default_Handler                       // PWM 1 Fault
};



void Reset_Handler(void)
{
    // Calculate size of the .data and .bss sections
    uint32_t data_mem_size = (uint32_t)&_edata - (uint32_t)&_sdata;
    uint32_t bss_mem_size = (uint32_t)&_ebss - (uint32_t)&_sbss;

    // Init pointers to the source and destination of the .data section
    uint32_t *p_src_mem = (uint32_t *)&_etext;
    uint32_t *p_dest_mem = (uint32_t *)&_sdata;

    // Copy .data section from FLASH to SRAM
    for(uint32_t i = 0; i < data_mem_size; i++)
    {
        *p_dest_mem++ = *p_src_mem++;
    }

    // Initialize .bss section to zero in SRAM
    p_dest_mem = (uint32_t *)&_sbss;

    for(uint32_t i = 0; i < bss_mem_size; i++)
    {
        *p_dest_mem++ = 0;
    }

    // Call main
    main();
} 