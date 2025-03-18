#include<stdint.h>

//MEMORY ADDRESSES AND SIZE DEFINITION
#define SRAM_SIZE     (1024U * 64U) //64KB
#define SRAM_START    0x20000000U
#define SRAM_END      ((SRAM_START) + (SRAM_SIZE))

//STACK DEFINITION
#define STACK_START   SRAM_END

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

int main(void);

//IRQ HANDLERS
void Reset_Handler(void);
void Default_Handler(void);

void NMI_Handler                (void)__attribute__((weak, alias("Default_Handler")));
void HardFault_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void MemManage_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void BusFault_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler         (void)__attribute__((weak, alias("Default_Handler")));
void SVCall_Handler             (void)__attribute__((weak, alias("Default_Handler")));
void PendSV_Handler             (void)__attribute__((weak, alias("Default_Handler")));
void SysTick_Handler            (void)__attribute__((weak, alias("Default_Handler")));
void WWDG_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void PVD_IRQ_Handler            (void)__attribute__((weak, alias("Default_Handler")));
void TamperStamp_IRQ_Hanlder    (void)__attribute__((weak, alias("Default_Handler")));
void RTCWkup_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void Flash_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void RCC_IRQ_Handler            (void)__attribute__((weak, alias("Default_Handler")));
void EXTI0_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void EXTI1_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void EXTI2_TS_IRQ_Handler       (void)__attribute__((weak, alias("Default_Handler")));
void EXTI3_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void EXTI4_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream1_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream2_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream3_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream4_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream5_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream6_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream7_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void ADC1_2_IRQ_Handler         (void)__attribute__((weak, alias("Default_Handler")));
void USB_HP_CAN_TX_IRQ_Handler  (void)__attribute__((weak, alias("Default_Handler")));
void USB_LP_CAN_RX0_IRQ_Handler (void)__attribute__((weak, alias("Default_Handler")));
void CAN_RX1_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void CAN_SCE_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void EXTI9_5_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void TIM1_BRK_TIM15_IRQ_Handler (void)__attribute__((weak, alias("Default_Handler")));
void TIM1_UP_TIM16_IRQ_Handler  (void)__attribute__((weak, alias("Default_Handler")));
void TIM1_TRG_COM_TIM17_IRQ_Handler (void)__attribute__((weak, alias("Default_Handler")));
void TIM1_CC_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void TIM2_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void TIM3_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void TIM4_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void I2C1_EV_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void I2C1_ER_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void I2C2_EV_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void I2C2_ER_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void SPI1_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void SPI2_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void USART1_IRQ_Handler         (void)__attribute__((weak, alias("Default_Handler")));
void USART2_IRQ_Handler         (void)__attribute__((weak, alias("Default_Handler")));
void USART3_IRQ_Handler         (void)__attribute__((weak, alias("Default_Handler")));
void EXTI15_10_IRQ_Handler      (void)__attribute__((weak, alias("Default_Handler")));
void RTC_Alarm_IRQ_Handler      (void)__attribute__((weak, alias("Default_Handler")));
void USBWakeup_IRQ_Handler      (void)__attribute__((weak, alias("Default_Handler")));
void TIM8_BRK_IRQ_Handler       (void)__attribute__((weak, alias("Default_Handler")));
void TIM8_UP_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void TIM8_TRG_COM_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void TIM8_CC_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void ADC3_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void FMC_IRQ_Handler            (void)__attribute__((weak, alias("Default_Handler")));
void SPI3_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void UART4_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void UART5_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void TIM6_DAC_IRQ_Handler       (void)__attribute__((weak, alias("Default_Handler")));
void TIM7_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream1_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream2_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream3_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream4_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream5_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void ADC4_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));
void COMP123_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void COMP456_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void COMP7_IRQ_Handler          (void)__attribute__((weak, alias("Default_Handler")));
void I2C3_EV_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void I2C3_ER_IRQ_Handler        (void)__attribute__((weak, alias("Default_Handler")));
void USB_HP_IRQ_Handler         (void)__attribute__((weak, alias("Default_Handler")));
void USB_LP_IRQ_Handler         (void)__attribute__((weak, alias("Default_Handler")));
void USB_WKUP_RMP_IRQ_Handler   (void)__attribute__((weak, alias("Default_Handler")));
void TIM20_BRK_IRQ_Handler      (void)__attribute__((weak, alias("Default_Handler")));
void TIM20_UP_IRQ_Handler       (void)__attribute__((weak, alias("Default_Handler")));
void TIM20_TRG_COM_IRQ_Handler  (void)__attribute__((weak, alias("Default_Handler")));
void TIM20_CC_IRQ_Handler       (void)__attribute__((weak, alias("Default_Handler")));
void FPU_IRQ_Handler            (void)__attribute__((weak, alias("Default_Handler")));
void SPI4_IRQ_Handler           (void)__attribute__((weak, alias("Default_Handler")));

uint32_t vectorTable[]__attribute__((section(".isr_vector"))) = {
    STACK_START,
    (uint32_t)Reset_Handler,
    (uint32_t)NMI_Handler,
    (uint32_t)HardFault_Handler,
    (uint32_t)MemManage_Handler,
    (uint32_t)BusFault_Handler,
    (uint32_t)UsageFault_Handler,
    0,
    0,
    0,
    0,
    (uint32_t)SVCall_Handler,
    (uint32_t)PendSV_Handler,
    (uint32_t)SysTick_Handler,
    (uint32_t)WWDG_IRQ_Handler,
    (uint32_t)PVD_IRQ_Handler,
    (uint32_t)TamperStamp_IRQ_Hanlder,
    (uint32_t)RTCWkup_IRQ_Handler,
    (uint32_t)Flash_IRQ_Handler,
    (uint32_t)RCC_IRQ_Handler,
    (uint32_t)EXTI0_IRQ_Handler,
    (uint32_t)EXTI1_IRQ_Handler,
    (uint32_t)EXTI2_TS_IRQ_Handler,
    (uint32_t)EXTI3_IRQ_Handler,
    (uint32_t)EXTI4_IRQ_Handler,
    (uint32_t)DMA1_Stream1_IRQ_Handler,
    (uint32_t)DMA1_Stream2_IRQ_Handler,
    (uint32_t)DMA1_Stream3_IRQ_Handler,
    (uint32_t)DMA1_Stream4_IRQ_Handler,
    (uint32_t)DMA1_Stream5_IRQ_Handler,
    (uint32_t)DMA1_Stream6_IRQ_Handler,
    (uint32_t)DMA1_Stream7_IRQ_Handler,
    (uint32_t)ADC1_2_IRQ_Handler,
    (uint32_t)USB_HP_CAN_TX_IRQ_Handler,
    (uint32_t)USB_LP_CAN_RX0_IRQ_Handler,
    (uint32_t)CAN_RX1_IRQ_Handler,
    (uint32_t)CAN_SCE_IRQ_Handler,
    (uint32_t)EXTI9_5_IRQ_Handler,
    (uint32_t)TIM1_BRK_TIM15_IRQ_Handler,
    (uint32_t)TIM1_UP_TIM16_IRQ_Handler,
    (uint32_t)TIM1_TRG_COM_TIM17_IRQ_Handler,
    (uint32_t)TIM1_CC_IRQ_Handler,
    (uint32_t)TIM2_IRQ_Handler,
    (uint32_t)TIM3_IRQ_Handler,
    (uint32_t)TIM4_IRQ_Handler,
    (uint32_t)I2C1_EV_IRQ_Handler,
    (uint32_t)I2C1_ER_IRQ_Handler,
    (uint32_t)I2C2_EV_IRQ_Handler,
    (uint32_t)I2C2_ER_IRQ_Handler,
    (uint32_t)SPI1_IRQ_Handler,
    (uint32_t)SPI2_IRQ_Handler,
    (uint32_t)USART1_IRQ_Handler,
    (uint32_t)USART2_IRQ_Handler,
    (uint32_t)USART3_IRQ_Handler,
    (uint32_t)EXTI15_10_IRQ_Handler,
    (uint32_t)RTC_Alarm_IRQ_Handler,
    (uint32_t)USBWakeup_IRQ_Handler,
    (uint32_t)TIM8_BRK_IRQ_Handler,
    (uint32_t)TIM8_UP_IRQ_Handler,
    (uint32_t)TIM8_TRG_COM_IRQ_Handler,
    (uint32_t)TIM8_CC_IRQ_Handler,
    (uint32_t)ADC3_IRQ_Handler,
    (uint32_t)FMC_IRQ_Handler,
    0,
    0,
    (uint32_t)SPI3_IRQ_Handler,
    (uint32_t)UART4_IRQ_Handler,
    (uint32_t)UART5_IRQ_Handler,
    (uint32_t)TIM6_DAC_IRQ_Handler,
    (uint32_t)TIM7_IRQ_Handler,
    (uint32_t)DMA2_Stream1_IRQ_Handler,
    (uint32_t)DMA2_Stream2_IRQ_Handler,
    (uint32_t)DMA2_Stream3_IRQ_Handler,
    (uint32_t)DMA2_Stream4_IRQ_Handler,
    (uint32_t)DMA2_Stream5_IRQ_Handler,
    (uint32_t)ADC4_IRQ_Handler,
    0,
    0,
    (uint32_t)COMP123_IRQ_Handler,
    (uint32_t)COMP456_IRQ_Handler,
    (uint32_t)COMP7_IRQ_Handler,
    0,
    0,
    0,
    0,
    0,
    (uint32_t)I2C3_EV_IRQ_Handler,
    (uint32_t)I2C3_ER_IRQ_Handler,
    (uint32_t)USB_HP_IRQ_Handler,
    (uint32_t)USB_LP_IRQ_Handler,
    (uint32_t)USB_WKUP_RMP_IRQ_Handler,
    (uint32_t)TIM20_BRK_IRQ_Handler,
    (uint32_t)TIM20_UP_IRQ_Handler,
    (uint32_t)TIM20_TRG_COM_IRQ_Handler,
    (uint32_t)TIM20_CC_IRQ_Handler,
    (uint32_t)FPU_IRQ_Handler,
    0,
    0,
    (uint32_t)SPI4_IRQ_Handler
};

void Reset_Handler(void) {
    //COPY DATA SECTION IN SRAM
    uintptr_t  size = (uintptr_t )(&_edata - &_sdata);

    uint8_t *pDst = (uint8_t*) &_sdata; //SRAM
    uint8_t *pSrc = (uint8_t*) &_etext; //FLASH

    for(uint32_t i = 0; i < size; i++) {
        *pDst++ = *pSrc++;
    }

    //INIT BSS SECTION TO ZERO
    size = (uintptr_t )(&_ebss - &_sbss);

    pDst = (uint8_t*) &_sbss;

    for(uint32_t i = 0; i < size; i++) {
        *pDst++ = 0;
    }

    main();
}

void Default_Handler(void) {
    while(1);
}