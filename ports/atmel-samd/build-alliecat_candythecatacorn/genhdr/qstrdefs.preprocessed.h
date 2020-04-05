# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 27 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 45 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 31 "./mpconfigport.h"
# 1 "asf4/samd21/include/sam.h" 1
# 38 "asf4/samd21/include/sam.h"
# 1 "asf4/samd21/include/samd21e18a.h" 1
# 49 "asf4/samd21/include/samd21e18a.h"
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdint.h" 3 4
# 1 "/usr/arm-none-eabi/include/stdint.h" 1 3 4
# 12 "/usr/arm-none-eabi/include/stdint.h" 3 4
# 1 "/usr/arm-none-eabi/include/machine/_default_types.h" 1 3 4







# 1 "/usr/arm-none-eabi/include/sys/features.h" 1 3 4
# 28 "/usr/arm-none-eabi/include/sys/features.h" 3 4
# 1 "/usr/arm-none-eabi/include/_newlib_version.h" 1 3 4
# 29 "/usr/arm-none-eabi/include/sys/features.h" 2 3 4
# 9 "/usr/arm-none-eabi/include/machine/_default_types.h" 2 3 4
# 41 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4

# 41 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "/usr/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/usr/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 35 "/usr/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 187 "/usr/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "/usr/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/usr/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 20 "/usr/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "/usr/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 10 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdint.h" 2 3 4
# 50 "asf4/samd21/include/samd21e18a.h" 2


# 51 "asf4/samd21/include/samd21e18a.h"
typedef volatile const uint32_t RoReg;
typedef volatile const uint16_t RoReg16;
typedef volatile const uint8_t RoReg8;





typedef volatile uint32_t WoReg;
typedef volatile uint16_t WoReg16;
typedef volatile uint8_t WoReg8;
typedef volatile uint32_t RwReg;
typedef volatile uint16_t RwReg16;
typedef volatile uint8_t RwReg8;
# 91 "asf4/samd21/include/samd21e18a.h"
typedef enum IRQn
{

  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  SVCall_IRQn = -5,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  PM_IRQn = 0,
  SYSCTRL_IRQn = 1,
  WDT_IRQn = 2,
  RTC_IRQn = 3,
  EIC_IRQn = 4,
  NVMCTRL_IRQn = 5,
  DMAC_IRQn = 6,
  USB_IRQn = 7,
  EVSYS_IRQn = 8,
  SERCOM0_IRQn = 9,
  SERCOM1_IRQn = 10,
  SERCOM2_IRQn = 11,
  SERCOM3_IRQn = 12,
  TCC0_IRQn = 15,
  TCC1_IRQn = 16,
  TCC2_IRQn = 17,
  TC3_IRQn = 18,
  TC4_IRQn = 19,
  TC5_IRQn = 20,
  ADC_IRQn = 23,
  AC_IRQn = 24,
  DAC_IRQn = 25,
  PTC_IRQn = 26,
  I2S_IRQn = 27,

  PERIPH_COUNT_IRQn = 28
} IRQn_Type;

typedef struct _DeviceVectors
{

  void* pvStack;


  void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pvReservedM12;
  void* pvReservedM11;
  void* pvReservedM10;
  void* pvReservedM9;
  void* pvReservedM8;
  void* pvReservedM7;
  void* pvReservedM6;
  void* pfnSVC_Handler;
  void* pvReservedM4;
  void* pvReservedM3;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;


  void* pfnPM_Handler;
  void* pfnSYSCTRL_Handler;
  void* pfnWDT_Handler;
  void* pfnRTC_Handler;
  void* pfnEIC_Handler;
  void* pfnNVMCTRL_Handler;
  void* pfnDMAC_Handler;
  void* pfnUSB_Handler;
  void* pfnEVSYS_Handler;
  void* pfnSERCOM0_Handler;
  void* pfnSERCOM1_Handler;
  void* pfnSERCOM2_Handler;
  void* pfnSERCOM3_Handler;
  void* pvReserved13;
  void* pvReserved14;
  void* pfnTCC0_Handler;
  void* pfnTCC1_Handler;
  void* pfnTCC2_Handler;
  void* pfnTC3_Handler;
  void* pfnTC4_Handler;
  void* pfnTC5_Handler;
  void* pvReserved21;
  void* pvReserved22;
  void* pfnADC_Handler;
  void* pfnAC_Handler;
  void* pfnDAC_Handler;
  void* pfnPTC_Handler;
  void* pfnI2S_Handler;
  void* pvReserved28;
} DeviceVectors;


void Reset_Handler ( void );
void NMI_Handler ( void );
void HardFault_Handler ( void );
void SVC_Handler ( void );
void PendSV_Handler ( void );
void SysTick_Handler ( void );


void PM_Handler ( void );
void SYSCTRL_Handler ( void );
void WDT_Handler ( void );
void RTC_Handler ( void );
void EIC_Handler ( void );
void NVMCTRL_Handler ( void );
void DMAC_Handler ( void );
void USB_Handler ( void );
void EVSYS_Handler ( void );
void SERCOM0_Handler ( void );
void SERCOM1_Handler ( void );
void SERCOM2_Handler ( void );
void SERCOM3_Handler ( void );
void TCC0_Handler ( void );
void TCC1_Handler ( void );
void TCC2_Handler ( void );
void TC3_Handler ( void );
void TC4_Handler ( void );
void TC5_Handler ( void );
void ADC_Handler ( void );
void AC_Handler ( void );
void DAC_Handler ( void );
void PTC_Handler ( void );
void I2S_Handler ( void );
# 231 "asf4/samd21/include/samd21e18a.h"
# 1 "asf4/samd21/CMSIS/Include/core_cm0plus.h" 1
# 113 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
# 1 "asf4/samd21/CMSIS/Include/cmsis_compiler.h" 1
# 48 "asf4/samd21/CMSIS/Include/cmsis_compiler.h"
# 1 "asf4/samd21/CMSIS/Include/cmsis_gcc.h" 1
# 29 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 54 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop
# 83 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 135 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 159 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 231 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 255 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 285 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 309 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}
# 339 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 740 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 774 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 793 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=l" (result) : "l" (value) );
  return(result);
}
# 808 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}
# 828 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 850 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;






  int32_t s = (4 * 8) - 1;

  result = value;
  for (value >>= 1U; value; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;

  return(result);
}
# 1897 "asf4/samd21/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic pop
# 49 "asf4/samd21/CMSIS/Include/cmsis_compiler.h" 2
# 114 "asf4/samd21/CMSIS/Include/core_cm0plus.h" 2
# 208 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:28;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 238 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 256 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:15;
    uint32_t T:1;
    uint32_t _reserved1:3;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 295 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t _reserved1:30;
  } b;
  uint32_t w;
} CONTROL_Type;
# 326 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
typedef struct
{
  volatile uint32_t ISER[1U];
        uint32_t RESERVED0[31U];
  volatile uint32_t ICER[1U];
        uint32_t RSERVED1[31U];
  volatile uint32_t ISPR[1U];
        uint32_t RESERVED2[31U];
  volatile uint32_t ICPR[1U];
        uint32_t RESERVED3[31U];
        uint32_t RESERVED4[64U];
  volatile uint32_t IP[8U];
} NVIC_Type;
# 353 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;

  volatile uint32_t VTOR;



  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
        uint32_t RESERVED1;
  volatile uint32_t SHP[2U];
  volatile uint32_t SHCSR;
} SCB_Type;
# 470 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 718 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
  }
}
# 735 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[0U] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 754 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 773 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[0U] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 792 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
  }
}
# 807 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
  }
}
# 825 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[( (((uint32_t)(int32_t)(IRQn)) >> 2UL) )] = ((uint32_t)(((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[( (((uint32_t)(int32_t)(IRQn)) >> 2UL) )] & ~(0xFFUL << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL))) |
       (((priority << (8U - 2)) & (uint32_t)0xFFUL) << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL)));
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >> 2UL) )] = ((uint32_t)(((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >> 2UL) )] & ~(0xFFUL << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL))) |
       (((priority << (8U - 2)) & (uint32_t)0xFFUL) << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL)));
  }
}
# 849 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[ ( (((uint32_t)(int32_t)(IRQn)) >> 2UL) )] >> ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL) ) & (uint32_t)0xFFUL) >> (8U - 2)));
  }
  else
  {
    return((uint32_t)(((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >> 2UL) )] >> ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL) ) & (uint32_t)0xFFUL) >> (8U - 2)));
  }
}
# 873 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{

  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;



  vectors[(int32_t)IRQn + 16] = vector;
}
# 892 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{

  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;



  return vectors[(int32_t)IRQn + 16];

}






static inline void NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = ((0x5FAUL << 16U) |
                 (1UL << 2U));
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 941 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline uint32_t SCB_GetFPUType(void)
{
    return 0U;
}
# 972 "asf4/samd21/CMSIS/Include/core_cm0plus.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 2) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 232 "asf4/samd21/include/samd21e18a.h" 2

# 1 "asf4/samd21/include/system_samd21.h" 1
# 39 "asf4/samd21/include/system_samd21.h"
extern uint32_t SystemCoreClock;

void SystemInit(void);
void SystemCoreClockUpdate(void);
# 234 "asf4/samd21/include/samd21e18a.h" 2
# 244 "asf4/samd21/include/samd21e18a.h"
# 1 "asf4/samd21/include/component/ac.h" 1
# 44 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t RUNSTDBY:1;
    uint8_t :4;
    uint8_t LPMUX:1;
  } bit;
  uint8_t reg;
} AC_CTRLA_Type;
# 72 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t START0:1;
    uint8_t START1:1;
    uint8_t :6;
  } bit;
  struct {
    uint8_t START:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} AC_CTRLB_Type;
# 100 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint16_t COMPEO0:1;
    uint16_t COMPEO1:1;
    uint16_t :2;
    uint16_t WINEO0:1;
    uint16_t :3;
    uint16_t COMPEI0:1;
    uint16_t COMPEI1:1;
    uint16_t :6;
  } bit;
  struct {
    uint16_t COMPEO:2;
    uint16_t :2;
    uint16_t WINEO:1;
    uint16_t :3;
    uint16_t COMPEI:2;
    uint16_t :6;
  } vec;
  uint16_t reg;
} AC_EVCTRL_Type;
# 149 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t COMP0:1;
    uint8_t COMP1:1;
    uint8_t :2;
    uint8_t WIN0:1;
    uint8_t :3;
  } bit;
  struct {
    uint8_t COMP:2;
    uint8_t :2;
    uint8_t WIN:1;
    uint8_t :3;
  } vec;
  uint8_t reg;
} AC_INTENCLR_Type;
# 186 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t COMP0:1;
    uint8_t COMP1:1;
    uint8_t :2;
    uint8_t WIN0:1;
    uint8_t :3;
  } bit;
  struct {
    uint8_t COMP:2;
    uint8_t :2;
    uint8_t WIN:1;
    uint8_t :3;
  } vec;
  uint8_t reg;
} AC_INTENSET_Type;
# 223 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    volatile const uint8_t COMP0:1;
    volatile const uint8_t COMP1:1;
    volatile const uint8_t :2;
    volatile const uint8_t WIN0:1;
    volatile const uint8_t :3;
  } bit;
  struct {
    volatile const uint8_t COMP:2;
    volatile const uint8_t :2;
    volatile const uint8_t WIN:1;
    volatile const uint8_t :3;
  } vec;
  uint8_t reg;
} AC_INTFLAG_Type;
# 260 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t STATE0:1;
    uint8_t STATE1:1;
    uint8_t :2;
    uint8_t WSTATE0:2;
    uint8_t :2;
  } bit;
  struct {
    uint8_t STATE:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} AC_STATUSA_Type;
# 299 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t READY0:1;
    uint8_t READY1:1;
    uint8_t :5;
    uint8_t SYNCBUSY:1;
  } bit;
  struct {
    uint8_t READY:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} AC_STATUSB_Type;
# 330 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t STATE0:1;
    uint8_t STATE1:1;
    uint8_t :2;
    uint8_t WSTATE0:2;
    uint8_t :2;
  } bit;
  struct {
    uint8_t STATE:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} AC_STATUSC_Type;
# 369 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t WEN0:1;
    uint8_t WINTSEL0:2;
    uint8_t :5;
  } bit;
  uint8_t reg;
} AC_WINCTRL_Type;
# 399 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint32_t ENABLE:1;
    uint32_t SINGLE:1;
    uint32_t SPEED:2;
    uint32_t :1;
    uint32_t INTSEL:2;
    uint32_t :1;
    uint32_t MUXNEG:3;
    uint32_t :1;
    uint32_t MUXPOS:2;
    uint32_t :1;
    uint32_t SWAP:1;
    uint32_t OUT:2;
    uint32_t :1;
    uint32_t HYST:1;
    uint32_t :4;
    uint32_t FLEN:3;
    uint32_t :5;
  } bit;
  uint32_t reg;
} AC_COMPCTRL_Type;
# 504 "asf4/samd21/include/component/ac.h"
typedef union {
  struct {
    uint8_t VALUE:6;
    uint8_t :2;
  } bit;
  uint8_t reg;
} AC_SCALER_Type;
# 523 "asf4/samd21/include/component/ac.h"
typedef struct {
  volatile AC_CTRLA_Type CTRLA;
  volatile AC_CTRLB_Type CTRLB;
  volatile AC_EVCTRL_Type EVCTRL;
  volatile AC_INTENCLR_Type INTENCLR;
  volatile AC_INTENSET_Type INTENSET;
  volatile AC_INTFLAG_Type INTFLAG;
       RoReg8 Reserved1[0x1];
  volatile const AC_STATUSA_Type STATUSA;
  volatile const AC_STATUSB_Type STATUSB;
  volatile const AC_STATUSC_Type STATUSC;
       RoReg8 Reserved2[0x1];
  volatile AC_WINCTRL_Type WINCTRL;
       RoReg8 Reserved3[0x3];
  volatile AC_COMPCTRL_Type COMPCTRL[2];
       RoReg8 Reserved4[0x8];
  volatile AC_SCALER_Type SCALER[2];
} Ac;
# 245 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/adc.h" 1
# 44 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t RUNSTDBY:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} ADC_CTRLA_Type;
# 68 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t REFSEL:4;
    uint8_t :3;
    uint8_t REFCOMP:1;
  } bit;
  uint8_t reg;
} ADC_REFCTRL_Type;
# 100 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t SAMPLENUM:4;
    uint8_t ADJRES:3;
    uint8_t :1;
  } bit;
  uint8_t reg;
} ADC_AVGCTRL_Type;
# 145 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t SAMPLEN:6;
    uint8_t :2;
  } bit;
  uint8_t reg;
} ADC_SAMPCTRL_Type;
# 164 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint16_t DIFFMODE:1;
    uint16_t LEFTADJ:1;
    uint16_t FREERUN:1;
    uint16_t CORREN:1;
    uint16_t RESSEL:2;
    uint16_t :2;
    uint16_t PRESCALER:3;
    uint16_t :5;
  } bit;
  uint16_t reg;
} ADC_CTRLB_Type;
# 224 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t WINMODE:3;
    uint8_t :5;
  } bit;
  uint8_t reg;
} ADC_WINCTRL_Type;
# 253 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t FLUSH:1;
    uint8_t START:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} ADC_SWTRIG_Type;
# 274 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint32_t MUXPOS:5;
    uint32_t :3;
    uint32_t MUXNEG:5;
    uint32_t :3;
    uint32_t INPUTSCAN:4;
    uint32_t INPUTOFFSET:4;
    uint32_t GAIN:4;
    uint32_t :4;
  } bit;
  uint32_t reg;
} ADC_INPUTCTRL_Type;
# 393 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t STARTEI:1;
    uint8_t SYNCEI:1;
    uint8_t :2;
    uint8_t RESRDYEO:1;
    uint8_t WINMONEO:1;
    uint8_t :2;
  } bit;
  uint8_t reg;
} ADC_EVCTRL_Type;
# 421 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t RESRDY:1;
    uint8_t OVERRUN:1;
    uint8_t WINMON:1;
    uint8_t SYNCRDY:1;
    uint8_t :4;
  } bit;
  uint8_t reg;
} ADC_INTENCLR_Type;
# 448 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t RESRDY:1;
    uint8_t OVERRUN:1;
    uint8_t WINMON:1;
    uint8_t SYNCRDY:1;
    uint8_t :4;
  } bit;
  uint8_t reg;
} ADC_INTENSET_Type;
# 475 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    volatile const uint8_t RESRDY:1;
    volatile const uint8_t OVERRUN:1;
    volatile const uint8_t WINMON:1;
    volatile const uint8_t SYNCRDY:1;
    volatile const uint8_t :4;
  } bit;
  uint8_t reg;
} ADC_INTFLAG_Type;
# 502 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t :7;
    uint8_t SYNCBUSY:1;
  } bit;
  uint8_t reg;
} ADC_STATUS_Type;
# 520 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint16_t RESULT:16;
  } bit;
  uint16_t reg;
} ADC_RESULT_Type;
# 538 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint16_t WINLT:16;
  } bit;
  uint16_t reg;
} ADC_WINLT_Type;
# 556 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint16_t WINUT:16;
  } bit;
  uint16_t reg;
} ADC_WINUT_Type;
# 574 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint16_t GAINCORR:12;
    uint16_t :4;
  } bit;
  uint16_t reg;
} ADC_GAINCORR_Type;
# 593 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint16_t OFFSETCORR:12;
    uint16_t :4;
  } bit;
  uint16_t reg;
} ADC_OFFSETCORR_Type;
# 612 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint16_t LINEARITY_CAL:8;
    uint16_t BIAS_CAL:3;
    uint16_t :5;
  } bit;
  uint16_t reg;
} ADC_CALIB_Type;
# 635 "asf4/samd21/include/component/adc.h"
typedef union {
  struct {
    uint8_t DBGRUN:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} ADC_DBGCTRL_Type;
# 653 "asf4/samd21/include/component/adc.h"
typedef struct {
  volatile ADC_CTRLA_Type CTRLA;
  volatile ADC_REFCTRL_Type REFCTRL;
  volatile ADC_AVGCTRL_Type AVGCTRL;
  volatile ADC_SAMPCTRL_Type SAMPCTRL;
  volatile ADC_CTRLB_Type CTRLB;
       RoReg8 Reserved1[0x2];
  volatile ADC_WINCTRL_Type WINCTRL;
       RoReg8 Reserved2[0x3];
  volatile ADC_SWTRIG_Type SWTRIG;
       RoReg8 Reserved3[0x3];
  volatile ADC_INPUTCTRL_Type INPUTCTRL;
  volatile ADC_EVCTRL_Type EVCTRL;
       RoReg8 Reserved4[0x1];
  volatile ADC_INTENCLR_Type INTENCLR;
  volatile ADC_INTENSET_Type INTENSET;
  volatile ADC_INTFLAG_Type INTFLAG;
  volatile const ADC_STATUS_Type STATUS;
  volatile const ADC_RESULT_Type RESULT;
  volatile ADC_WINLT_Type WINLT;
       RoReg8 Reserved5[0x2];
  volatile ADC_WINUT_Type WINUT;
       RoReg8 Reserved6[0x2];
  volatile ADC_GAINCORR_Type GAINCORR;
  volatile ADC_OFFSETCORR_Type OFFSETCORR;
  volatile ADC_CALIB_Type CALIB;
  volatile ADC_DBGCTRL_Type DBGCTRL;
} Adc;
# 246 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/dac.h" 1
# 44 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t RUNSTDBY:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} DAC_CTRLA_Type;
# 68 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint8_t EOEN:1;
    uint8_t IOEN:1;
    uint8_t LEFTADJ:1;
    uint8_t VPD:1;
    uint8_t BDWP:1;
    uint8_t :1;
    uint8_t REFSEL:2;
  } bit;
  uint8_t reg;
} DAC_CTRLB_Type;
# 108 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint8_t STARTEI:1;
    uint8_t EMPTYEO:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} DAC_EVCTRL_Type;
# 129 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint8_t UNDERRUN:1;
    uint8_t EMPTY:1;
    uint8_t SYNCRDY:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} DAC_INTENCLR_Type;
# 153 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint8_t UNDERRUN:1;
    uint8_t EMPTY:1;
    uint8_t SYNCRDY:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} DAC_INTENSET_Type;
# 177 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    volatile const uint8_t UNDERRUN:1;
    volatile const uint8_t EMPTY:1;
    volatile const uint8_t SYNCRDY:1;
    volatile const uint8_t :5;
  } bit;
  uint8_t reg;
} DAC_INTFLAG_Type;
# 201 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint8_t :7;
    uint8_t SYNCBUSY:1;
  } bit;
  uint8_t reg;
} DAC_STATUS_Type;
# 219 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint16_t DATA:16;
  } bit;
  uint16_t reg;
} DAC_DATA_Type;
# 237 "asf4/samd21/include/component/dac.h"
typedef union {
  struct {
    uint16_t DATABUF:16;
  } bit;
  uint16_t reg;
} DAC_DATABUF_Type;
# 255 "asf4/samd21/include/component/dac.h"
typedef struct {
  volatile DAC_CTRLA_Type CTRLA;
  volatile DAC_CTRLB_Type CTRLB;
  volatile DAC_EVCTRL_Type EVCTRL;
       RoReg8 Reserved1[0x1];
  volatile DAC_INTENCLR_Type INTENCLR;
  volatile DAC_INTENSET_Type INTENSET;
  volatile DAC_INTFLAG_Type INTFLAG;
  volatile const DAC_STATUS_Type STATUS;
  volatile DAC_DATA_Type DATA;
       RoReg8 Reserved2[0x2];
  volatile DAC_DATABUF_Type DATABUF;
} Dac;
# 247 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/dmac.h" 1
# 44 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint16_t SWRST:1;
    uint16_t DMAENABLE:1;
    uint16_t CRCENABLE:1;
    uint16_t :5;
    uint16_t LVLEN0:1;
    uint16_t LVLEN1:1;
    uint16_t LVLEN2:1;
    uint16_t LVLEN3:1;
    uint16_t :4;
  } bit;
  struct {
    uint16_t :8;
    uint16_t LVLEN:4;
    uint16_t :4;
  } vec;
  uint16_t reg;
} DMAC_CTRL_Type;
# 89 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint16_t CRCBEATSIZE:2;
    uint16_t CRCPOLY:2;
    uint16_t :4;
    uint16_t CRCSRC:6;
    uint16_t :2;
  } bit;
  uint16_t reg;
} DMAC_CRCCTRL_Type;
# 131 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t CRCDATAIN:32;
  } bit;
  uint32_t reg;
} DMAC_CRCDATAIN_Type;
# 149 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t CRCCHKSUM:32;
  } bit;
  uint32_t reg;
} DMAC_CRCCHKSUM_Type;
# 167 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t CRCBUSY:1;
    uint8_t CRCZERO:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} DMAC_CRCSTATUS_Type;
# 188 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t DBGRUN:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} DMAC_DBGCTRL_Type;
# 206 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t WRBQOS:2;
    uint8_t FQOS:2;
    uint8_t DQOS:2;
    uint8_t :2;
  } bit;
  uint8_t reg;
} DMAC_QOSCTRL_Type;
# 257 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t SWTRIG0:1;
    uint32_t SWTRIG1:1;
    uint32_t SWTRIG2:1;
    uint32_t SWTRIG3:1;
    uint32_t SWTRIG4:1;
    uint32_t SWTRIG5:1;
    uint32_t SWTRIG6:1;
    uint32_t SWTRIG7:1;
    uint32_t SWTRIG8:1;
    uint32_t SWTRIG9:1;
    uint32_t SWTRIG10:1;
    uint32_t SWTRIG11:1;
    uint32_t :20;
  } bit;
  struct {
    uint32_t SWTRIG:12;
    uint32_t :20;
  } vec;
  uint32_t reg;
} DMAC_SWTRIGCTRL_Type;
# 315 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t LVLPRI0:4;
    uint32_t :3;
    uint32_t RRLVLEN0:1;
    uint32_t LVLPRI1:4;
    uint32_t :3;
    uint32_t RRLVLEN1:1;
    uint32_t LVLPRI2:4;
    uint32_t :3;
    uint32_t RRLVLEN2:1;
    uint32_t LVLPRI3:4;
    uint32_t :3;
    uint32_t RRLVLEN3:1;
  } bit;
  uint32_t reg;
} DMAC_PRICTRL0_Type;
# 361 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint16_t ID:4;
    uint16_t :4;
    uint16_t TERR:1;
    uint16_t TCMPL:1;
    uint16_t SUSP:1;
    uint16_t :2;
    uint16_t FERR:1;
    uint16_t BUSY:1;
    uint16_t PEND:1;
  } bit;
  uint16_t reg;
} DMAC_INTPEND_Type;
# 399 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t CHINT0:1;
    uint32_t CHINT1:1;
    uint32_t CHINT2:1;
    uint32_t CHINT3:1;
    uint32_t CHINT4:1;
    uint32_t CHINT5:1;
    uint32_t CHINT6:1;
    uint32_t CHINT7:1;
    uint32_t CHINT8:1;
    uint32_t CHINT9:1;
    uint32_t CHINT10:1;
    uint32_t CHINT11:1;
    uint32_t :20;
  } bit;
  struct {
    uint32_t CHINT:12;
    uint32_t :20;
  } vec;
  uint32_t reg;
} DMAC_INTSTATUS_Type;
# 457 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t BUSYCH0:1;
    uint32_t BUSYCH1:1;
    uint32_t BUSYCH2:1;
    uint32_t BUSYCH3:1;
    uint32_t BUSYCH4:1;
    uint32_t BUSYCH5:1;
    uint32_t BUSYCH6:1;
    uint32_t BUSYCH7:1;
    uint32_t BUSYCH8:1;
    uint32_t BUSYCH9:1;
    uint32_t BUSYCH10:1;
    uint32_t BUSYCH11:1;
    uint32_t :20;
  } bit;
  struct {
    uint32_t BUSYCH:12;
    uint32_t :20;
  } vec;
  uint32_t reg;
} DMAC_BUSYCH_Type;
# 515 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t PENDCH0:1;
    uint32_t PENDCH1:1;
    uint32_t PENDCH2:1;
    uint32_t PENDCH3:1;
    uint32_t PENDCH4:1;
    uint32_t PENDCH5:1;
    uint32_t PENDCH6:1;
    uint32_t PENDCH7:1;
    uint32_t PENDCH8:1;
    uint32_t PENDCH9:1;
    uint32_t PENDCH10:1;
    uint32_t PENDCH11:1;
    uint32_t :20;
  } bit;
  struct {
    uint32_t PENDCH:12;
    uint32_t :20;
  } vec;
  uint32_t reg;
} DMAC_PENDCH_Type;
# 573 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t LVLEX0:1;
    uint32_t LVLEX1:1;
    uint32_t LVLEX2:1;
    uint32_t LVLEX3:1;
    uint32_t :4;
    uint32_t ID:5;
    uint32_t :2;
    uint32_t ABUSY:1;
    uint32_t BTCNT:16;
  } bit;
  struct {
    uint32_t LVLEX:4;
    uint32_t :28;
  } vec;
  uint32_t reg;
} DMAC_ACTIVE_Type;
# 619 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t BASEADDR:32;
  } bit;
  uint32_t reg;
} DMAC_BASEADDR_Type;
# 637 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t WRBADDR:32;
  } bit;
  uint32_t reg;
} DMAC_WRBADDR_Type;
# 655 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t ID:4;
    uint8_t :4;
  } bit;
  uint8_t reg;
} DMAC_CHID_Type;
# 674 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} DMAC_CHCTRLA_Type;
# 695 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t EVACT:3;
    uint32_t EVIE:1;
    uint32_t EVOE:1;
    uint32_t LVL:2;
    uint32_t :1;
    uint32_t TRIGSRC:6;
    uint32_t :8;
    uint32_t TRIGACT:2;
    uint32_t CMD:2;
    uint32_t :6;
  } bit;
  uint32_t reg;
} DMAC_CHCTRLB_Type;
# 774 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t TERR:1;
    uint8_t TCMPL:1;
    uint8_t SUSP:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} DMAC_CHINTENCLR_Type;
# 798 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t TERR:1;
    uint8_t TCMPL:1;
    uint8_t SUSP:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} DMAC_CHINTENSET_Type;
# 822 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    volatile const uint8_t TERR:1;
    volatile const uint8_t TCMPL:1;
    volatile const uint8_t SUSP:1;
    volatile const uint8_t :5;
  } bit;
  uint8_t reg;
} DMAC_CHINTFLAG_Type;
# 846 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint8_t PEND:1;
    uint8_t BUSY:1;
    uint8_t FERR:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} DMAC_CHSTATUS_Type;
# 870 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint16_t VALID:1;
    uint16_t EVOSEL:2;
    uint16_t BLOCKACT:2;
    uint16_t :3;
    uint16_t BEATSIZE:2;
    uint16_t SRCINC:1;
    uint16_t DSTINC:1;
    uint16_t STEPSEL:1;
    uint16_t STEPSIZE:3;
  } bit;
  uint16_t reg;
} DMAC_BTCTRL_Type;
# 953 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint16_t BTCNT:16;
  } bit;
  uint16_t reg;
} DMAC_BTCNT_Type;
# 970 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t SRCADDR:32;
  } bit;
  uint32_t reg;
} DMAC_SRCADDR_Type;
# 987 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t DSTADDR:32;
  } bit;
  uint32_t reg;
} DMAC_DSTADDR_Type;
# 1004 "asf4/samd21/include/component/dmac.h"
typedef union {
  struct {
    uint32_t DESCADDR:32;
  } bit;
  uint32_t reg;
} DMAC_DESCADDR_Type;
# 1021 "asf4/samd21/include/component/dmac.h"
typedef struct {
  volatile DMAC_CTRL_Type CTRL;
  volatile DMAC_CRCCTRL_Type CRCCTRL;
  volatile DMAC_CRCDATAIN_Type CRCDATAIN;
  volatile DMAC_CRCCHKSUM_Type CRCCHKSUM;
  volatile DMAC_CRCSTATUS_Type CRCSTATUS;
  volatile DMAC_DBGCTRL_Type DBGCTRL;
  volatile DMAC_QOSCTRL_Type QOSCTRL;
       RoReg8 Reserved1[0x1];
  volatile DMAC_SWTRIGCTRL_Type SWTRIGCTRL;
  volatile DMAC_PRICTRL0_Type PRICTRL0;
       RoReg8 Reserved2[0x8];
  volatile DMAC_INTPEND_Type INTPEND;
       RoReg8 Reserved3[0x2];
  volatile const DMAC_INTSTATUS_Type INTSTATUS;
  volatile const DMAC_BUSYCH_Type BUSYCH;
  volatile const DMAC_PENDCH_Type PENDCH;
  volatile const DMAC_ACTIVE_Type ACTIVE;
  volatile DMAC_BASEADDR_Type BASEADDR;
  volatile DMAC_WRBADDR_Type WRBADDR;
       RoReg8 Reserved4[0x3];
  volatile DMAC_CHID_Type CHID;
  volatile DMAC_CHCTRLA_Type CHCTRLA;
       RoReg8 Reserved5[0x3];
  volatile DMAC_CHCTRLB_Type CHCTRLB;
       RoReg8 Reserved6[0x4];
  volatile DMAC_CHINTENCLR_Type CHINTENCLR;
  volatile DMAC_CHINTENSET_Type CHINTENSET;
  volatile DMAC_CHINTFLAG_Type CHINTFLAG;
  volatile const DMAC_CHSTATUS_Type CHSTATUS;
} Dmac;




typedef struct {
  volatile DMAC_BTCTRL_Type BTCTRL;
  volatile DMAC_BTCNT_Type BTCNT;
  volatile DMAC_SRCADDR_Type SRCADDR;
  volatile DMAC_DSTADDR_Type DSTADDR;
  volatile DMAC_DESCADDR_Type DESCADDR;
} DmacDescriptor

  __attribute__ ((aligned (8)))

;
# 248 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/dsu.h" 1
# 44 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t :1;
    uint8_t CRC:1;
    uint8_t MBIST:1;
    uint8_t CE:1;
    uint8_t :3;
  } bit;
  uint8_t reg;
} DSU_CTRL_Type;
# 72 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint8_t DONE:1;
    uint8_t CRSTEXT:1;
    uint8_t BERR:1;
    uint8_t FAIL:1;
    uint8_t PERR:1;
    uint8_t :3;
  } bit;
  uint8_t reg;
} DSU_STATUSA_Type;
# 102 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint8_t PROT:1;
    uint8_t DBGPRES:1;
    uint8_t DCCD0:1;
    uint8_t DCCD1:1;
    uint8_t HPE:1;
    uint8_t :3;
  } bit;
  struct {
    uint8_t :2;
    uint8_t DCCD:2;
    uint8_t :4;
  } vec;
  uint8_t reg;
} DSU_STATUSB_Type;
# 140 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t :2;
    uint32_t ADDR:30;
  } bit;
  uint32_t reg;
} DSU_ADDR_Type;
# 159 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t :2;
    uint32_t LENGTH:30;
  } bit;
  uint32_t reg;
} DSU_LENGTH_Type;
# 178 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t DATA:32;
  } bit;
  uint32_t reg;
} DSU_DATA_Type;
# 196 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t DATA:32;
  } bit;
  uint32_t reg;
} DSU_DCC_Type;
# 214 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t DEVSEL:8;
    uint32_t REVISION:4;
    uint32_t DIE:4;
    uint32_t SERIES:6;
    uint32_t :1;
    uint32_t FAMILY:5;
    uint32_t PROCESSOR:4;
  } bit;
  uint32_t reg;
} DSU_DID_Type;
# 252 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t EPRES:1;
    uint32_t FMT:1;
    uint32_t :10;
    uint32_t ADDOFF:20;
  } bit;
  uint32_t reg;
} DSU_ENTRY_Type;
# 277 "asf4/samd21/include/component/dsu.h"
typedef union {
  uint32_t reg;
} DSU_ENTRY1_Type;
# 288 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t END:32;
  } bit;
  uint32_t reg;
} DSU_END_Type;
# 306 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t SMEMP:1;
    uint32_t :31;
  } bit;
  uint32_t reg;
} DSU_MEMTYPE_Type;
# 324 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t JEPCC:4;
    uint32_t FKBC:4;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_PID4_Type;
# 347 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t PARTNBL:8;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_PID0_Type;
# 366 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t PARTNBH:4;
    uint32_t JEPIDCL:4;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_PID1_Type;
# 389 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t JEPIDCH:3;
    uint32_t JEPU:1;
    uint32_t REVISION:4;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_PID2_Type;
# 415 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t CUSMOD:4;
    uint32_t REVAND:4;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_PID3_Type;
# 438 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t PREAMBLEB0:8;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_CID0_Type;
# 457 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t PREAMBLE:4;
    uint32_t CCLASS:4;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_CID1_Type;
# 480 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t PREAMBLEB2:8;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_CID2_Type;
# 499 "asf4/samd21/include/component/dsu.h"
typedef union {
  struct {
    uint32_t PREAMBLEB3:8;
    uint32_t :24;
  } bit;
  uint32_t reg;
} DSU_CID3_Type;
# 518 "asf4/samd21/include/component/dsu.h"
typedef struct {
  volatile DSU_CTRL_Type CTRL;
  volatile DSU_STATUSA_Type STATUSA;
  volatile const DSU_STATUSB_Type STATUSB;
       RoReg8 Reserved1[0x1];
  volatile DSU_ADDR_Type ADDR;
  volatile DSU_LENGTH_Type LENGTH;
  volatile DSU_DATA_Type DATA;
  volatile DSU_DCC_Type DCC[2];
  volatile const DSU_DID_Type DID;
       RoReg8 Reserved2[0xFE4];
  volatile const DSU_ENTRY_Type ENTRY;
  volatile const DSU_ENTRY1_Type ENTRY1;
  volatile const DSU_END_Type END;
       RoReg8 Reserved3[0xFC0];
  volatile const DSU_MEMTYPE_Type MEMTYPE;
  volatile const DSU_PID4_Type PID4;
       RoReg8 Reserved4[0xC];
  volatile const DSU_PID0_Type PID0;
  volatile const DSU_PID1_Type PID1;
  volatile const DSU_PID2_Type PID2;
  volatile const DSU_PID3_Type PID3;
  volatile const DSU_CID0_Type CID0;
  volatile const DSU_CID1_Type CID1;
  volatile const DSU_CID2_Type CID2;
  volatile const DSU_CID3_Type CID3;
} Dsu;
# 249 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/eic.h" 1
# 44 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} EIC_CTRL_Type;
# 65 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint8_t :7;
    uint8_t SYNCBUSY:1;
  } bit;
  uint8_t reg;
} EIC_STATUS_Type;
# 83 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint8_t NMISENSE:3;
    uint8_t NMIFILTEN:1;
    uint8_t :4;
  } bit;
  uint8_t reg;
} EIC_NMICTRL_Type;
# 117 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint8_t NMI:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} EIC_NMIFLAG_Type;
# 135 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint32_t EXTINTEO0:1;
    uint32_t EXTINTEO1:1;
    uint32_t EXTINTEO2:1;
    uint32_t EXTINTEO3:1;
    uint32_t EXTINTEO4:1;
    uint32_t EXTINTEO5:1;
    uint32_t EXTINTEO6:1;
    uint32_t EXTINTEO7:1;
    uint32_t EXTINTEO8:1;
    uint32_t EXTINTEO9:1;
    uint32_t EXTINTEO10:1;
    uint32_t EXTINTEO11:1;
    uint32_t EXTINTEO12:1;
    uint32_t EXTINTEO13:1;
    uint32_t EXTINTEO14:1;
    uint32_t EXTINTEO15:1;
    uint32_t :16;
  } bit;
  struct {
    uint32_t EXTINTEO:16;
    uint32_t :16;
  } vec;
  uint32_t reg;
} EIC_EVCTRL_Type;
# 205 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint32_t EXTINT0:1;
    uint32_t EXTINT1:1;
    uint32_t EXTINT2:1;
    uint32_t EXTINT3:1;
    uint32_t EXTINT4:1;
    uint32_t EXTINT5:1;
    uint32_t EXTINT6:1;
    uint32_t EXTINT7:1;
    uint32_t EXTINT8:1;
    uint32_t EXTINT9:1;
    uint32_t EXTINT10:1;
    uint32_t EXTINT11:1;
    uint32_t EXTINT12:1;
    uint32_t EXTINT13:1;
    uint32_t EXTINT14:1;
    uint32_t EXTINT15:1;
    uint32_t :16;
  } bit;
  struct {
    uint32_t EXTINT:16;
    uint32_t :16;
  } vec;
  uint32_t reg;
} EIC_INTENCLR_Type;
# 275 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint32_t EXTINT0:1;
    uint32_t EXTINT1:1;
    uint32_t EXTINT2:1;
    uint32_t EXTINT3:1;
    uint32_t EXTINT4:1;
    uint32_t EXTINT5:1;
    uint32_t EXTINT6:1;
    uint32_t EXTINT7:1;
    uint32_t EXTINT8:1;
    uint32_t EXTINT9:1;
    uint32_t EXTINT10:1;
    uint32_t EXTINT11:1;
    uint32_t EXTINT12:1;
    uint32_t EXTINT13:1;
    uint32_t EXTINT14:1;
    uint32_t EXTINT15:1;
    uint32_t :16;
  } bit;
  struct {
    uint32_t EXTINT:16;
    uint32_t :16;
  } vec;
  uint32_t reg;
} EIC_INTENSET_Type;
# 345 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    volatile const uint32_t EXTINT0:1;
    volatile const uint32_t EXTINT1:1;
    volatile const uint32_t EXTINT2:1;
    volatile const uint32_t EXTINT3:1;
    volatile const uint32_t EXTINT4:1;
    volatile const uint32_t EXTINT5:1;
    volatile const uint32_t EXTINT6:1;
    volatile const uint32_t EXTINT7:1;
    volatile const uint32_t EXTINT8:1;
    volatile const uint32_t EXTINT9:1;
    volatile const uint32_t EXTINT10:1;
    volatile const uint32_t EXTINT11:1;
    volatile const uint32_t EXTINT12:1;
    volatile const uint32_t EXTINT13:1;
    volatile const uint32_t EXTINT14:1;
    volatile const uint32_t EXTINT15:1;
    volatile const uint32_t :16;
  } bit;
  struct {
    volatile const uint32_t EXTINT:16;
    volatile const uint32_t :16;
  } vec;
  uint32_t reg;
} EIC_INTFLAG_Type;
# 415 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint32_t WAKEUPEN0:1;
    uint32_t WAKEUPEN1:1;
    uint32_t WAKEUPEN2:1;
    uint32_t WAKEUPEN3:1;
    uint32_t WAKEUPEN4:1;
    uint32_t WAKEUPEN5:1;
    uint32_t WAKEUPEN6:1;
    uint32_t WAKEUPEN7:1;
    uint32_t WAKEUPEN8:1;
    uint32_t WAKEUPEN9:1;
    uint32_t WAKEUPEN10:1;
    uint32_t WAKEUPEN11:1;
    uint32_t WAKEUPEN12:1;
    uint32_t WAKEUPEN13:1;
    uint32_t WAKEUPEN14:1;
    uint32_t WAKEUPEN15:1;
    uint32_t :16;
  } bit;
  struct {
    uint32_t WAKEUPEN:16;
    uint32_t :16;
  } vec;
  uint32_t reg;
} EIC_WAKEUP_Type;
# 485 "asf4/samd21/include/component/eic.h"
typedef union {
  struct {
    uint32_t SENSE0:3;
    uint32_t FILTEN0:1;
    uint32_t SENSE1:3;
    uint32_t FILTEN1:1;
    uint32_t SENSE2:3;
    uint32_t FILTEN2:1;
    uint32_t SENSE3:3;
    uint32_t FILTEN3:1;
    uint32_t SENSE4:3;
    uint32_t FILTEN4:1;
    uint32_t SENSE5:3;
    uint32_t FILTEN5:1;
    uint32_t SENSE6:3;
    uint32_t FILTEN6:1;
    uint32_t SENSE7:3;
    uint32_t FILTEN7:1;
  } bit;
  uint32_t reg;
} EIC_CONFIG_Type;
# 651 "asf4/samd21/include/component/eic.h"
typedef struct {
  volatile EIC_CTRL_Type CTRL;
  volatile const EIC_STATUS_Type STATUS;
  volatile EIC_NMICTRL_Type NMICTRL;
  volatile EIC_NMIFLAG_Type NMIFLAG;
  volatile EIC_EVCTRL_Type EVCTRL;
  volatile EIC_INTENCLR_Type INTENCLR;
  volatile EIC_INTENSET_Type INTENSET;
  volatile EIC_INTFLAG_Type INTFLAG;
  volatile EIC_WAKEUP_Type WAKEUP;
  volatile EIC_CONFIG_Type CONFIG[2];
} Eic;
# 250 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/evsys.h" 1
# 44 "asf4/samd21/include/component/evsys.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t :3;
    uint8_t GCLKREQ:1;
    uint8_t :3;
  } bit;
  uint8_t reg;
} EVSYS_CTRL_Type;
# 66 "asf4/samd21/include/component/evsys.h"
typedef union {
  struct {
    uint32_t CHANNEL:4;
    uint32_t :4;
    uint32_t SWEVT:1;
    uint32_t :7;
    uint32_t EVGEN:7;
    uint32_t :1;
    uint32_t PATH:2;
    uint32_t EDGSEL:2;
    uint32_t :4;
  } bit;
  uint32_t reg;
} EVSYS_CHANNEL_Type;
# 117 "asf4/samd21/include/component/evsys.h"
typedef union {
  struct {
    uint16_t USER:5;
    uint16_t :3;
    uint16_t CHANNEL:5;
    uint16_t :3;
  } bit;
  uint16_t reg;
} EVSYS_USER_Type;
# 143 "asf4/samd21/include/component/evsys.h"
typedef union {
  struct {
    uint32_t USRRDY0:1;
    uint32_t USRRDY1:1;
    uint32_t USRRDY2:1;
    uint32_t USRRDY3:1;
    uint32_t USRRDY4:1;
    uint32_t USRRDY5:1;
    uint32_t USRRDY6:1;
    uint32_t USRRDY7:1;
    uint32_t CHBUSY0:1;
    uint32_t CHBUSY1:1;
    uint32_t CHBUSY2:1;
    uint32_t CHBUSY3:1;
    uint32_t CHBUSY4:1;
    uint32_t CHBUSY5:1;
    uint32_t CHBUSY6:1;
    uint32_t CHBUSY7:1;
    uint32_t USRRDY8:1;
    uint32_t USRRDY9:1;
    uint32_t USRRDY10:1;
    uint32_t USRRDY11:1;
    uint32_t :4;
    uint32_t CHBUSY8:1;
    uint32_t CHBUSY9:1;
    uint32_t CHBUSY10:1;
    uint32_t CHBUSY11:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t USRRDY:8;
    uint32_t CHBUSY:8;
    uint32_t USRRDYp8:4;
    uint32_t :4;
    uint32_t CHBUSYp8:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} EVSYS_CHSTATUS_Type;
# 251 "asf4/samd21/include/component/evsys.h"
typedef union {
  struct {
    uint32_t OVR0:1;
    uint32_t OVR1:1;
    uint32_t OVR2:1;
    uint32_t OVR3:1;
    uint32_t OVR4:1;
    uint32_t OVR5:1;
    uint32_t OVR6:1;
    uint32_t OVR7:1;
    uint32_t EVD0:1;
    uint32_t EVD1:1;
    uint32_t EVD2:1;
    uint32_t EVD3:1;
    uint32_t EVD4:1;
    uint32_t EVD5:1;
    uint32_t EVD6:1;
    uint32_t EVD7:1;
    uint32_t OVR8:1;
    uint32_t OVR9:1;
    uint32_t OVR10:1;
    uint32_t OVR11:1;
    uint32_t :4;
    uint32_t EVD8:1;
    uint32_t EVD9:1;
    uint32_t EVD10:1;
    uint32_t EVD11:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t OVR:8;
    uint32_t EVD:8;
    uint32_t OVRp8:4;
    uint32_t :4;
    uint32_t EVDp8:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} EVSYS_INTENCLR_Type;
# 359 "asf4/samd21/include/component/evsys.h"
typedef union {
  struct {
    uint32_t OVR0:1;
    uint32_t OVR1:1;
    uint32_t OVR2:1;
    uint32_t OVR3:1;
    uint32_t OVR4:1;
    uint32_t OVR5:1;
    uint32_t OVR6:1;
    uint32_t OVR7:1;
    uint32_t EVD0:1;
    uint32_t EVD1:1;
    uint32_t EVD2:1;
    uint32_t EVD3:1;
    uint32_t EVD4:1;
    uint32_t EVD5:1;
    uint32_t EVD6:1;
    uint32_t EVD7:1;
    uint32_t OVR8:1;
    uint32_t OVR9:1;
    uint32_t OVR10:1;
    uint32_t OVR11:1;
    uint32_t :4;
    uint32_t EVD8:1;
    uint32_t EVD9:1;
    uint32_t EVD10:1;
    uint32_t EVD11:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t OVR:8;
    uint32_t EVD:8;
    uint32_t OVRp8:4;
    uint32_t :4;
    uint32_t EVDp8:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} EVSYS_INTENSET_Type;
# 467 "asf4/samd21/include/component/evsys.h"
typedef union {
  struct {
    volatile const uint32_t OVR0:1;
    volatile const uint32_t OVR1:1;
    volatile const uint32_t OVR2:1;
    volatile const uint32_t OVR3:1;
    volatile const uint32_t OVR4:1;
    volatile const uint32_t OVR5:1;
    volatile const uint32_t OVR6:1;
    volatile const uint32_t OVR7:1;
    volatile const uint32_t EVD0:1;
    volatile const uint32_t EVD1:1;
    volatile const uint32_t EVD2:1;
    volatile const uint32_t EVD3:1;
    volatile const uint32_t EVD4:1;
    volatile const uint32_t EVD5:1;
    volatile const uint32_t EVD6:1;
    volatile const uint32_t EVD7:1;
    volatile const uint32_t OVR8:1;
    volatile const uint32_t OVR9:1;
    volatile const uint32_t OVR10:1;
    volatile const uint32_t OVR11:1;
    volatile const uint32_t :4;
    volatile const uint32_t EVD8:1;
    volatile const uint32_t EVD9:1;
    volatile const uint32_t EVD10:1;
    volatile const uint32_t EVD11:1;
    volatile const uint32_t :4;
  } bit;
  struct {
    volatile const uint32_t OVR:8;
    volatile const uint32_t EVD:8;
    volatile const uint32_t OVRp8:4;
    volatile const uint32_t :4;
    volatile const uint32_t EVDp8:4;
    volatile const uint32_t :4;
  } vec;
  uint32_t reg;
} EVSYS_INTFLAG_Type;
# 575 "asf4/samd21/include/component/evsys.h"
typedef struct {
  volatile EVSYS_CTRL_Type CTRL;
       RoReg8 Reserved1[0x3];
  volatile EVSYS_CHANNEL_Type CHANNEL;
  volatile EVSYS_USER_Type USER;
       RoReg8 Reserved2[0x2];
  volatile const EVSYS_CHSTATUS_Type CHSTATUS;
  volatile EVSYS_INTENCLR_Type INTENCLR;
  volatile EVSYS_INTENSET_Type INTENSET;
  volatile EVSYS_INTFLAG_Type INTFLAG;
} Evsys;
# 251 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/gclk.h" 1
# 44 "asf4/samd21/include/component/gclk.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} GCLK_CTRL_Type;
# 62 "asf4/samd21/include/component/gclk.h"
typedef union {
  struct {
    uint8_t :7;
    uint8_t SYNCBUSY:1;
  } bit;
  uint8_t reg;
} GCLK_STATUS_Type;
# 80 "asf4/samd21/include/component/gclk.h"
typedef union {
  struct {
    uint16_t ID:6;
    uint16_t :2;
    uint16_t GEN:4;
    uint16_t :2;
    uint16_t CLKEN:1;
    uint16_t WRTLOCK:1;
  } bit;
  uint16_t reg;
} GCLK_CLKCTRL_Type;
# 202 "asf4/samd21/include/component/gclk.h"
typedef union {
  struct {
    uint32_t ID:4;
    uint32_t :4;
    uint32_t SRC:5;
    uint32_t :3;
    uint32_t GENEN:1;
    uint32_t IDC:1;
    uint32_t OOV:1;
    uint32_t OE:1;
    uint32_t DIVSEL:1;
    uint32_t RUNSTDBY:1;
    uint32_t :10;
  } bit;
  uint32_t reg;
} GCLK_GENCTRL_Type;
# 263 "asf4/samd21/include/component/gclk.h"
typedef union {
  struct {
    uint32_t ID:4;
    uint32_t :4;
    uint32_t DIV:16;
    uint32_t :8;
  } bit;
  uint32_t reg;
} GCLK_GENDIV_Type;
# 287 "asf4/samd21/include/component/gclk.h"
typedef struct {
  volatile GCLK_CTRL_Type CTRL;
  volatile const GCLK_STATUS_Type STATUS;
  volatile GCLK_CLKCTRL_Type CLKCTRL;
  volatile GCLK_GENCTRL_Type GENCTRL;
  volatile GCLK_GENDIV_Type GENDIV;
} Gclk;
# 252 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/hmatrixb.h" 1
# 44 "asf4/samd21/include/component/hmatrixb.h"
typedef union {
  uint32_t reg;
} HMATRIXB_PRAS_Type;
# 56 "asf4/samd21/include/component/hmatrixb.h"
typedef union {
  uint32_t reg;
} HMATRIXB_PRBS_Type;
# 68 "asf4/samd21/include/component/hmatrixb.h"
typedef union {
  struct {
    uint32_t SFR:32;
  } bit;
  uint32_t reg;
} HMATRIXB_SFR_Type;
# 86 "asf4/samd21/include/component/hmatrixb.h"
typedef struct {
  volatile HMATRIXB_PRAS_Type PRAS;
  volatile HMATRIXB_PRBS_Type PRBS;
} HmatrixbPrs;




typedef struct {
       RoReg8 Reserved1[0x80];
       HmatrixbPrs Prs[16];
       RoReg8 Reserved2[0x10];
  volatile HMATRIXB_SFR_Type SFR[16];
} Hmatrixb;
# 253 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/i2s.h" 1
# 44 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t CKEN0:1;
    uint8_t CKEN1:1;
    uint8_t SEREN0:1;
    uint8_t SEREN1:1;
    uint8_t :2;
  } bit;
  struct {
    uint8_t :2;
    uint8_t CKEN:2;
    uint8_t SEREN:2;
    uint8_t :2;
  } vec;
  uint8_t reg;
} I2S_CTRLA_Type;
# 89 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    uint32_t SLOTSIZE:2;
    uint32_t NBSLOTS:3;
    uint32_t FSWIDTH:2;
    uint32_t BITDELAY:1;
    uint32_t FSSEL:1;
    uint32_t :2;
    uint32_t FSINV:1;
    uint32_t SCKSEL:1;
    uint32_t :3;
    uint32_t MCKSEL:1;
    uint32_t :1;
    uint32_t MCKEN:1;
    uint32_t MCKDIV:5;
    uint32_t MCKOUTDIV:5;
    uint32_t FSOUTINV:1;
    uint32_t SCKOUTINV:1;
    uint32_t MCKOUTINV:1;
  } bit;
  uint32_t reg;
} I2S_CLKCTRL_Type;
# 185 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    uint16_t RXRDY0:1;
    uint16_t RXRDY1:1;
    uint16_t :2;
    uint16_t RXOR0:1;
    uint16_t RXOR1:1;
    uint16_t :2;
    uint16_t TXRDY0:1;
    uint16_t TXRDY1:1;
    uint16_t :2;
    uint16_t TXUR0:1;
    uint16_t TXUR1:1;
    uint16_t :2;
  } bit;
  struct {
    uint16_t RXRDY:2;
    uint16_t :2;
    uint16_t RXOR:2;
    uint16_t :2;
    uint16_t TXRDY:2;
    uint16_t :2;
    uint16_t TXUR:2;
    uint16_t :2;
  } vec;
  uint16_t reg;
} I2S_INTENCLR_Type;
# 249 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    uint16_t RXRDY0:1;
    uint16_t RXRDY1:1;
    uint16_t :2;
    uint16_t RXOR0:1;
    uint16_t RXOR1:1;
    uint16_t :2;
    uint16_t TXRDY0:1;
    uint16_t TXRDY1:1;
    uint16_t :2;
    uint16_t TXUR0:1;
    uint16_t TXUR1:1;
    uint16_t :2;
  } bit;
  struct {
    uint16_t RXRDY:2;
    uint16_t :2;
    uint16_t RXOR:2;
    uint16_t :2;
    uint16_t TXRDY:2;
    uint16_t :2;
    uint16_t TXUR:2;
    uint16_t :2;
  } vec;
  uint16_t reg;
} I2S_INTENSET_Type;
# 313 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    volatile const uint16_t RXRDY0:1;
    volatile const uint16_t RXRDY1:1;
    volatile const uint16_t :2;
    volatile const uint16_t RXOR0:1;
    volatile const uint16_t RXOR1:1;
    volatile const uint16_t :2;
    volatile const uint16_t TXRDY0:1;
    volatile const uint16_t TXRDY1:1;
    volatile const uint16_t :2;
    volatile const uint16_t TXUR0:1;
    volatile const uint16_t TXUR1:1;
    volatile const uint16_t :2;
  } bit;
  struct {
    volatile const uint16_t RXRDY:2;
    volatile const uint16_t :2;
    volatile const uint16_t RXOR:2;
    volatile const uint16_t :2;
    volatile const uint16_t TXRDY:2;
    volatile const uint16_t :2;
    volatile const uint16_t TXUR:2;
    volatile const uint16_t :2;
  } vec;
  uint16_t reg;
} I2S_INTFLAG_Type;
# 377 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    uint16_t SWRST:1;
    uint16_t ENABLE:1;
    uint16_t CKEN0:1;
    uint16_t CKEN1:1;
    uint16_t SEREN0:1;
    uint16_t SEREN1:1;
    uint16_t :2;
    uint16_t DATA0:1;
    uint16_t DATA1:1;
    uint16_t :6;
  } bit;
  struct {
    uint16_t :2;
    uint16_t CKEN:2;
    uint16_t SEREN:2;
    uint16_t :2;
    uint16_t DATA:2;
    uint16_t :6;
  } vec;
  uint16_t reg;
} I2S_SYNCBUSY_Type;
# 434 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    uint32_t SERMODE:2;
    uint32_t TXDEFAULT:2;
    uint32_t TXSAME:1;
    uint32_t CLKSEL:1;
    uint32_t :1;
    uint32_t SLOTADJ:1;
    uint32_t DATASIZE:3;
    uint32_t :1;
    uint32_t WORDADJ:1;
    uint32_t EXTEND:2;
    uint32_t BITREV:1;
    uint32_t SLOTDIS0:1;
    uint32_t SLOTDIS1:1;
    uint32_t SLOTDIS2:1;
    uint32_t SLOTDIS3:1;
    uint32_t SLOTDIS4:1;
    uint32_t SLOTDIS5:1;
    uint32_t SLOTDIS6:1;
    uint32_t SLOTDIS7:1;
    uint32_t MONO:1;
    uint32_t DMA:1;
    uint32_t RXLOOP:1;
    uint32_t :5;
  } bit;
  struct {
    uint32_t :16;
    uint32_t SLOTDIS:8;
    uint32_t :8;
  } vec;
  uint32_t reg;
} I2S_SERCTRL_Type;
# 587 "asf4/samd21/include/component/i2s.h"
typedef union {
  struct {
    uint32_t DATA:32;
  } bit;
  uint32_t reg;
} I2S_DATA_Type;
# 605 "asf4/samd21/include/component/i2s.h"
typedef struct {
  volatile I2S_CTRLA_Type CTRLA;
       RoReg8 Reserved1[0x3];
  volatile I2S_CLKCTRL_Type CLKCTRL[2];
  volatile I2S_INTENCLR_Type INTENCLR;
       RoReg8 Reserved2[0x2];
  volatile I2S_INTENSET_Type INTENSET;
       RoReg8 Reserved3[0x2];
  volatile I2S_INTFLAG_Type INTFLAG;
       RoReg8 Reserved4[0x2];
  volatile const I2S_SYNCBUSY_Type SYNCBUSY;
       RoReg8 Reserved5[0x6];
  volatile I2S_SERCTRL_Type SERCTRL[2];
       RoReg8 Reserved6[0x8];
  volatile I2S_DATA_Type DATA[2];
} I2s;
# 254 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/mtb.h" 1
# 44 "asf4/samd21/include/component/mtb.h"
typedef union {
  struct {
    uint32_t :2;
    uint32_t WRAP:1;
    uint32_t POINTER:29;
  } bit;
  uint32_t reg;
} MTB_POSITION_Type;
# 65 "asf4/samd21/include/component/mtb.h"
typedef union {
  struct {
    uint32_t MASK:5;
    uint32_t TSTARTEN:1;
    uint32_t TSTOPEN:1;
    uint32_t SFRWPRIV:1;
    uint32_t RAMPRIV:1;
    uint32_t HALTREQ:1;
    uint32_t :21;
    uint32_t EN:1;
  } bit;
  uint32_t reg;
} MTB_MASTER_Type;
# 102 "asf4/samd21/include/component/mtb.h"
typedef union {
  struct {
    uint32_t AUTOSTOP:1;
    uint32_t AUTOHALT:1;
    uint32_t :1;
    uint32_t WATERMARK:29;
  } bit;
  uint32_t reg;
} MTB_FLOW_Type;
# 127 "asf4/samd21/include/component/mtb.h"
typedef union {
  uint32_t reg;
} MTB_BASE_Type;







typedef union {
  uint32_t reg;
} MTB_ITCTRL_Type;







typedef union {
  uint32_t reg;
} MTB_CLAIMSET_Type;







typedef union {
  uint32_t reg;
} MTB_CLAIMCLR_Type;







typedef union {
  uint32_t reg;
} MTB_LOCKACCESS_Type;







typedef union {
  uint32_t reg;
} MTB_LOCKSTATUS_Type;







typedef union {
  uint32_t reg;
} MTB_AUTHSTATUS_Type;







typedef union {
  uint32_t reg;
} MTB_DEVARCH_Type;







typedef union {
  uint32_t reg;
} MTB_DEVID_Type;







typedef union {
  uint32_t reg;
} MTB_DEVTYPE_Type;







typedef union {
  uint32_t reg;
} MTB_PID4_Type;







typedef union {
  uint32_t reg;
} MTB_PID5_Type;







typedef union {
  uint32_t reg;
} MTB_PID6_Type;







typedef union {
  uint32_t reg;
} MTB_PID7_Type;







typedef union {
  uint32_t reg;
} MTB_PID0_Type;







typedef union {
  uint32_t reg;
} MTB_PID1_Type;







typedef union {
  uint32_t reg;
} MTB_PID2_Type;







typedef union {
  uint32_t reg;
} MTB_PID3_Type;







typedef union {
  uint32_t reg;
} MTB_CID0_Type;







typedef union {
  uint32_t reg;
} MTB_CID1_Type;







typedef union {
  uint32_t reg;
} MTB_CID2_Type;







typedef union {
  uint32_t reg;
} MTB_CID3_Type;







typedef struct {
  volatile MTB_POSITION_Type POSITION;
  volatile MTB_MASTER_Type MASTER;
  volatile MTB_FLOW_Type FLOW;
  volatile const MTB_BASE_Type BASE;
       RoReg8 Reserved1[0xEF0];
  volatile MTB_ITCTRL_Type ITCTRL;
       RoReg8 Reserved2[0x9C];
  volatile MTB_CLAIMSET_Type CLAIMSET;
  volatile MTB_CLAIMCLR_Type CLAIMCLR;
       RoReg8 Reserved3[0x8];
  volatile MTB_LOCKACCESS_Type LOCKACCESS;
  volatile const MTB_LOCKSTATUS_Type LOCKSTATUS;
  volatile const MTB_AUTHSTATUS_Type AUTHSTATUS;
  volatile const MTB_DEVARCH_Type DEVARCH;
       RoReg8 Reserved4[0x8];
  volatile const MTB_DEVID_Type DEVID;
  volatile const MTB_DEVTYPE_Type DEVTYPE;
  volatile const MTB_PID4_Type PID4;
  volatile const MTB_PID5_Type PID5;
  volatile const MTB_PID6_Type PID6;
  volatile const MTB_PID7_Type PID7;
  volatile const MTB_PID0_Type PID0;
  volatile const MTB_PID1_Type PID1;
  volatile const MTB_PID2_Type PID2;
  volatile const MTB_PID3_Type PID3;
  volatile const MTB_CID0_Type CID0;
  volatile const MTB_CID1_Type CID1;
  volatile const MTB_CID2_Type CID2;
  volatile const MTB_CID3_Type CID3;
} Mtb;
# 255 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/nvmctrl.h" 1
# 44 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint16_t CMD:7;
    uint16_t :1;
    uint16_t CMDEX:8;
  } bit;
  uint16_t reg;
} NVMCTRL_CTRLA_Type;
# 95 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint32_t :1;
    uint32_t RWS:4;
    uint32_t :2;
    uint32_t MANW:1;
    uint32_t SLEEPPRM:2;
    uint32_t :6;
    uint32_t READMODE:2;
    uint32_t CACHEDIS:1;
    uint32_t :13;
  } bit;
  uint32_t reg;
} NVMCTRL_CTRLB_Type;
# 149 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint32_t NVMP:16;
    uint32_t PSZ:3;
    uint32_t :13;
  } bit;
  uint32_t reg;
} NVMCTRL_PARAM_Type;
# 188 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint8_t READY:1;
    uint8_t ERROR:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} NVMCTRL_INTENCLR_Type;
# 209 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint8_t READY:1;
    uint8_t ERROR:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} NVMCTRL_INTENSET_Type;
# 230 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    volatile const uint8_t READY:1;
    volatile const uint8_t ERROR:1;
    volatile const uint8_t :6;
  } bit;
  uint8_t reg;
} NVMCTRL_INTFLAG_Type;
# 251 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint16_t PRM:1;
    uint16_t LOAD:1;
    uint16_t PROGE:1;
    uint16_t LOCKE:1;
    uint16_t NVME:1;
    uint16_t :3;
    uint16_t SB:1;
    uint16_t :7;
  } bit;
  uint16_t reg;
} NVMCTRL_STATUS_Type;
# 285 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint32_t ADDR:22;
    uint32_t :10;
  } bit;
  uint32_t reg;
} NVMCTRL_ADDR_Type;
# 304 "asf4/samd21/include/component/nvmctrl.h"
typedef union {
  struct {
    uint16_t LOCK:16;
  } bit;
  uint16_t reg;
} NVMCTRL_LOCK_Type;
# 321 "asf4/samd21/include/component/nvmctrl.h"
typedef struct {
  volatile NVMCTRL_CTRLA_Type CTRLA;
       RoReg8 Reserved1[0x2];
  volatile NVMCTRL_CTRLB_Type CTRLB;
  volatile NVMCTRL_PARAM_Type PARAM;
  volatile NVMCTRL_INTENCLR_Type INTENCLR;
       RoReg8 Reserved2[0x3];
  volatile NVMCTRL_INTENSET_Type INTENSET;
       RoReg8 Reserved3[0x3];
  volatile NVMCTRL_INTFLAG_Type INTFLAG;
       RoReg8 Reserved4[0x3];
  volatile NVMCTRL_STATUS_Type STATUS;
       RoReg8 Reserved5[0x2];
  volatile NVMCTRL_ADDR_Type ADDR;
  volatile NVMCTRL_LOCK_Type LOCK;
} Nvmctrl;
# 256 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/pac.h" 1
# 44 "asf4/samd21/include/component/pac.h"
typedef union {
  struct {
    uint32_t :1;
    uint32_t WP:31;
  } bit;
  uint32_t reg;
} PAC_WPCLR_Type;
# 63 "asf4/samd21/include/component/pac.h"
typedef union {
  struct {
    uint32_t :1;
    uint32_t WP:31;
  } bit;
  uint32_t reg;
} PAC_WPSET_Type;
# 82 "asf4/samd21/include/component/pac.h"
typedef struct {
  volatile PAC_WPCLR_Type WPCLR;
  volatile PAC_WPSET_Type WPSET;
} Pac;
# 257 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/pm.h" 1
# 44 "asf4/samd21/include/component/pm.h"
typedef union {
  uint8_t reg;
} PM_CTRL_Type;
# 56 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t IDLE:2;
    uint8_t :6;
  } bit;
  uint8_t reg;
} PM_SLEEP_Type;
# 81 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t CPUDIV:3;
    uint8_t :5;
  } bit;
  uint8_t reg;
} PM_CPUSEL_Type;
# 116 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t APBADIV:3;
    uint8_t :5;
  } bit;
  uint8_t reg;
} PM_APBASEL_Type;
# 151 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t APBBDIV:3;
    uint8_t :5;
  } bit;
  uint8_t reg;
} PM_APBBSEL_Type;
# 186 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t APBCDIV:3;
    uint8_t :5;
  } bit;
  uint8_t reg;
} PM_APBCSEL_Type;
# 221 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint32_t HPB0_:1;
    uint32_t HPB1_:1;
    uint32_t HPB2_:1;
    uint32_t DSU_:1;
    uint32_t NVMCTRL_:1;
    uint32_t DMAC_:1;
    uint32_t USB_:1;
    uint32_t :25;
  } bit;
  uint32_t reg;
} PM_AHBMASK_Type;
# 257 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint32_t PAC0_:1;
    uint32_t PM_:1;
    uint32_t SYSCTRL_:1;
    uint32_t GCLK_:1;
    uint32_t WDT_:1;
    uint32_t RTC_:1;
    uint32_t EIC_:1;
    uint32_t :25;
  } bit;
  uint32_t reg;
} PM_APBAMASK_Type;
# 293 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint32_t PAC1_:1;
    uint32_t DSU_:1;
    uint32_t NVMCTRL_:1;
    uint32_t PORT_:1;
    uint32_t DMAC_:1;
    uint32_t USB_:1;
    uint32_t HMATRIX_:1;
    uint32_t :25;
  } bit;
  uint32_t reg;
} PM_APBBMASK_Type;
# 329 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint32_t PAC2_:1;
    uint32_t EVSYS_:1;
    uint32_t SERCOM0_:1;
    uint32_t SERCOM1_:1;
    uint32_t SERCOM2_:1;
    uint32_t SERCOM3_:1;
    uint32_t SERCOM4_:1;
    uint32_t SERCOM5_:1;
    uint32_t TCC0_:1;
    uint32_t TCC1_:1;
    uint32_t TCC2_:1;
    uint32_t TC3_:1;
    uint32_t TC4_:1;
    uint32_t TC5_:1;
    uint32_t TC6_:1;
    uint32_t TC7_:1;
    uint32_t ADC_:1;
    uint32_t AC_:1;
    uint32_t DAC_:1;
    uint32_t PTC_:1;
    uint32_t I2S_:1;
    uint32_t :11;
  } bit;
  uint32_t reg;
} PM_APBCMASK_Type;
# 407 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t CKRDY:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} PM_INTENCLR_Type;
# 425 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t CKRDY:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} PM_INTENSET_Type;
# 443 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    volatile const uint8_t CKRDY:1;
    volatile const uint8_t :7;
  } bit;
  uint8_t reg;
} PM_INTFLAG_Type;
# 461 "asf4/samd21/include/component/pm.h"
typedef union {
  struct {
    uint8_t POR:1;
    uint8_t BOD12:1;
    uint8_t BOD33:1;
    uint8_t :1;
    uint8_t EXT:1;
    uint8_t WDT:1;
    uint8_t SYST:1;
    uint8_t :1;
  } bit;
  uint8_t reg;
} PM_RCAUSE_Type;
# 495 "asf4/samd21/include/component/pm.h"
typedef struct {
  volatile PM_CTRL_Type CTRL;
  volatile PM_SLEEP_Type SLEEP;
       RoReg8 Reserved1[0x6];
  volatile PM_CPUSEL_Type CPUSEL;
  volatile PM_APBASEL_Type APBASEL;
  volatile PM_APBBSEL_Type APBBSEL;
  volatile PM_APBCSEL_Type APBCSEL;
       RoReg8 Reserved2[0x8];
  volatile PM_AHBMASK_Type AHBMASK;
  volatile PM_APBAMASK_Type APBAMASK;
  volatile PM_APBBMASK_Type APBBMASK;
  volatile PM_APBCMASK_Type APBCMASK;
       RoReg8 Reserved3[0x10];
  volatile PM_INTENCLR_Type INTENCLR;
  volatile PM_INTENSET_Type INTENSET;
  volatile PM_INTFLAG_Type INTFLAG;
       RoReg8 Reserved4[0x1];
  volatile const PM_RCAUSE_Type RCAUSE;
} Pm;
# 258 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/port.h" 1
# 44 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t DIR:32;
  } bit;
  uint32_t reg;
} PORT_DIR_Type;
# 62 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t DIRCLR:32;
  } bit;
  uint32_t reg;
} PORT_DIRCLR_Type;
# 80 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t DIRSET:32;
  } bit;
  uint32_t reg;
} PORT_DIRSET_Type;
# 98 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t DIRTGL:32;
  } bit;
  uint32_t reg;
} PORT_DIRTGL_Type;
# 116 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t OUT:32;
  } bit;
  uint32_t reg;
} PORT_OUT_Type;
# 134 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t OUTCLR:32;
  } bit;
  uint32_t reg;
} PORT_OUTCLR_Type;
# 152 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t OUTSET:32;
  } bit;
  uint32_t reg;
} PORT_OUTSET_Type;
# 170 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t OUTTGL:32;
  } bit;
  uint32_t reg;
} PORT_OUTTGL_Type;
# 188 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t IN:32;
  } bit;
  uint32_t reg;
} PORT_IN_Type;
# 206 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t SAMPLING:32;
  } bit;
  uint32_t reg;
} PORT_CTRL_Type;
# 224 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint32_t PINMASK:16;
    uint32_t PMUXEN:1;
    uint32_t INEN:1;
    uint32_t PULLEN:1;
    uint32_t :3;
    uint32_t DRVSTR:1;
    uint32_t :1;
    uint32_t PMUX:4;
    uint32_t WRPMUX:1;
    uint32_t :1;
    uint32_t WRPINCFG:1;
    uint32_t HWSEL:1;
  } bit;
  uint32_t reg;
} PORT_WRCONFIG_Type;
# 270 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint8_t PMUXE:4;
    uint8_t PMUXO:4;
  } bit;
  uint8_t reg;
} PORT_PMUX_Type;
# 324 "asf4/samd21/include/component/port.h"
typedef union {
  struct {
    uint8_t PMUXEN:1;
    uint8_t INEN:1;
    uint8_t PULLEN:1;
    uint8_t :3;
    uint8_t DRVSTR:1;
    uint8_t :1;
  } bit;
  uint8_t reg;
} PORT_PINCFG_Type;
# 352 "asf4/samd21/include/component/port.h"
typedef struct {
  volatile PORT_DIR_Type DIR;
  volatile PORT_DIRCLR_Type DIRCLR;
  volatile PORT_DIRSET_Type DIRSET;
  volatile PORT_DIRTGL_Type DIRTGL;
  volatile PORT_OUT_Type OUT;
  volatile PORT_OUTCLR_Type OUTCLR;
  volatile PORT_OUTSET_Type OUTSET;
  volatile PORT_OUTTGL_Type OUTTGL;
  volatile const PORT_IN_Type IN;
  volatile PORT_CTRL_Type CTRL;
  volatile PORT_WRCONFIG_Type WRCONFIG;
       RoReg8 Reserved1[0x4];
  volatile PORT_PMUX_Type PMUX[16];
  volatile PORT_PINCFG_Type PINCFG[32];
       RoReg8 Reserved2[0x20];
} PortGroup;




typedef struct {
       PortGroup Group[2];
} Port;
# 259 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/rtc.h" 1
# 44 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t SWRST:1;
    uint16_t ENABLE:1;
    uint16_t MODE:2;
    uint16_t :3;
    uint16_t MATCHCLR:1;
    uint16_t PRESCALER:4;
    uint16_t :4;
  } bit;
  uint16_t reg;
} RTC_MODE0_CTRL_Type;
# 105 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t SWRST:1;
    uint16_t ENABLE:1;
    uint16_t MODE:2;
    uint16_t :4;
    uint16_t PRESCALER:4;
    uint16_t :4;
  } bit;
  uint16_t reg;
} RTC_MODE1_CTRL_Type;
# 163 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t SWRST:1;
    uint16_t ENABLE:1;
    uint16_t MODE:2;
    uint16_t :2;
    uint16_t CLKREP:1;
    uint16_t MATCHCLR:1;
    uint16_t PRESCALER:4;
    uint16_t :4;
  } bit;
  uint16_t reg;
} RTC_MODE2_CTRL_Type;
# 227 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t ADDR:6;
    uint16_t :8;
    uint16_t RCONT:1;
    uint16_t RREQ:1;
  } bit;
  uint16_t reg;
} RTC_READREQ_Type;
# 252 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t PEREO0:1;
    uint16_t PEREO1:1;
    uint16_t PEREO2:1;
    uint16_t PEREO3:1;
    uint16_t PEREO4:1;
    uint16_t PEREO5:1;
    uint16_t PEREO6:1;
    uint16_t PEREO7:1;
    uint16_t CMPEO0:1;
    uint16_t :6;
    uint16_t OVFEO:1;
  } bit;
  struct {
    uint16_t PEREO:8;
    uint16_t CMPEO:1;
    uint16_t :7;
  } vec;
  uint16_t reg;
} RTC_MODE0_EVCTRL_Type;
# 308 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t PEREO0:1;
    uint16_t PEREO1:1;
    uint16_t PEREO2:1;
    uint16_t PEREO3:1;
    uint16_t PEREO4:1;
    uint16_t PEREO5:1;
    uint16_t PEREO6:1;
    uint16_t PEREO7:1;
    uint16_t CMPEO0:1;
    uint16_t CMPEO1:1;
    uint16_t :5;
    uint16_t OVFEO:1;
  } bit;
  struct {
    uint16_t PEREO:8;
    uint16_t CMPEO:2;
    uint16_t :6;
  } vec;
  uint16_t reg;
} RTC_MODE1_EVCTRL_Type;
# 367 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t PEREO0:1;
    uint16_t PEREO1:1;
    uint16_t PEREO2:1;
    uint16_t PEREO3:1;
    uint16_t PEREO4:1;
    uint16_t PEREO5:1;
    uint16_t PEREO6:1;
    uint16_t PEREO7:1;
    uint16_t ALARMEO0:1;
    uint16_t :6;
    uint16_t OVFEO:1;
  } bit;
  struct {
    uint16_t PEREO:8;
    uint16_t ALARMEO:1;
    uint16_t :7;
  } vec;
  uint16_t reg;
} RTC_MODE2_EVCTRL_Type;
# 423 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t CMP0:1;
    uint8_t :5;
    uint8_t SYNCRDY:1;
    uint8_t OVF:1;
  } bit;
  struct {
    uint8_t CMP:1;
    uint8_t :7;
  } vec;
  uint8_t reg;
} RTC_MODE0_INTENCLR_Type;
# 454 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t CMP0:1;
    uint8_t CMP1:1;
    uint8_t :4;
    uint8_t SYNCRDY:1;
    uint8_t OVF:1;
  } bit;
  struct {
    uint8_t CMP:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} RTC_MODE1_INTENCLR_Type;
# 488 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t ALARM0:1;
    uint8_t :5;
    uint8_t SYNCRDY:1;
    uint8_t OVF:1;
  } bit;
  struct {
    uint8_t ALARM:1;
    uint8_t :7;
  } vec;
  uint8_t reg;
} RTC_MODE2_INTENCLR_Type;
# 519 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t CMP0:1;
    uint8_t :5;
    uint8_t SYNCRDY:1;
    uint8_t OVF:1;
  } bit;
  struct {
    uint8_t CMP:1;
    uint8_t :7;
  } vec;
  uint8_t reg;
} RTC_MODE0_INTENSET_Type;
# 550 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t CMP0:1;
    uint8_t CMP1:1;
    uint8_t :4;
    uint8_t SYNCRDY:1;
    uint8_t OVF:1;
  } bit;
  struct {
    uint8_t CMP:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} RTC_MODE1_INTENSET_Type;
# 584 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t ALARM0:1;
    uint8_t :5;
    uint8_t SYNCRDY:1;
    uint8_t OVF:1;
  } bit;
  struct {
    uint8_t ALARM:1;
    uint8_t :7;
  } vec;
  uint8_t reg;
} RTC_MODE2_INTENSET_Type;
# 615 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    volatile const uint8_t CMP0:1;
    volatile const uint8_t :5;
    volatile const uint8_t SYNCRDY:1;
    volatile const uint8_t OVF:1;
  } bit;
  struct {
    volatile const uint8_t CMP:1;
    volatile const uint8_t :7;
  } vec;
  uint8_t reg;
} RTC_MODE0_INTFLAG_Type;
# 646 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    volatile const uint8_t CMP0:1;
    volatile const uint8_t CMP1:1;
    volatile const uint8_t :4;
    volatile const uint8_t SYNCRDY:1;
    volatile const uint8_t OVF:1;
  } bit;
  struct {
    volatile const uint8_t CMP:2;
    volatile const uint8_t :6;
  } vec;
  uint8_t reg;
} RTC_MODE1_INTFLAG_Type;
# 680 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    volatile const uint8_t ALARM0:1;
    volatile const uint8_t :5;
    volatile const uint8_t SYNCRDY:1;
    volatile const uint8_t OVF:1;
  } bit;
  struct {
    volatile const uint8_t ALARM:1;
    volatile const uint8_t :7;
  } vec;
  uint8_t reg;
} RTC_MODE2_INTFLAG_Type;
# 711 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t :7;
    uint8_t SYNCBUSY:1;
  } bit;
  uint8_t reg;
} RTC_STATUS_Type;
# 729 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t DBGRUN:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} RTC_DBGCTRL_Type;
# 747 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t VALUE:7;
    uint8_t SIGN:1;
  } bit;
  uint8_t reg;
} RTC_FREQCORR_Type;
# 768 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint32_t COUNT:32;
  } bit;
  uint32_t reg;
} RTC_MODE0_COUNT_Type;
# 786 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t COUNT:16;
  } bit;
  uint16_t reg;
} RTC_MODE1_COUNT_Type;
# 804 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint32_t SECOND:6;
    uint32_t MINUTE:6;
    uint32_t HOUR:5;
    uint32_t DAY:5;
    uint32_t MONTH:4;
    uint32_t YEAR:6;
  } bit;
  uint32_t reg;
} RTC_MODE2_CLOCK_Type;
# 846 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t PER:16;
  } bit;
  uint16_t reg;
} RTC_MODE1_PER_Type;
# 864 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint32_t COMP:32;
  } bit;
  uint32_t reg;
} RTC_MODE0_COMP_Type;
# 882 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint16_t COMP:16;
  } bit;
  uint16_t reg;
} RTC_MODE1_COMP_Type;
# 900 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint32_t SECOND:6;
    uint32_t MINUTE:6;
    uint32_t HOUR:5;
    uint32_t DAY:5;
    uint32_t MONTH:4;
    uint32_t YEAR:6;
  } bit;
  uint32_t reg;
} RTC_MODE2_ALARM_Type;
# 942 "asf4/samd21/include/component/rtc.h"
typedef union {
  struct {
    uint8_t SEL:3;
    uint8_t :5;
  } bit;
  uint8_t reg;
} RTC_MODE2_MASK_Type;
# 975 "asf4/samd21/include/component/rtc.h"
typedef struct {
  volatile RTC_MODE2_ALARM_Type ALARM;
  volatile RTC_MODE2_MASK_Type MASK;
       RoReg8 Reserved1[0x3];
} RtcMode2Alarm;




typedef struct {
  volatile RTC_MODE0_CTRL_Type CTRL;
  volatile RTC_READREQ_Type READREQ;
  volatile RTC_MODE0_EVCTRL_Type EVCTRL;
  volatile RTC_MODE0_INTENCLR_Type INTENCLR;
  volatile RTC_MODE0_INTENSET_Type INTENSET;
  volatile RTC_MODE0_INTFLAG_Type INTFLAG;
       RoReg8 Reserved1[0x1];
  volatile RTC_STATUS_Type STATUS;
  volatile RTC_DBGCTRL_Type DBGCTRL;
  volatile RTC_FREQCORR_Type FREQCORR;
       RoReg8 Reserved2[0x3];
  volatile RTC_MODE0_COUNT_Type COUNT;
       RoReg8 Reserved3[0x4];
  volatile RTC_MODE0_COMP_Type COMP[1];
} RtcMode0;




typedef struct {
  volatile RTC_MODE1_CTRL_Type CTRL;
  volatile RTC_READREQ_Type READREQ;
  volatile RTC_MODE1_EVCTRL_Type EVCTRL;
  volatile RTC_MODE1_INTENCLR_Type INTENCLR;
  volatile RTC_MODE1_INTENSET_Type INTENSET;
  volatile RTC_MODE1_INTFLAG_Type INTFLAG;
       RoReg8 Reserved1[0x1];
  volatile RTC_STATUS_Type STATUS;
  volatile RTC_DBGCTRL_Type DBGCTRL;
  volatile RTC_FREQCORR_Type FREQCORR;
       RoReg8 Reserved2[0x3];
  volatile RTC_MODE1_COUNT_Type COUNT;
       RoReg8 Reserved3[0x2];
  volatile RTC_MODE1_PER_Type PER;
       RoReg8 Reserved4[0x2];
  volatile RTC_MODE1_COMP_Type COMP[2];
} RtcMode1;




typedef struct {
  volatile RTC_MODE2_CTRL_Type CTRL;
  volatile RTC_READREQ_Type READREQ;
  volatile RTC_MODE2_EVCTRL_Type EVCTRL;
  volatile RTC_MODE2_INTENCLR_Type INTENCLR;
  volatile RTC_MODE2_INTENSET_Type INTENSET;
  volatile RTC_MODE2_INTFLAG_Type INTFLAG;
       RoReg8 Reserved1[0x1];
  volatile RTC_STATUS_Type STATUS;
  volatile RTC_DBGCTRL_Type DBGCTRL;
  volatile RTC_FREQCORR_Type FREQCORR;
       RoReg8 Reserved2[0x3];
  volatile RTC_MODE2_CLOCK_Type CLOCK;
       RoReg8 Reserved3[0x4];
       RtcMode2Alarm Mode2Alarm[1];
} RtcMode2;



typedef union {
       RtcMode0 MODE0;
       RtcMode1 MODE1;
       RtcMode2 MODE2;
} Rtc;
# 260 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/sercom.h" 1
# 44 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t MODE:3;
    uint32_t :2;
    uint32_t RUNSTDBY:1;
    uint32_t :8;
    uint32_t PINOUT:1;
    uint32_t :3;
    uint32_t SDAHOLD:2;
    uint32_t MEXTTOEN:1;
    uint32_t SEXTTOEN:1;
    uint32_t SPEED:2;
    uint32_t :1;
    uint32_t SCLSM:1;
    uint32_t INACTOUT:2;
    uint32_t LOWTOUTEN:1;
    uint32_t :1;
  } bit;
  uint32_t reg;
} SERCOM_I2CM_CTRLA_Type;
# 115 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t MODE:3;
    uint32_t :2;
    uint32_t RUNSTDBY:1;
    uint32_t :8;
    uint32_t PINOUT:1;
    uint32_t :3;
    uint32_t SDAHOLD:2;
    uint32_t :1;
    uint32_t SEXTTOEN:1;
    uint32_t SPEED:2;
    uint32_t :1;
    uint32_t SCLSM:1;
    uint32_t :2;
    uint32_t LOWTOUTEN:1;
    uint32_t :1;
  } bit;
  uint32_t reg;
} SERCOM_I2CS_CTRLA_Type;
# 181 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t MODE:3;
    uint32_t :2;
    uint32_t RUNSTDBY:1;
    uint32_t IBON:1;
    uint32_t :7;
    uint32_t DOPO:2;
    uint32_t :2;
    uint32_t DIPO:2;
    uint32_t :2;
    uint32_t FORM:4;
    uint32_t CPHA:1;
    uint32_t CPOL:1;
    uint32_t DORD:1;
    uint32_t :1;
  } bit;
  uint32_t reg;
} SERCOM_SPI_CTRLA_Type;
# 249 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t MODE:3;
    uint32_t :2;
    uint32_t RUNSTDBY:1;
    uint32_t IBON:1;
    uint32_t :4;
    uint32_t SAMPR:3;
    uint32_t TXPO:2;
    uint32_t :2;
    uint32_t RXPO:2;
    uint32_t SAMPA:2;
    uint32_t FORM:4;
    uint32_t CMODE:1;
    uint32_t CPOL:1;
    uint32_t DORD:1;
    uint32_t :1;
  } bit;
  uint32_t reg;
} SERCOM_USART_CTRLA_Type;
# 324 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t :8;
    uint32_t SMEN:1;
    uint32_t QCEN:1;
    uint32_t :6;
    uint32_t CMD:2;
    uint32_t ACKACT:1;
    uint32_t :13;
  } bit;
  uint32_t reg;
} SERCOM_I2CM_CTRLB_Type;
# 354 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t :8;
    uint32_t SMEN:1;
    uint32_t GCMD:1;
    uint32_t AACKEN:1;
    uint32_t :3;
    uint32_t AMODE:2;
    uint32_t CMD:2;
    uint32_t ACKACT:1;
    uint32_t :13;
  } bit;
  uint32_t reg;
} SERCOM_I2CS_CTRLB_Type;
# 391 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t CHSIZE:3;
    uint32_t :3;
    uint32_t PLOADEN:1;
    uint32_t :2;
    uint32_t SSDE:1;
    uint32_t :3;
    uint32_t MSSEN:1;
    uint32_t AMODE:2;
    uint32_t :1;
    uint32_t RXEN:1;
    uint32_t :14;
  } bit;
  uint32_t reg;
} SERCOM_SPI_CTRLB_Type;
# 430 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t CHSIZE:3;
    uint32_t :3;
    uint32_t SBMODE:1;
    uint32_t :1;
    uint32_t COLDEN:1;
    uint32_t SFDE:1;
    uint32_t ENC:1;
    uint32_t :2;
    uint32_t PMODE:1;
    uint32_t :2;
    uint32_t TXEN:1;
    uint32_t RXEN:1;
    uint32_t :14;
  } bit;
  uint32_t reg;
} SERCOM_USART_CTRLB_Type;
# 474 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t BAUD:8;
    uint32_t BAUDLOW:8;
    uint32_t HSBAUD:8;
    uint32_t HSBAUDLOW:8;
  } bit;
  uint32_t reg;
} SERCOM_I2CM_BAUD_Type;
# 504 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t BAUD:8;
  } bit;
  uint8_t reg;
} SERCOM_SPI_BAUD_Type;
# 522 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint16_t BAUD:16;
  } bit;
  struct {
    uint16_t BAUD:13;
    uint16_t FP:3;
  } FRAC;
  struct {
    uint16_t BAUD:13;
    uint16_t FP:3;
  } FRACFP;
  struct {
    uint16_t BAUD:16;
  } USARTFP;
  uint16_t reg;
} SERCOM_USART_BAUD_Type;
# 575 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t RXPL:8;
  } bit;
  uint8_t reg;
} SERCOM_USART_RXPL_Type;
# 593 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t MB:1;
    uint8_t SB:1;
    uint8_t :5;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_I2CM_INTENCLR_Type;
# 617 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t PREC:1;
    uint8_t AMATCH:1;
    uint8_t DRDY:1;
    uint8_t :4;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_I2CS_INTENCLR_Type;
# 644 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DRE:1;
    uint8_t TXC:1;
    uint8_t RXC:1;
    uint8_t SSL:1;
    uint8_t :3;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_SPI_INTENCLR_Type;
# 674 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DRE:1;
    uint8_t TXC:1;
    uint8_t RXC:1;
    uint8_t RXS:1;
    uint8_t CTSIC:1;
    uint8_t RXBRK:1;
    uint8_t :1;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_USART_INTENCLR_Type;
# 710 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t MB:1;
    uint8_t SB:1;
    uint8_t :5;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_I2CM_INTENSET_Type;
# 734 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t PREC:1;
    uint8_t AMATCH:1;
    uint8_t DRDY:1;
    uint8_t :4;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_I2CS_INTENSET_Type;
# 761 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DRE:1;
    uint8_t TXC:1;
    uint8_t RXC:1;
    uint8_t SSL:1;
    uint8_t :3;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_SPI_INTENSET_Type;
# 791 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DRE:1;
    uint8_t TXC:1;
    uint8_t RXC:1;
    uint8_t RXS:1;
    uint8_t CTSIC:1;
    uint8_t RXBRK:1;
    uint8_t :1;
    uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_USART_INTENSET_Type;
# 827 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    volatile const uint8_t MB:1;
    volatile const uint8_t SB:1;
    volatile const uint8_t :5;
    volatile const uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_I2CM_INTFLAG_Type;
# 851 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    volatile const uint8_t PREC:1;
    volatile const uint8_t AMATCH:1;
    volatile const uint8_t DRDY:1;
    volatile const uint8_t :4;
    volatile const uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_I2CS_INTFLAG_Type;
# 878 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    volatile const uint8_t DRE:1;
    volatile const uint8_t TXC:1;
    volatile const uint8_t RXC:1;
    volatile const uint8_t SSL:1;
    volatile const uint8_t :3;
    volatile const uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_SPI_INTFLAG_Type;
# 908 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    volatile const uint8_t DRE:1;
    volatile const uint8_t TXC:1;
    volatile const uint8_t RXC:1;
    volatile const uint8_t RXS:1;
    volatile const uint8_t CTSIC:1;
    volatile const uint8_t RXBRK:1;
    volatile const uint8_t :1;
    volatile const uint8_t ERROR:1;
  } bit;
  uint8_t reg;
} SERCOM_USART_INTFLAG_Type;
# 944 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint16_t BUSERR:1;
    uint16_t ARBLOST:1;
    uint16_t RXNACK:1;
    uint16_t :1;
    uint16_t BUSSTATE:2;
    uint16_t LOWTOUT:1;
    uint16_t CLKHOLD:1;
    uint16_t MEXTTOUT:1;
    uint16_t SEXTTOUT:1;
    uint16_t LENERR:1;
    uint16_t :5;
  } bit;
  uint16_t reg;
} SERCOM_I2CM_STATUS_Type;
# 988 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint16_t BUSERR:1;
    uint16_t COLL:1;
    uint16_t RXNACK:1;
    uint16_t DIR:1;
    uint16_t SR:1;
    uint16_t :1;
    uint16_t LOWTOUT:1;
    uint16_t CLKHOLD:1;
    uint16_t :1;
    uint16_t SEXTTOUT:1;
    uint16_t HS:1;
    uint16_t :5;
  } bit;
  uint16_t reg;
} SERCOM_I2CS_STATUS_Type;
# 1032 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint16_t :2;
    uint16_t BUFOVF:1;
    uint16_t :13;
  } bit;
  uint16_t reg;
} SERCOM_SPI_STATUS_Type;
# 1051 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint16_t PERR:1;
    uint16_t FERR:1;
    uint16_t BUFOVF:1;
    uint16_t CTS:1;
    uint16_t ISF:1;
    uint16_t COLL:1;
    uint16_t :10;
  } bit;
  uint16_t reg;
} SERCOM_USART_STATUS_Type;
# 1084 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t SYSOP:1;
    uint32_t :29;
  } bit;
  uint32_t reg;
} SERCOM_I2CM_SYNCBUSY_Type;
# 1108 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t :30;
  } bit;
  uint32_t reg;
} SERCOM_I2CS_SYNCBUSY_Type;
# 1129 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t CTRLB:1;
    uint32_t :29;
  } bit;
  uint32_t reg;
} SERCOM_SPI_SYNCBUSY_Type;
# 1153 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t CTRLB:1;
    uint32_t :29;
  } bit;
  uint32_t reg;
} SERCOM_USART_SYNCBUSY_Type;
# 1177 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t ADDR:11;
    uint32_t :2;
    uint32_t LENEN:1;
    uint32_t HS:1;
    uint32_t TENBITEN:1;
    uint32_t LEN:8;
    uint32_t :8;
  } bit;
  uint32_t reg;
} SERCOM_I2CM_ADDR_Type;
# 1210 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t GENCEN:1;
    uint32_t ADDR:10;
    uint32_t :4;
    uint32_t TENBITEN:1;
    uint32_t :1;
    uint32_t ADDRMASK:10;
    uint32_t :5;
  } bit;
  uint32_t reg;
} SERCOM_I2CS_ADDR_Type;
# 1241 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t ADDR:8;
    uint32_t :8;
    uint32_t ADDRMASK:8;
    uint32_t :8;
  } bit;
  uint32_t reg;
} SERCOM_SPI_ADDR_Type;
# 1265 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DATA:8;
  } bit;
  uint8_t reg;
} SERCOM_I2CM_DATA_Type;
# 1283 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DATA:8;
  } bit;
  uint8_t reg;
} SERCOM_I2CS_DATA_Type;
# 1301 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint32_t DATA:9;
    uint32_t :23;
  } bit;
  uint32_t reg;
} SERCOM_SPI_DATA_Type;
# 1320 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint16_t DATA:9;
    uint16_t :7;
  } bit;
  uint16_t reg;
} SERCOM_USART_DATA_Type;
# 1339 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DBGSTOP:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} SERCOM_I2CM_DBGCTRL_Type;
# 1357 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DBGSTOP:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} SERCOM_SPI_DBGCTRL_Type;
# 1375 "asf4/samd21/include/component/sercom.h"
typedef union {
  struct {
    uint8_t DBGSTOP:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} SERCOM_USART_DBGCTRL_Type;
# 1393 "asf4/samd21/include/component/sercom.h"
typedef struct {
  volatile SERCOM_I2CM_CTRLA_Type CTRLA;
  volatile SERCOM_I2CM_CTRLB_Type CTRLB;
       RoReg8 Reserved1[0x4];
  volatile SERCOM_I2CM_BAUD_Type BAUD;
       RoReg8 Reserved2[0x4];
  volatile SERCOM_I2CM_INTENCLR_Type INTENCLR;
       RoReg8 Reserved3[0x1];
  volatile SERCOM_I2CM_INTENSET_Type INTENSET;
       RoReg8 Reserved4[0x1];
  volatile SERCOM_I2CM_INTFLAG_Type INTFLAG;
       RoReg8 Reserved5[0x1];
  volatile SERCOM_I2CM_STATUS_Type STATUS;
  volatile const SERCOM_I2CM_SYNCBUSY_Type SYNCBUSY;
       RoReg8 Reserved6[0x4];
  volatile SERCOM_I2CM_ADDR_Type ADDR;
  volatile SERCOM_I2CM_DATA_Type DATA;
       RoReg8 Reserved7[0x7];
  volatile SERCOM_I2CM_DBGCTRL_Type DBGCTRL;
} SercomI2cm;




typedef struct {
  volatile SERCOM_I2CS_CTRLA_Type CTRLA;
  volatile SERCOM_I2CS_CTRLB_Type CTRLB;
       RoReg8 Reserved1[0xC];
  volatile SERCOM_I2CS_INTENCLR_Type INTENCLR;
       RoReg8 Reserved2[0x1];
  volatile SERCOM_I2CS_INTENSET_Type INTENSET;
       RoReg8 Reserved3[0x1];
  volatile SERCOM_I2CS_INTFLAG_Type INTFLAG;
       RoReg8 Reserved4[0x1];
  volatile SERCOM_I2CS_STATUS_Type STATUS;
  volatile const SERCOM_I2CS_SYNCBUSY_Type SYNCBUSY;
       RoReg8 Reserved5[0x4];
  volatile SERCOM_I2CS_ADDR_Type ADDR;
  volatile SERCOM_I2CS_DATA_Type DATA;
} SercomI2cs;




typedef struct {
  volatile SERCOM_SPI_CTRLA_Type CTRLA;
  volatile SERCOM_SPI_CTRLB_Type CTRLB;
       RoReg8 Reserved1[0x4];
  volatile SERCOM_SPI_BAUD_Type BAUD;
       RoReg8 Reserved2[0x7];
  volatile SERCOM_SPI_INTENCLR_Type INTENCLR;
       RoReg8 Reserved3[0x1];
  volatile SERCOM_SPI_INTENSET_Type INTENSET;
       RoReg8 Reserved4[0x1];
  volatile SERCOM_SPI_INTFLAG_Type INTFLAG;
       RoReg8 Reserved5[0x1];
  volatile SERCOM_SPI_STATUS_Type STATUS;
  volatile const SERCOM_SPI_SYNCBUSY_Type SYNCBUSY;
       RoReg8 Reserved6[0x4];
  volatile SERCOM_SPI_ADDR_Type ADDR;
  volatile SERCOM_SPI_DATA_Type DATA;
       RoReg8 Reserved7[0x4];
  volatile SERCOM_SPI_DBGCTRL_Type DBGCTRL;
} SercomSpi;




typedef struct {
  volatile SERCOM_USART_CTRLA_Type CTRLA;
  volatile SERCOM_USART_CTRLB_Type CTRLB;
       RoReg8 Reserved1[0x4];
  volatile SERCOM_USART_BAUD_Type BAUD;
  volatile SERCOM_USART_RXPL_Type RXPL;
       RoReg8 Reserved2[0x5];
  volatile SERCOM_USART_INTENCLR_Type INTENCLR;
       RoReg8 Reserved3[0x1];
  volatile SERCOM_USART_INTENSET_Type INTENSET;
       RoReg8 Reserved4[0x1];
  volatile SERCOM_USART_INTFLAG_Type INTFLAG;
       RoReg8 Reserved5[0x1];
  volatile SERCOM_USART_STATUS_Type STATUS;
  volatile const SERCOM_USART_SYNCBUSY_Type SYNCBUSY;
       RoReg8 Reserved6[0x8];
  volatile SERCOM_USART_DATA_Type DATA;
       RoReg8 Reserved7[0x6];
  volatile SERCOM_USART_DBGCTRL_Type DBGCTRL;
} SercomUsart;



typedef union {
       SercomI2cm I2CM;
       SercomI2cs I2CS;
       SercomSpi SPI;
       SercomUsart USART;
} Sercom;
# 261 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/sysctrl.h" 1
# 44 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t XOSCRDY:1;
    uint32_t XOSC32KRDY:1;
    uint32_t OSC32KRDY:1;
    uint32_t OSC8MRDY:1;
    uint32_t DFLLRDY:1;
    uint32_t DFLLOOB:1;
    uint32_t DFLLLCKF:1;
    uint32_t DFLLLCKC:1;
    uint32_t DFLLRCS:1;
    uint32_t BOD33RDY:1;
    uint32_t BOD33DET:1;
    uint32_t B33SRDY:1;
    uint32_t :3;
    uint32_t DPLLLCKR:1;
    uint32_t DPLLLCKF:1;
    uint32_t DPLLLTO:1;
    uint32_t :14;
  } bit;
  uint32_t reg;
} SYSCTRL_INTENCLR_Type;
# 105 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t XOSCRDY:1;
    uint32_t XOSC32KRDY:1;
    uint32_t OSC32KRDY:1;
    uint32_t OSC8MRDY:1;
    uint32_t DFLLRDY:1;
    uint32_t DFLLOOB:1;
    uint32_t DFLLLCKF:1;
    uint32_t DFLLLCKC:1;
    uint32_t DFLLRCS:1;
    uint32_t BOD33RDY:1;
    uint32_t BOD33DET:1;
    uint32_t B33SRDY:1;
    uint32_t :3;
    uint32_t DPLLLCKR:1;
    uint32_t DPLLLCKF:1;
    uint32_t DPLLLTO:1;
    uint32_t :14;
  } bit;
  uint32_t reg;
} SYSCTRL_INTENSET_Type;
# 166 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    volatile const uint32_t XOSCRDY:1;
    volatile const uint32_t XOSC32KRDY:1;
    volatile const uint32_t OSC32KRDY:1;
    volatile const uint32_t OSC8MRDY:1;
    volatile const uint32_t DFLLRDY:1;
    volatile const uint32_t DFLLOOB:1;
    volatile const uint32_t DFLLLCKF:1;
    volatile const uint32_t DFLLLCKC:1;
    volatile const uint32_t DFLLRCS:1;
    volatile const uint32_t BOD33RDY:1;
    volatile const uint32_t BOD33DET:1;
    volatile const uint32_t B33SRDY:1;
    volatile const uint32_t :3;
    volatile const uint32_t DPLLLCKR:1;
    volatile const uint32_t DPLLLCKF:1;
    volatile const uint32_t DPLLLTO:1;
    volatile const uint32_t :14;
  } bit;
  uint32_t reg;
} SYSCTRL_INTFLAG_Type;
# 227 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t XOSCRDY:1;
    uint32_t XOSC32KRDY:1;
    uint32_t OSC32KRDY:1;
    uint32_t OSC8MRDY:1;
    uint32_t DFLLRDY:1;
    uint32_t DFLLOOB:1;
    uint32_t DFLLLCKF:1;
    uint32_t DFLLLCKC:1;
    uint32_t DFLLRCS:1;
    uint32_t BOD33RDY:1;
    uint32_t BOD33DET:1;
    uint32_t B33SRDY:1;
    uint32_t :3;
    uint32_t DPLLLCKR:1;
    uint32_t DPLLLCKF:1;
    uint32_t DPLLLTO:1;
    uint32_t :14;
  } bit;
  uint32_t reg;
} SYSCTRL_PCLKSR_Type;
# 288 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint16_t :1;
    uint16_t ENABLE:1;
    uint16_t XTALEN:1;
    uint16_t :3;
    uint16_t RUNSTDBY:1;
    uint16_t ONDEMAND:1;
    uint16_t GAIN:3;
    uint16_t AMPGC:1;
    uint16_t STARTUP:4;
  } bit;
  uint16_t reg;
} SYSCTRL_XOSC_Type;
# 337 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint16_t :1;
    uint16_t ENABLE:1;
    uint16_t XTALEN:1;
    uint16_t EN32K:1;
    uint16_t EN1K:1;
    uint16_t AAMPEN:1;
    uint16_t RUNSTDBY:1;
    uint16_t ONDEMAND:1;
    uint16_t STARTUP:3;
    uint16_t :1;
    uint16_t WRTLOCK:1;
    uint16_t :3;
  } bit;
  uint16_t reg;
} SYSCTRL_XOSC32K_Type;
# 382 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t :1;
    uint32_t ENABLE:1;
    uint32_t EN32K:1;
    uint32_t EN1K:1;
    uint32_t :2;
    uint32_t RUNSTDBY:1;
    uint32_t ONDEMAND:1;
    uint32_t STARTUP:3;
    uint32_t :1;
    uint32_t WRTLOCK:1;
    uint32_t :3;
    uint32_t CALIB:7;
    uint32_t :9;
  } bit;
  uint32_t reg;
} SYSCTRL_OSC32K_Type;
# 427 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint8_t CALIB:5;
    uint8_t :2;
    uint8_t WRTLOCK:1;
  } bit;
  uint8_t reg;
} SYSCTRL_OSCULP32K_Type;
# 449 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t :1;
    uint32_t ENABLE:1;
    uint32_t :4;
    uint32_t RUNSTDBY:1;
    uint32_t ONDEMAND:1;
    uint32_t PRESC:2;
    uint32_t :6;
    uint32_t CALIB:12;
    uint32_t :2;
    uint32_t FRANGE:2;
  } bit;
  uint32_t reg;
} SYSCTRL_OSC8M_Type;
# 504 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint16_t :1;
    uint16_t ENABLE:1;
    uint16_t MODE:1;
    uint16_t STABLE:1;
    uint16_t LLAW:1;
    uint16_t USBCRM:1;
    uint16_t RUNSTDBY:1;
    uint16_t ONDEMAND:1;
    uint16_t CCDIS:1;
    uint16_t QLDIS:1;
    uint16_t BPLCKC:1;
    uint16_t WAITLOCK:1;
    uint16_t :4;
  } bit;
  uint16_t reg;
} SYSCTRL_DFLLCTRL_Type;
# 553 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t FINE:10;
    uint32_t COARSE:6;
    uint32_t DIFF:16;
  } bit;
  uint32_t reg;
} SYSCTRL_DFLLVAL_Type;
# 579 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t MUL:16;
    uint32_t FSTEP:10;
    uint32_t CSTEP:6;
  } bit;
  uint32_t reg;
} SYSCTRL_DFLLMUL_Type;
# 605 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint8_t :7;
    uint8_t READREQ:1;
  } bit;
  uint8_t reg;
} SYSCTRL_DFLLSYNC_Type;
# 623 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t :1;
    uint32_t ENABLE:1;
    uint32_t HYST:1;
    uint32_t ACTION:2;
    uint32_t :1;
    uint32_t RUNSTDBY:1;
    uint32_t :1;
    uint32_t MODE:1;
    uint32_t CEN:1;
    uint32_t :2;
    uint32_t PSEL:4;
    uint32_t LEVEL:6;
    uint32_t :10;
  } bit;
  uint32_t reg;
} SYSCTRL_BOD33_Type;
# 707 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint16_t :6;
    uint16_t RUNSTDBY:1;
    uint16_t :6;
    uint16_t FORCELDO:1;
    uint16_t :2;
  } bit;
  uint16_t reg;
} SYSCTRL_VREG_Type;
# 730 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t :1;
    uint32_t TSEN:1;
    uint32_t BGOUTEN:1;
    uint32_t :13;
    uint32_t CALIB:11;
    uint32_t :5;
  } bit;
  uint32_t reg;
} SYSCTRL_VREF_Type;
# 757 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint8_t :1;
    uint8_t ENABLE:1;
    uint8_t :4;
    uint8_t RUNSTDBY:1;
    uint8_t ONDEMAND:1;
  } bit;
  uint8_t reg;
} SYSCTRL_DPLLCTRLA_Type;
# 782 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t LDR:12;
    uint32_t :4;
    uint32_t LDRFRAC:4;
    uint32_t :12;
  } bit;
  uint32_t reg;
} SYSCTRL_DPLLRATIO_Type;
# 806 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint32_t FILTER:2;
    uint32_t LPEN:1;
    uint32_t WUF:1;
    uint32_t REFCLK:2;
    uint32_t :2;
    uint32_t LTIME:3;
    uint32_t :1;
    uint32_t LBYPASS:1;
    uint32_t :3;
    uint32_t DIV:11;
    uint32_t :5;
  } bit;
  uint32_t reg;
} SYSCTRL_DPLLCTRLB_Type;
# 873 "asf4/samd21/include/component/sysctrl.h"
typedef union {
  struct {
    uint8_t LOCK:1;
    uint8_t CLKRDY:1;
    uint8_t ENABLE:1;
    uint8_t DIV:1;
    uint8_t :4;
  } bit;
  uint8_t reg;
} SYSCTRL_DPLLSTATUS_Type;
# 900 "asf4/samd21/include/component/sysctrl.h"
typedef struct {
  volatile SYSCTRL_INTENCLR_Type INTENCLR;
  volatile SYSCTRL_INTENSET_Type INTENSET;
  volatile SYSCTRL_INTFLAG_Type INTFLAG;
  volatile const SYSCTRL_PCLKSR_Type PCLKSR;
  volatile SYSCTRL_XOSC_Type XOSC;
       RoReg8 Reserved1[0x2];
  volatile SYSCTRL_XOSC32K_Type XOSC32K;
       RoReg8 Reserved2[0x2];
  volatile SYSCTRL_OSC32K_Type OSC32K;
  volatile SYSCTRL_OSCULP32K_Type OSCULP32K;
       RoReg8 Reserved3[0x3];
  volatile SYSCTRL_OSC8M_Type OSC8M;
  volatile SYSCTRL_DFLLCTRL_Type DFLLCTRL;
       RoReg8 Reserved4[0x2];
  volatile SYSCTRL_DFLLVAL_Type DFLLVAL;
  volatile SYSCTRL_DFLLMUL_Type DFLLMUL;
  volatile SYSCTRL_DFLLSYNC_Type DFLLSYNC;
       RoReg8 Reserved5[0x3];
  volatile SYSCTRL_BOD33_Type BOD33;
       RoReg8 Reserved6[0x4];
  volatile SYSCTRL_VREG_Type VREG;
       RoReg8 Reserved7[0x2];
  volatile SYSCTRL_VREF_Type VREF;
  volatile SYSCTRL_DPLLCTRLA_Type DPLLCTRLA;
       RoReg8 Reserved8[0x3];
  volatile SYSCTRL_DPLLRATIO_Type DPLLRATIO;
  volatile SYSCTRL_DPLLCTRLB_Type DPLLCTRLB;
  volatile const SYSCTRL_DPLLSTATUS_Type DPLLSTATUS;
} Sysctrl;
# 262 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/tc.h" 1
# 44 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint16_t SWRST:1;
    uint16_t ENABLE:1;
    uint16_t MODE:2;
    uint16_t :1;
    uint16_t WAVEGEN:2;
    uint16_t :1;
    uint16_t PRESCALER:3;
    uint16_t RUNSTDBY:1;
    uint16_t PRESCSYNC:2;
    uint16_t :2;
  } bit;
  uint16_t reg;
} TC_CTRLA_Type;
# 122 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint16_t ADDR:5;
    uint16_t :9;
    uint16_t RCONT:1;
    uint16_t RREQ:1;
  } bit;
  uint16_t reg;
} TC_READREQ_Type;
# 147 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t DIR:1;
    uint8_t :1;
    uint8_t ONESHOT:1;
    uint8_t :3;
    uint8_t CMD:2;
  } bit;
  uint8_t reg;
} TC_CTRLBCLR_Type;
# 179 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t DIR:1;
    uint8_t :1;
    uint8_t ONESHOT:1;
    uint8_t :3;
    uint8_t CMD:2;
  } bit;
  uint8_t reg;
} TC_CTRLBSET_Type;
# 211 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t INVEN0:1;
    uint8_t INVEN1:1;
    uint8_t :2;
    uint8_t CPTEN0:1;
    uint8_t CPTEN1:1;
    uint8_t :2;
  } bit;
  struct {
    uint8_t INVEN:2;
    uint8_t :2;
    uint8_t CPTEN:2;
    uint8_t :2;
  } vec;
  uint8_t reg;
} TC_CTRLC_Type;
# 251 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t DBGRUN:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} TC_DBGCTRL_Type;
# 269 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint16_t EVACT:3;
    uint16_t :1;
    uint16_t TCINV:1;
    uint16_t TCEI:1;
    uint16_t :2;
    uint16_t OVFEO:1;
    uint16_t :3;
    uint16_t MCEO0:1;
    uint16_t MCEO1:1;
    uint16_t :2;
  } bit;
  struct {
    uint16_t :12;
    uint16_t MCEO:2;
    uint16_t :2;
  } vec;
  uint16_t reg;
} TC_EVCTRL_Type;
# 326 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t OVF:1;
    uint8_t ERR:1;
    uint8_t :1;
    uint8_t SYNCRDY:1;
    uint8_t MC0:1;
    uint8_t MC1:1;
    uint8_t :2;
  } bit;
  struct {
    uint8_t :4;
    uint8_t MC:2;
    uint8_t :2;
  } vec;
  uint8_t reg;
} TC_INTENCLR_Type;
# 365 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t OVF:1;
    uint8_t ERR:1;
    uint8_t :1;
    uint8_t SYNCRDY:1;
    uint8_t MC0:1;
    uint8_t MC1:1;
    uint8_t :2;
  } bit;
  struct {
    uint8_t :4;
    uint8_t MC:2;
    uint8_t :2;
  } vec;
  uint8_t reg;
} TC_INTENSET_Type;
# 404 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    volatile const uint8_t OVF:1;
    volatile const uint8_t ERR:1;
    volatile const uint8_t :1;
    volatile const uint8_t SYNCRDY:1;
    volatile const uint8_t MC0:1;
    volatile const uint8_t MC1:1;
    volatile const uint8_t :2;
  } bit;
  struct {
    volatile const uint8_t :4;
    volatile const uint8_t MC:2;
    volatile const uint8_t :2;
  } vec;
  uint8_t reg;
} TC_INTFLAG_Type;
# 443 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t :3;
    uint8_t STOP:1;
    uint8_t SLAVE:1;
    uint8_t :2;
    uint8_t SYNCBUSY:1;
  } bit;
  uint8_t reg;
} TC_STATUS_Type;
# 468 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint16_t COUNT:16;
  } bit;
  uint16_t reg;
} TC_COUNT16_COUNT_Type;
# 486 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint32_t COUNT:32;
  } bit;
  uint32_t reg;
} TC_COUNT32_COUNT_Type;
# 504 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t COUNT:8;
  } bit;
  uint8_t reg;
} TC_COUNT8_COUNT_Type;
# 522 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t PER:8;
  } bit;
  uint8_t reg;
} TC_COUNT8_PER_Type;
# 540 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint16_t CC:16;
  } bit;
  uint16_t reg;
} TC_COUNT16_CC_Type;
# 558 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint32_t CC:32;
  } bit;
  uint32_t reg;
} TC_COUNT32_CC_Type;
# 576 "asf4/samd21/include/component/tc.h"
typedef union {
  struct {
    uint8_t CC:8;
  } bit;
  uint8_t reg;
} TC_COUNT8_CC_Type;
# 594 "asf4/samd21/include/component/tc.h"
typedef struct {
  volatile TC_CTRLA_Type CTRLA;
  volatile TC_READREQ_Type READREQ;
  volatile TC_CTRLBCLR_Type CTRLBCLR;
  volatile TC_CTRLBSET_Type CTRLBSET;
  volatile TC_CTRLC_Type CTRLC;
       RoReg8 Reserved1[0x1];
  volatile TC_DBGCTRL_Type DBGCTRL;
       RoReg8 Reserved2[0x1];
  volatile TC_EVCTRL_Type EVCTRL;
  volatile TC_INTENCLR_Type INTENCLR;
  volatile TC_INTENSET_Type INTENSET;
  volatile TC_INTFLAG_Type INTFLAG;
  volatile const TC_STATUS_Type STATUS;
  volatile TC_COUNT8_COUNT_Type COUNT;
       RoReg8 Reserved3[0x3];
  volatile TC_COUNT8_PER_Type PER;
       RoReg8 Reserved4[0x3];
  volatile TC_COUNT8_CC_Type CC[2];
} TcCount8;




typedef struct {
  volatile TC_CTRLA_Type CTRLA;
  volatile TC_READREQ_Type READREQ;
  volatile TC_CTRLBCLR_Type CTRLBCLR;
  volatile TC_CTRLBSET_Type CTRLBSET;
  volatile TC_CTRLC_Type CTRLC;
       RoReg8 Reserved1[0x1];
  volatile TC_DBGCTRL_Type DBGCTRL;
       RoReg8 Reserved2[0x1];
  volatile TC_EVCTRL_Type EVCTRL;
  volatile TC_INTENCLR_Type INTENCLR;
  volatile TC_INTENSET_Type INTENSET;
  volatile TC_INTFLAG_Type INTFLAG;
  volatile const TC_STATUS_Type STATUS;
  volatile TC_COUNT16_COUNT_Type COUNT;
       RoReg8 Reserved3[0x6];
  volatile TC_COUNT16_CC_Type CC[2];
} TcCount16;




typedef struct {
  volatile TC_CTRLA_Type CTRLA;
  volatile TC_READREQ_Type READREQ;
  volatile TC_CTRLBCLR_Type CTRLBCLR;
  volatile TC_CTRLBSET_Type CTRLBSET;
  volatile TC_CTRLC_Type CTRLC;
       RoReg8 Reserved1[0x1];
  volatile TC_DBGCTRL_Type DBGCTRL;
       RoReg8 Reserved2[0x1];
  volatile TC_EVCTRL_Type EVCTRL;
  volatile TC_INTENCLR_Type INTENCLR;
  volatile TC_INTENSET_Type INTENSET;
  volatile TC_INTFLAG_Type INTFLAG;
  volatile const TC_STATUS_Type STATUS;
  volatile TC_COUNT32_COUNT_Type COUNT;
       RoReg8 Reserved3[0x4];
  volatile TC_COUNT32_CC_Type CC[2];
} TcCount32;



typedef union {
       TcCount8 COUNT8;
       TcCount16 COUNT16;
       TcCount32 COUNT32;
} Tc;
# 263 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/tcc.h" 1
# 44 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t :3;
    uint32_t RESOLUTION:2;
    uint32_t :1;
    uint32_t PRESCALER:3;
    uint32_t RUNSTDBY:1;
    uint32_t PRESCSYNC:2;
    uint32_t ALOCK:1;
    uint32_t :9;
    uint32_t CPTEN0:1;
    uint32_t CPTEN1:1;
    uint32_t CPTEN2:1;
    uint32_t CPTEN3:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t :24;
    uint32_t CPTEN:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} TCC_CTRLA_Type;
# 136 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint8_t DIR:1;
    uint8_t LUPD:1;
    uint8_t ONESHOT:1;
    uint8_t IDXCMD:2;
    uint8_t CMD:3;
  } bit;
  uint8_t reg;
} TCC_CTRLBCLR_Type;
# 185 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint8_t DIR:1;
    uint8_t LUPD:1;
    uint8_t ONESHOT:1;
    uint8_t IDXCMD:2;
    uint8_t CMD:3;
  } bit;
  uint8_t reg;
} TCC_CTRLBSET_Type;
# 234 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t SWRST:1;
    uint32_t ENABLE:1;
    uint32_t CTRLB:1;
    uint32_t STATUS:1;
    uint32_t COUNT:1;
    uint32_t PATT:1;
    uint32_t WAVE:1;
    uint32_t PER:1;
    uint32_t CC0:1;
    uint32_t CC1:1;
    uint32_t CC2:1;
    uint32_t CC3:1;
    uint32_t :4;
    uint32_t PATTB:1;
    uint32_t WAVEB:1;
    uint32_t PERB:1;
    uint32_t CCB0:1;
    uint32_t CCB1:1;
    uint32_t CCB2:1;
    uint32_t CCB3:1;
    uint32_t :9;
  } bit;
  struct {
    uint32_t :8;
    uint32_t CC:4;
    uint32_t :7;
    uint32_t CCB:4;
    uint32_t :9;
  } vec;
  uint32_t reg;
} TCC_SYNCBUSY_Type;
# 320 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t SRC:2;
    uint32_t :1;
    uint32_t KEEP:1;
    uint32_t QUAL:1;
    uint32_t BLANK:2;
    uint32_t RESTART:1;
    uint32_t HALT:2;
    uint32_t CHSEL:2;
    uint32_t CAPTURE:3;
    uint32_t :1;
    uint32_t BLANKVAL:8;
    uint32_t FILTERVAL:4;
    uint32_t :4;
  } bit;
  uint32_t reg;
} TCC_FCTRLA_Type;
# 420 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t SRC:2;
    uint32_t :1;
    uint32_t KEEP:1;
    uint32_t QUAL:1;
    uint32_t BLANK:2;
    uint32_t RESTART:1;
    uint32_t HALT:2;
    uint32_t CHSEL:2;
    uint32_t CAPTURE:3;
    uint32_t :1;
    uint32_t BLANKVAL:8;
    uint32_t FILTERVAL:4;
    uint32_t :4;
  } bit;
  uint32_t reg;
} TCC_FCTRLB_Type;
# 520 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t OTMX:2;
    uint32_t :6;
    uint32_t DTIEN0:1;
    uint32_t DTIEN1:1;
    uint32_t DTIEN2:1;
    uint32_t DTIEN3:1;
    uint32_t :4;
    uint32_t DTLS:8;
    uint32_t DTHS:8;
  } bit;
  struct {
    uint32_t :8;
    uint32_t DTIEN:4;
    uint32_t :20;
  } vec;
  uint32_t reg;
} TCC_WEXCTRL_Type;
# 568 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t NRE0:1;
    uint32_t NRE1:1;
    uint32_t NRE2:1;
    uint32_t NRE3:1;
    uint32_t NRE4:1;
    uint32_t NRE5:1;
    uint32_t NRE6:1;
    uint32_t NRE7:1;
    uint32_t NRV0:1;
    uint32_t NRV1:1;
    uint32_t NRV2:1;
    uint32_t NRV3:1;
    uint32_t NRV4:1;
    uint32_t NRV5:1;
    uint32_t NRV6:1;
    uint32_t NRV7:1;
    uint32_t INVEN0:1;
    uint32_t INVEN1:1;
    uint32_t INVEN2:1;
    uint32_t INVEN3:1;
    uint32_t INVEN4:1;
    uint32_t INVEN5:1;
    uint32_t INVEN6:1;
    uint32_t INVEN7:1;
    uint32_t FILTERVAL0:4;
    uint32_t FILTERVAL1:4;
  } bit;
  struct {
    uint32_t NRE:8;
    uint32_t NRV:8;
    uint32_t INVEN:8;
    uint32_t :8;
  } vec;
  uint32_t reg;
} TCC_DRVCTRL_Type;
# 677 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint8_t DBGRUN:1;
    uint8_t :1;
    uint8_t FDDBD:1;
    uint8_t :5;
  } bit;
  uint8_t reg;
} TCC_DBGCTRL_Type;
# 699 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t EVACT0:3;
    uint32_t EVACT1:3;
    uint32_t CNTSEL:2;
    uint32_t OVFEO:1;
    uint32_t TRGEO:1;
    uint32_t CNTEO:1;
    uint32_t :1;
    uint32_t TCINV0:1;
    uint32_t TCINV1:1;
    uint32_t TCEI0:1;
    uint32_t TCEI1:1;
    uint32_t MCEI0:1;
    uint32_t MCEI1:1;
    uint32_t MCEI2:1;
    uint32_t MCEI3:1;
    uint32_t :4;
    uint32_t MCEO0:1;
    uint32_t MCEO1:1;
    uint32_t MCEO2:1;
    uint32_t MCEO3:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t :12;
    uint32_t TCINV:2;
    uint32_t TCEI:2;
    uint32_t MCEI:4;
    uint32_t :4;
    uint32_t MCEO:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} TCC_EVCTRL_Type;
# 832 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t OVF:1;
    uint32_t TRG:1;
    uint32_t CNT:1;
    uint32_t ERR:1;
    uint32_t :7;
    uint32_t DFS:1;
    uint32_t FAULTA:1;
    uint32_t FAULTB:1;
    uint32_t FAULT0:1;
    uint32_t FAULT1:1;
    uint32_t MC0:1;
    uint32_t MC1:1;
    uint32_t MC2:1;
    uint32_t MC3:1;
    uint32_t :12;
  } bit;
  struct {
    uint32_t :16;
    uint32_t MC:4;
    uint32_t :12;
  } vec;
  uint32_t reg;
} TCC_INTENCLR_Type;
# 895 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t OVF:1;
    uint32_t TRG:1;
    uint32_t CNT:1;
    uint32_t ERR:1;
    uint32_t :7;
    uint32_t DFS:1;
    uint32_t FAULTA:1;
    uint32_t FAULTB:1;
    uint32_t FAULT0:1;
    uint32_t FAULT1:1;
    uint32_t MC0:1;
    uint32_t MC1:1;
    uint32_t MC2:1;
    uint32_t MC3:1;
    uint32_t :12;
  } bit;
  struct {
    uint32_t :16;
    uint32_t MC:4;
    uint32_t :12;
  } vec;
  uint32_t reg;
} TCC_INTENSET_Type;
# 958 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    volatile const uint32_t OVF:1;
    volatile const uint32_t TRG:1;
    volatile const uint32_t CNT:1;
    volatile const uint32_t ERR:1;
    volatile const uint32_t :7;
    volatile const uint32_t DFS:1;
    volatile const uint32_t FAULTA:1;
    volatile const uint32_t FAULTB:1;
    volatile const uint32_t FAULT0:1;
    volatile const uint32_t FAULT1:1;
    volatile const uint32_t MC0:1;
    volatile const uint32_t MC1:1;
    volatile const uint32_t MC2:1;
    volatile const uint32_t MC3:1;
    volatile const uint32_t :12;
  } bit;
  struct {
    volatile const uint32_t :16;
    volatile const uint32_t MC:4;
    volatile const uint32_t :12;
  } vec;
  uint32_t reg;
} TCC_INTFLAG_Type;
# 1021 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t STOP:1;
    uint32_t IDX:1;
    uint32_t :1;
    uint32_t DFS:1;
    uint32_t SLAVE:1;
    uint32_t PATTBV:1;
    uint32_t WAVEBV:1;
    uint32_t PERBV:1;
    uint32_t FAULTAIN:1;
    uint32_t FAULTBIN:1;
    uint32_t FAULT0IN:1;
    uint32_t FAULT1IN:1;
    uint32_t FAULTA:1;
    uint32_t FAULTB:1;
    uint32_t FAULT0:1;
    uint32_t FAULT1:1;
    uint32_t CCBV0:1;
    uint32_t CCBV1:1;
    uint32_t CCBV2:1;
    uint32_t CCBV3:1;
    uint32_t :4;
    uint32_t CMP0:1;
    uint32_t CMP1:1;
    uint32_t CMP2:1;
    uint32_t CMP3:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t :16;
    uint32_t CCBV:4;
    uint32_t :4;
    uint32_t CMP:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} TCC_STATUS_Type;
# 1120 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t :4;
    uint32_t COUNT:20;
    uint32_t :8;
  } DITH4;
  struct {
    uint32_t :5;
    uint32_t COUNT:19;
    uint32_t :8;
  } DITH5;
  struct {
    uint32_t :6;
    uint32_t COUNT:18;
    uint32_t :8;
  } DITH6;
  struct {
    uint32_t COUNT:24;
    uint32_t :8;
  } bit;
  uint32_t reg;
} TCC_COUNT_Type;
# 1172 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint16_t PGE0:1;
    uint16_t PGE1:1;
    uint16_t PGE2:1;
    uint16_t PGE3:1;
    uint16_t PGE4:1;
    uint16_t PGE5:1;
    uint16_t PGE6:1;
    uint16_t PGE7:1;
    uint16_t PGV0:1;
    uint16_t PGV1:1;
    uint16_t PGV2:1;
    uint16_t PGV3:1;
    uint16_t PGV4:1;
    uint16_t PGV5:1;
    uint16_t PGV6:1;
    uint16_t PGV7:1;
  } bit;
  struct {
    uint16_t PGE:8;
    uint16_t PGV:8;
  } vec;
  uint16_t reg;
} TCC_PATT_Type;
# 1244 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t WAVEGEN:3;
    uint32_t :1;
    uint32_t RAMP:2;
    uint32_t :1;
    uint32_t CIPEREN:1;
    uint32_t CICCEN0:1;
    uint32_t CICCEN1:1;
    uint32_t CICCEN2:1;
    uint32_t CICCEN3:1;
    uint32_t :4;
    uint32_t POL0:1;
    uint32_t POL1:1;
    uint32_t POL2:1;
    uint32_t POL3:1;
    uint32_t :4;
    uint32_t SWAP0:1;
    uint32_t SWAP1:1;
    uint32_t SWAP2:1;
    uint32_t SWAP3:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t :8;
    uint32_t CICCEN:4;
    uint32_t :4;
    uint32_t POL:4;
    uint32_t :4;
    uint32_t SWAP:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} TCC_WAVE_Type;
# 1348 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t DITHERCY:4;
    uint32_t PER:20;
    uint32_t :8;
  } DITH4;
  struct {
    uint32_t DITHERCY:5;
    uint32_t PER:19;
    uint32_t :8;
  } DITH5;
  struct {
    uint32_t DITHERCY:6;
    uint32_t PER:18;
    uint32_t :8;
  } DITH6;
  struct {
    uint32_t PER:24;
    uint32_t :8;
  } bit;
  uint32_t reg;
} TCC_PER_Type;
# 1409 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t DITHERCY:4;
    uint32_t CC:20;
    uint32_t :8;
  } DITH4;
  struct {
    uint32_t DITHERCY:5;
    uint32_t CC:19;
    uint32_t :8;
  } DITH5;
  struct {
    uint32_t DITHERCY:6;
    uint32_t CC:18;
    uint32_t :8;
  } DITH6;
  struct {
    uint32_t CC:24;
    uint32_t :8;
  } bit;
  uint32_t reg;
} TCC_CC_Type;
# 1470 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint16_t PGEB0:1;
    uint16_t PGEB1:1;
    uint16_t PGEB2:1;
    uint16_t PGEB3:1;
    uint16_t PGEB4:1;
    uint16_t PGEB5:1;
    uint16_t PGEB6:1;
    uint16_t PGEB7:1;
    uint16_t PGVB0:1;
    uint16_t PGVB1:1;
    uint16_t PGVB2:1;
    uint16_t PGVB3:1;
    uint16_t PGVB4:1;
    uint16_t PGVB5:1;
    uint16_t PGVB6:1;
    uint16_t PGVB7:1;
  } bit;
  struct {
    uint16_t PGEB:8;
    uint16_t PGVB:8;
  } vec;
  uint16_t reg;
} TCC_PATTB_Type;
# 1542 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t WAVEGENB:3;
    uint32_t :1;
    uint32_t RAMPB:2;
    uint32_t :1;
    uint32_t CIPERENB:1;
    uint32_t CICCENB0:1;
    uint32_t CICCENB1:1;
    uint32_t CICCENB2:1;
    uint32_t CICCENB3:1;
    uint32_t :4;
    uint32_t POLB0:1;
    uint32_t POLB1:1;
    uint32_t POLB2:1;
    uint32_t POLB3:1;
    uint32_t :4;
    uint32_t SWAPB0:1;
    uint32_t SWAPB1:1;
    uint32_t SWAPB2:1;
    uint32_t SWAPB3:1;
    uint32_t :4;
  } bit;
  struct {
    uint32_t :8;
    uint32_t CICCENB:4;
    uint32_t :4;
    uint32_t POLB:4;
    uint32_t :4;
    uint32_t SWAPB:4;
    uint32_t :4;
  } vec;
  uint32_t reg;
} TCC_WAVEB_Type;
# 1646 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t DITHERCYB:4;
    uint32_t PERB:20;
    uint32_t :8;
  } DITH4;
  struct {
    uint32_t DITHERCYB:5;
    uint32_t PERB:19;
    uint32_t :8;
  } DITH5;
  struct {
    uint32_t DITHERCYB:6;
    uint32_t PERB:18;
    uint32_t :8;
  } DITH6;
  struct {
    uint32_t PERB:24;
    uint32_t :8;
  } bit;
  uint32_t reg;
} TCC_PERB_Type;
# 1707 "asf4/samd21/include/component/tcc.h"
typedef union {
  struct {
    uint32_t DITHERCYB:4;
    uint32_t CCB:20;
    uint32_t :8;
  } DITH4;
  struct {
    uint32_t DITHERCYB:5;
    uint32_t CCB:19;
    uint32_t :8;
  } DITH5;
  struct {
    uint32_t DITHERCYB:6;
    uint32_t CCB:18;
    uint32_t :8;
  } DITH6;
  struct {
    uint32_t CCB:24;
    uint32_t :8;
  } bit;
  uint32_t reg;
} TCC_CCB_Type;
# 1768 "asf4/samd21/include/component/tcc.h"
typedef struct {
  volatile TCC_CTRLA_Type CTRLA;
  volatile TCC_CTRLBCLR_Type CTRLBCLR;
  volatile TCC_CTRLBSET_Type CTRLBSET;
       RoReg8 Reserved1[0x2];
  volatile const TCC_SYNCBUSY_Type SYNCBUSY;
  volatile TCC_FCTRLA_Type FCTRLA;
  volatile TCC_FCTRLB_Type FCTRLB;
  volatile TCC_WEXCTRL_Type WEXCTRL;
  volatile TCC_DRVCTRL_Type DRVCTRL;
       RoReg8 Reserved2[0x2];
  volatile TCC_DBGCTRL_Type DBGCTRL;
       RoReg8 Reserved3[0x1];
  volatile TCC_EVCTRL_Type EVCTRL;
  volatile TCC_INTENCLR_Type INTENCLR;
  volatile TCC_INTENSET_Type INTENSET;
  volatile TCC_INTFLAG_Type INTFLAG;
  volatile TCC_STATUS_Type STATUS;
  volatile TCC_COUNT_Type COUNT;
  volatile TCC_PATT_Type PATT;
       RoReg8 Reserved4[0x2];
  volatile TCC_WAVE_Type WAVE;
  volatile TCC_PER_Type PER;
  volatile TCC_CC_Type CC[4];
       RoReg8 Reserved5[0x10];
  volatile TCC_PATTB_Type PATTB;
       RoReg8 Reserved6[0x2];
  volatile TCC_WAVEB_Type WAVEB;
  volatile TCC_PERB_Type PERB;
  volatile TCC_CCB_Type CCB[4];
} Tcc;
# 264 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/usb.h" 1
# 44 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t RUNSTDBY:1;
    uint8_t :4;
    uint8_t MODE:1;
  } bit;
  uint8_t reg;
} USB_CTRLA_Type;
# 75 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t SWRST:1;
    uint8_t ENABLE:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} USB_SYNCBUSY_Type;
# 96 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t CQOS:2;
    uint8_t DQOS:2;
    uint8_t :4;
  } bit;
  uint8_t reg;
} USB_QOSCTRL_Type;
# 135 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t DETACH:1;
    uint16_t UPRSM:1;
    uint16_t SPDCONF:2;
    uint16_t NREPLY:1;
    uint16_t TSTJ:1;
    uint16_t TSTK:1;
    uint16_t TSTPCKT:1;
    uint16_t OPMODE2:1;
    uint16_t GNAK:1;
    uint16_t LPMHDSK:2;
    uint16_t :4;
  } bit;
  uint16_t reg;
} USB_DEVICE_CTRLB_Type;
# 198 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t :1;
    uint16_t RESUME:1;
    uint16_t SPDCONF:2;
    uint16_t :1;
    uint16_t TSTJ:1;
    uint16_t TSTK:1;
    uint16_t :1;
    uint16_t SOFE:1;
    uint16_t BUSRESET:1;
    uint16_t VBUSOK:1;
    uint16_t L1RESUME:1;
    uint16_t :4;
  } bit;
  uint16_t reg;
} USB_HOST_CTRLB_Type;
# 245 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t DADD:7;
    uint8_t ADDEN:1;
  } bit;
  uint8_t reg;
} USB_DEVICE_DADD_Type;
# 266 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t FLENC:4;
    uint8_t :3;
    uint8_t FLENCE:1;
  } bit;
  uint8_t reg;
} USB_HOST_HSOFC_Type;
# 288 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t :2;
    uint8_t SPEED:2;
    uint8_t :2;
    uint8_t LINESTATE:2;
  } bit;
  uint8_t reg;
} USB_DEVICE_STATUS_Type;
# 324 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t :2;
    uint8_t SPEED:2;
    uint8_t :2;
    uint8_t LINESTATE:2;
  } bit;
  uint8_t reg;
} USB_HOST_STATUS_Type;
# 348 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t FSMSTATE:7;
    uint8_t :1;
  } bit;
  uint8_t reg;
} USB_FSMSTATUS_Type;
# 381 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t MFNUM:3;
    uint16_t FNUM:11;
    uint16_t :1;
    uint16_t FNCERR:1;
  } bit;
  uint16_t reg;
} USB_DEVICE_FNUM_Type;
# 407 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t MFNUM:3;
    uint16_t FNUM:11;
    uint16_t :2;
  } bit;
  uint16_t reg;
} USB_HOST_FNUM_Type;
# 430 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t FLENHIGH:8;
  } bit;
  uint8_t reg;
} USB_HOST_FLENHIGH_Type;
# 448 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t SUSPEND:1;
    uint16_t MSOF:1;
    uint16_t SOF:1;
    uint16_t EORST:1;
    uint16_t WAKEUP:1;
    uint16_t EORSM:1;
    uint16_t UPRSM:1;
    uint16_t RAMACER:1;
    uint16_t LPMNYET:1;
    uint16_t LPMSUSP:1;
    uint16_t :6;
  } bit;
  uint16_t reg;
} USB_DEVICE_INTENCLR_Type;
# 493 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t :2;
    uint16_t HSOF:1;
    uint16_t RST:1;
    uint16_t WAKEUP:1;
    uint16_t DNRSM:1;
    uint16_t UPRSM:1;
    uint16_t RAMACER:1;
    uint16_t DCONN:1;
    uint16_t DDISC:1;
    uint16_t :6;
  } bit;
  uint16_t reg;
} USB_HOST_INTENCLR_Type;
# 533 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t SUSPEND:1;
    uint16_t MSOF:1;
    uint16_t SOF:1;
    uint16_t EORST:1;
    uint16_t WAKEUP:1;
    uint16_t EORSM:1;
    uint16_t UPRSM:1;
    uint16_t RAMACER:1;
    uint16_t LPMNYET:1;
    uint16_t LPMSUSP:1;
    uint16_t :6;
  } bit;
  uint16_t reg;
} USB_DEVICE_INTENSET_Type;
# 578 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t :2;
    uint16_t HSOF:1;
    uint16_t RST:1;
    uint16_t WAKEUP:1;
    uint16_t DNRSM:1;
    uint16_t UPRSM:1;
    uint16_t RAMACER:1;
    uint16_t DCONN:1;
    uint16_t DDISC:1;
    uint16_t :6;
  } bit;
  uint16_t reg;
} USB_HOST_INTENSET_Type;
# 618 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    volatile const uint16_t SUSPEND:1;
    volatile const uint16_t MSOF:1;
    volatile const uint16_t SOF:1;
    volatile const uint16_t EORST:1;
    volatile const uint16_t WAKEUP:1;
    volatile const uint16_t EORSM:1;
    volatile const uint16_t UPRSM:1;
    volatile const uint16_t RAMACER:1;
    volatile const uint16_t LPMNYET:1;
    volatile const uint16_t LPMSUSP:1;
    volatile const uint16_t :6;
  } bit;
  uint16_t reg;
} USB_DEVICE_INTFLAG_Type;
# 663 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    volatile const uint16_t :2;
    volatile const uint16_t HSOF:1;
    volatile const uint16_t RST:1;
    volatile const uint16_t WAKEUP:1;
    volatile const uint16_t DNRSM:1;
    volatile const uint16_t UPRSM:1;
    volatile const uint16_t RAMACER:1;
    volatile const uint16_t DCONN:1;
    volatile const uint16_t DDISC:1;
    volatile const uint16_t :6;
  } bit;
  uint16_t reg;
} USB_HOST_INTFLAG_Type;
# 703 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t EPINT0:1;
    uint16_t EPINT1:1;
    uint16_t EPINT2:1;
    uint16_t EPINT3:1;
    uint16_t EPINT4:1;
    uint16_t EPINT5:1;
    uint16_t EPINT6:1;
    uint16_t EPINT7:1;
    uint16_t :8;
  } bit;
  struct {
    uint16_t EPINT:8;
    uint16_t :8;
  } vec;
  uint16_t reg;
} USB_DEVICE_EPINTSMRY_Type;
# 749 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t EPINT0:1;
    uint16_t EPINT1:1;
    uint16_t EPINT2:1;
    uint16_t EPINT3:1;
    uint16_t EPINT4:1;
    uint16_t EPINT5:1;
    uint16_t EPINT6:1;
    uint16_t EPINT7:1;
    uint16_t :8;
  } bit;
  struct {
    uint16_t EPINT:8;
    uint16_t :8;
  } vec;
  uint16_t reg;
} USB_HOST_PINTSMRY_Type;
# 795 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint32_t DESCADD:32;
  } bit;
  uint32_t reg;
} USB_DESCADD_Type;
# 813 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t TRANSP:5;
    uint16_t :1;
    uint16_t TRANSN:5;
    uint16_t :1;
    uint16_t TRIM:3;
    uint16_t :1;
  } bit;
  uint16_t reg;
} USB_PADCAL_Type;
# 842 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t EPTYPE0:3;
    uint8_t :1;
    uint8_t EPTYPE1:3;
    uint8_t NYETDIS:1;
  } bit;
  uint8_t reg;
} USB_DEVICE_EPCFG_Type;
# 868 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t PTOKEN:2;
    uint8_t BK:1;
    uint8_t PTYPE:3;
    uint8_t :2;
  } bit;
  uint8_t reg;
} USB_HOST_PCFG_Type;
# 894 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t BITINTERVAL:8;
  } bit;
  uint8_t reg;
} USB_HOST_BINTERVAL_Type;
# 912 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t DTGLOUT:1;
    uint8_t DTGLIN:1;
    uint8_t CURBK:1;
    uint8_t :1;
    uint8_t STALLRQ0:1;
    uint8_t STALLRQ1:1;
    uint8_t BK0RDY:1;
    uint8_t BK1RDY:1;
  } bit;
  struct {
    uint8_t :4;
    uint8_t STALLRQ:2;
    uint8_t :2;
  } vec;
  uint8_t reg;
} USB_DEVICE_EPSTATUSCLR_Type;
# 956 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t DTGL:1;
    uint8_t :1;
    uint8_t CURBK:1;
    uint8_t :1;
    uint8_t PFREEZE:1;
    uint8_t :1;
    uint8_t BK0RDY:1;
    uint8_t BK1RDY:1;
  } bit;
  uint8_t reg;
} USB_HOST_PSTATUSCLR_Type;
# 988 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t DTGLOUT:1;
    uint8_t DTGLIN:1;
    uint8_t CURBK:1;
    uint8_t :1;
    uint8_t STALLRQ0:1;
    uint8_t STALLRQ1:1;
    uint8_t BK0RDY:1;
    uint8_t BK1RDY:1;
  } bit;
  struct {
    uint8_t :4;
    uint8_t STALLRQ:2;
    uint8_t :2;
  } vec;
  uint8_t reg;
} USB_DEVICE_EPSTATUSSET_Type;
# 1032 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t DTGL:1;
    uint8_t :1;
    uint8_t CURBK:1;
    uint8_t :1;
    uint8_t PFREEZE:1;
    uint8_t :1;
    uint8_t BK0RDY:1;
    uint8_t BK1RDY:1;
  } bit;
  uint8_t reg;
} USB_HOST_PSTATUSSET_Type;
# 1064 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t DTGLOUT:1;
    uint8_t DTGLIN:1;
    uint8_t CURBK:1;
    uint8_t :1;
    uint8_t STALLRQ0:1;
    uint8_t STALLRQ1:1;
    uint8_t BK0RDY:1;
    uint8_t BK1RDY:1;
  } bit;
  struct {
    uint8_t :4;
    uint8_t STALLRQ:2;
    uint8_t :2;
  } vec;
  uint8_t reg;
} USB_DEVICE_EPSTATUS_Type;
# 1108 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t DTGL:1;
    uint8_t :1;
    uint8_t CURBK:1;
    uint8_t :1;
    uint8_t PFREEZE:1;
    uint8_t :1;
    uint8_t BK0RDY:1;
    uint8_t BK1RDY:1;
  } bit;
  uint8_t reg;
} USB_HOST_PSTATUS_Type;
# 1140 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    volatile const uint8_t TRCPT0:1;
    volatile const uint8_t TRCPT1:1;
    volatile const uint8_t TRFAIL0:1;
    volatile const uint8_t TRFAIL1:1;
    volatile const uint8_t RXSTP:1;
    volatile const uint8_t STALL0:1;
    volatile const uint8_t STALL1:1;
    volatile const uint8_t :1;
  } bit;
  struct {
    volatile const uint8_t TRCPT:2;
    volatile const uint8_t TRFAIL:2;
    volatile const uint8_t :1;
    volatile const uint8_t STALL:2;
    volatile const uint8_t :1;
  } vec;
  uint8_t reg;
} USB_DEVICE_EPINTFLAG_Type;
# 1192 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    volatile const uint8_t TRCPT0:1;
    volatile const uint8_t TRCPT1:1;
    volatile const uint8_t TRFAIL:1;
    volatile const uint8_t PERR:1;
    volatile const uint8_t TXSTP:1;
    volatile const uint8_t STALL:1;
    volatile const uint8_t :2;
  } bit;
  struct {
    volatile const uint8_t TRCPT:2;
    volatile const uint8_t :6;
  } vec;
  uint8_t reg;
} USB_HOST_PINTFLAG_Type;
# 1232 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t TRCPT0:1;
    uint8_t TRCPT1:1;
    uint8_t TRFAIL0:1;
    uint8_t TRFAIL1:1;
    uint8_t RXSTP:1;
    uint8_t STALL0:1;
    uint8_t STALL1:1;
    uint8_t :1;
  } bit;
  struct {
    uint8_t TRCPT:2;
    uint8_t TRFAIL:2;
    uint8_t :1;
    uint8_t STALL:2;
    uint8_t :1;
  } vec;
  uint8_t reg;
} USB_DEVICE_EPINTENCLR_Type;
# 1284 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t TRCPT0:1;
    uint8_t TRCPT1:1;
    uint8_t TRFAIL:1;
    uint8_t PERR:1;
    uint8_t TXSTP:1;
    uint8_t STALL:1;
    uint8_t :2;
  } bit;
  struct {
    uint8_t TRCPT:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} USB_HOST_PINTENCLR_Type;
# 1324 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t TRCPT0:1;
    uint8_t TRCPT1:1;
    uint8_t TRFAIL0:1;
    uint8_t TRFAIL1:1;
    uint8_t RXSTP:1;
    uint8_t STALL0:1;
    uint8_t STALL1:1;
    uint8_t :1;
  } bit;
  struct {
    uint8_t TRCPT:2;
    uint8_t TRFAIL:2;
    uint8_t :1;
    uint8_t STALL:2;
    uint8_t :1;
  } vec;
  uint8_t reg;
} USB_DEVICE_EPINTENSET_Type;
# 1376 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t TRCPT0:1;
    uint8_t TRCPT1:1;
    uint8_t TRFAIL:1;
    uint8_t PERR:1;
    uint8_t TXSTP:1;
    uint8_t STALL:1;
    uint8_t :2;
  } bit;
  struct {
    uint8_t TRCPT:2;
    uint8_t :6;
  } vec;
  uint8_t reg;
} USB_HOST_PINTENSET_Type;
# 1416 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint32_t ADDR:32;
  } bit;
  uint32_t reg;
} USB_DEVICE_ADDR_Type;
# 1433 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint32_t ADDR:32;
  } bit;
  uint32_t reg;
} USB_HOST_ADDR_Type;
# 1450 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint32_t BYTE_COUNT:14;
    uint32_t MULTI_PACKET_SIZE:14;
    uint32_t SIZE:3;
    uint32_t AUTO_ZLP:1;
  } bit;
  uint32_t reg;
} USB_DEVICE_PCKSIZE_Type;
# 1478 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint32_t BYTE_COUNT:14;
    uint32_t MULTI_PACKET_SIZE:14;
    uint32_t SIZE:3;
    uint32_t AUTO_ZLP:1;
  } bit;
  uint32_t reg;
} USB_HOST_PCKSIZE_Type;
# 1506 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t SUBPID:4;
    uint16_t VARIABLE:11;
    uint16_t :1;
  } bit;
  uint16_t reg;
} USB_DEVICE_EXTREG_Type;
# 1528 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t SUBPID:4;
    uint16_t VARIABLE:11;
    uint16_t :1;
  } bit;
  uint16_t reg;
} USB_HOST_EXTREG_Type;
# 1550 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t CRCERR:1;
    uint8_t ERRORFLOW:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} USB_DEVICE_STATUS_BK_Type;
# 1570 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint8_t CRCERR:1;
    uint8_t ERRORFLOW:1;
    uint8_t :6;
  } bit;
  uint8_t reg;
} USB_HOST_STATUS_BK_Type;
# 1590 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t PDADDR:7;
    uint16_t :1;
    uint16_t PEPNUM:4;
    uint16_t PERMAX:4;
  } bit;
  uint16_t reg;
} USB_HOST_CTRL_PIPE_Type;
# 1617 "asf4/samd21/include/component/usb.h"
typedef union {
  struct {
    uint16_t DTGLER:1;
    uint16_t DAPIDER:1;
    uint16_t PIDER:1;
    uint16_t TOUTER:1;
    uint16_t CRC16ER:1;
    uint16_t ERCNT:3;
    uint16_t :8;
  } bit;
  uint16_t reg;
} USB_HOST_STATUS_PIPE_Type;
# 1650 "asf4/samd21/include/component/usb.h"
typedef struct {
  volatile USB_DEVICE_ADDR_Type ADDR;
  volatile USB_DEVICE_PCKSIZE_Type PCKSIZE;
  volatile USB_DEVICE_EXTREG_Type EXTREG;
  volatile USB_DEVICE_STATUS_BK_Type STATUS_BK;
       RoReg8 Reserved1[0x5];
} UsbDeviceDescBank;




typedef struct {
  volatile USB_HOST_ADDR_Type ADDR;
  volatile USB_HOST_PCKSIZE_Type PCKSIZE;
  volatile USB_HOST_EXTREG_Type EXTREG;
  volatile USB_HOST_STATUS_BK_Type STATUS_BK;
       RoReg8 Reserved1[0x1];
  volatile USB_HOST_CTRL_PIPE_Type CTRL_PIPE;
  volatile USB_HOST_STATUS_PIPE_Type STATUS_PIPE;
} UsbHostDescBank;




typedef struct {
  volatile USB_DEVICE_EPCFG_Type EPCFG;
       RoReg8 Reserved1[0x3];
  volatile USB_DEVICE_EPSTATUSCLR_Type EPSTATUSCLR;
  volatile USB_DEVICE_EPSTATUSSET_Type EPSTATUSSET;
  volatile const USB_DEVICE_EPSTATUS_Type EPSTATUS;
  volatile USB_DEVICE_EPINTFLAG_Type EPINTFLAG;
  volatile USB_DEVICE_EPINTENCLR_Type EPINTENCLR;
  volatile USB_DEVICE_EPINTENSET_Type EPINTENSET;
       RoReg8 Reserved2[0x16];
} UsbDeviceEndpoint;




typedef struct {
  volatile USB_HOST_PCFG_Type PCFG;
       RoReg8 Reserved1[0x2];
  volatile USB_HOST_BINTERVAL_Type BINTERVAL;
  volatile USB_HOST_PSTATUSCLR_Type PSTATUSCLR;
  volatile USB_HOST_PSTATUSSET_Type PSTATUSSET;
  volatile const USB_HOST_PSTATUS_Type PSTATUS;
  volatile USB_HOST_PINTFLAG_Type PINTFLAG;
  volatile USB_HOST_PINTENCLR_Type PINTENCLR;
  volatile USB_HOST_PINTENSET_Type PINTENSET;
       RoReg8 Reserved2[0x16];
} UsbHostPipe;




typedef struct {
  volatile USB_CTRLA_Type CTRLA;
       RoReg8 Reserved1[0x1];
  volatile const USB_SYNCBUSY_Type SYNCBUSY;
  volatile USB_QOSCTRL_Type QOSCTRL;
       RoReg8 Reserved2[0x4];
  volatile USB_DEVICE_CTRLB_Type CTRLB;
  volatile USB_DEVICE_DADD_Type DADD;
       RoReg8 Reserved3[0x1];
  volatile const USB_DEVICE_STATUS_Type STATUS;
  volatile const USB_FSMSTATUS_Type FSMSTATUS;
       RoReg8 Reserved4[0x2];
  volatile const USB_DEVICE_FNUM_Type FNUM;
       RoReg8 Reserved5[0x2];
  volatile USB_DEVICE_INTENCLR_Type INTENCLR;
       RoReg8 Reserved6[0x2];
  volatile USB_DEVICE_INTENSET_Type INTENSET;
       RoReg8 Reserved7[0x2];
  volatile USB_DEVICE_INTFLAG_Type INTFLAG;
       RoReg8 Reserved8[0x2];
  volatile const USB_DEVICE_EPINTSMRY_Type EPINTSMRY;
       RoReg8 Reserved9[0x2];
  volatile USB_DESCADD_Type DESCADD;
  volatile USB_PADCAL_Type PADCAL;
       RoReg8 Reserved10[0xD6];
       UsbDeviceEndpoint DeviceEndpoint[8];
} UsbDevice;




typedef struct {
  volatile USB_CTRLA_Type CTRLA;
       RoReg8 Reserved1[0x1];
  volatile const USB_SYNCBUSY_Type SYNCBUSY;
  volatile USB_QOSCTRL_Type QOSCTRL;
       RoReg8 Reserved2[0x4];
  volatile USB_HOST_CTRLB_Type CTRLB;
  volatile USB_HOST_HSOFC_Type HSOFC;
       RoReg8 Reserved3[0x1];
  volatile USB_HOST_STATUS_Type STATUS;
  volatile const USB_FSMSTATUS_Type FSMSTATUS;
       RoReg8 Reserved4[0x2];
  volatile USB_HOST_FNUM_Type FNUM;
  volatile const USB_HOST_FLENHIGH_Type FLENHIGH;
       RoReg8 Reserved5[0x1];
  volatile USB_HOST_INTENCLR_Type INTENCLR;
       RoReg8 Reserved6[0x2];
  volatile USB_HOST_INTENSET_Type INTENSET;
       RoReg8 Reserved7[0x2];
  volatile USB_HOST_INTFLAG_Type INTFLAG;
       RoReg8 Reserved8[0x2];
  volatile const USB_HOST_PINTSMRY_Type PINTSMRY;
       RoReg8 Reserved9[0x2];
  volatile USB_DESCADD_Type DESCADD;
  volatile USB_PADCAL_Type PADCAL;
       RoReg8 Reserved10[0xD6];
       UsbHostPipe HostPipe[8];
} UsbHost;




typedef struct {
       UsbDeviceDescBank DeviceDescBank[2];
} UsbDeviceDescriptor;




typedef struct {
       UsbHostDescBank HostDescBank[2];
} UsbHostDescriptor;





typedef union {
       UsbDevice DEVICE;
       UsbHost HOST;
} Usb;
# 265 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/component/wdt.h" 1
# 44 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    uint8_t :1;
    uint8_t ENABLE:1;
    uint8_t WEN:1;
    uint8_t :4;
    uint8_t ALWAYSON:1;
  } bit;
  uint8_t reg;
} WDT_CTRL_Type;
# 69 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    uint8_t PER:4;
    uint8_t WINDOW:4;
  } bit;
  uint8_t reg;
} WDT_CONFIG_Type;
# 139 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    uint8_t EWOFFSET:4;
    uint8_t :4;
  } bit;
  uint8_t reg;
} WDT_EWCTRL_Type;
# 182 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    uint8_t EW:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} WDT_INTENCLR_Type;
# 200 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    uint8_t EW:1;
    uint8_t :7;
  } bit;
  uint8_t reg;
} WDT_INTENSET_Type;
# 218 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    volatile const uint8_t EW:1;
    volatile const uint8_t :7;
  } bit;
  uint8_t reg;
} WDT_INTFLAG_Type;
# 236 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    uint8_t :7;
    uint8_t SYNCBUSY:1;
  } bit;
  uint8_t reg;
} WDT_STATUS_Type;
# 254 "asf4/samd21/include/component/wdt.h"
typedef union {
  struct {
    uint8_t CLEAR:8;
  } bit;
  uint8_t reg;
} WDT_CLEAR_Type;
# 274 "asf4/samd21/include/component/wdt.h"
typedef struct {
  volatile WDT_CTRL_Type CTRL;
  volatile WDT_CONFIG_Type CONFIG;
  volatile WDT_EWCTRL_Type EWCTRL;
       RoReg8 Reserved1[0x1];
  volatile WDT_INTENCLR_Type INTENCLR;
  volatile WDT_INTENSET_Type INTENSET;
  volatile WDT_INTFLAG_Type INTFLAG;
  volatile const WDT_STATUS_Type STATUS;
  volatile WDT_CLEAR_Type CLEAR;
} Wdt;
# 266 "asf4/samd21/include/samd21e18a.h" 2
# 274 "asf4/samd21/include/samd21e18a.h"
# 1 "asf4/samd21/include/instance/ac.h" 1
# 275 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/adc.h" 1
# 276 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/dac.h" 1
# 277 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/dmac.h" 1
# 278 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/dsu.h" 1
# 279 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/eic.h" 1
# 280 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/evsys.h" 1
# 281 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/gclk.h" 1
# 282 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/sbmatrix.h" 1
# 283 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/i2s.h" 1
# 284 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/mtb.h" 1
# 285 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/nvmctrl.h" 1
# 286 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/pac0.h" 1
# 287 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/pac1.h" 1
# 288 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/pac2.h" 1
# 289 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/pm.h" 1
# 290 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/port.h" 1
# 291 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/rtc.h" 1
# 292 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/sercom0.h" 1
# 293 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/sercom1.h" 1
# 294 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/sercom2.h" 1
# 295 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/sercom3.h" 1
# 296 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/sysctrl.h" 1
# 297 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/tc3.h" 1
# 298 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/tc4.h" 1
# 299 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/tc5.h" 1
# 300 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/tcc0.h" 1
# 301 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/tcc1.h" 1
# 302 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/tcc2.h" 1
# 303 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/usb.h" 1
# 304 "asf4/samd21/include/samd21e18a.h" 2
# 1 "asf4/samd21/include/instance/wdt.h" 1
# 305 "asf4/samd21/include/samd21e18a.h" 2
# 523 "asf4/samd21/include/samd21e18a.h"
# 1 "asf4/samd21/include/pio/samd21e18a.h" 1
# 524 "asf4/samd21/include/samd21e18a.h" 2
# 39 "asf4/samd21/include/sam.h" 2
# 32 "./mpconfigport.h" 2
# 90 "./mpconfigport.h"
# 1 "../../py/circuitpy_mpconfig.h" 1
# 35 "../../py/circuitpy_mpconfig.h"
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdatomic.h" 1 3 4
# 29 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdatomic.h" 3 4

# 29 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdatomic.h" 3 4
typedef enum
  {
    memory_order_relaxed = 0,
    memory_order_consume = 1,
    memory_order_acquire = 2,
    memory_order_release = 3,
    memory_order_acq_rel = 4,
    memory_order_seq_cst = 5
  } memory_order;


typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic signed char atomic_schar;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic short unsigned int atomic_char16_t;
typedef _Atomic long unsigned int atomic_char32_t;
typedef _Atomic unsigned int atomic_wchar_t;
typedef _Atomic signed char atomic_int_least8_t;
typedef _Atomic unsigned char atomic_uint_least8_t;
typedef _Atomic short int atomic_int_least16_t;
typedef _Atomic short unsigned int atomic_uint_least16_t;
typedef _Atomic long int atomic_int_least32_t;
typedef _Atomic long unsigned int atomic_uint_least32_t;
typedef _Atomic long long int atomic_int_least64_t;
typedef _Atomic long long unsigned int atomic_uint_least64_t;
typedef _Atomic int atomic_int_fast8_t;
typedef _Atomic unsigned int atomic_uint_fast8_t;
typedef _Atomic int atomic_int_fast16_t;
typedef _Atomic unsigned int atomic_uint_fast16_t;
typedef _Atomic int atomic_int_fast32_t;
typedef _Atomic unsigned int atomic_uint_fast32_t;
typedef _Atomic long long int atomic_int_fast64_t;
typedef _Atomic long long unsigned int atomic_uint_fast64_t;
typedef _Atomic int atomic_intptr_t;
typedef _Atomic unsigned int atomic_uintptr_t;
typedef _Atomic unsigned int atomic_size_t;
typedef _Atomic int atomic_ptrdiff_t;
typedef _Atomic long long int atomic_intmax_t;
typedef _Atomic long long unsigned int atomic_uintmax_t;
# 92 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdatomic.h" 3 4
extern void atomic_thread_fence (memory_order);

extern void atomic_signal_fence (memory_order);
# 218 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdatomic.h" 3 4
typedef _Atomic struct
{

  _Bool __val;



} atomic_flag;




extern _Bool atomic_flag_test_and_set (volatile atomic_flag *);


extern _Bool atomic_flag_test_and_set_explicit (volatile atomic_flag *,
      memory_order);



extern void atomic_flag_clear (volatile atomic_flag *);

extern void atomic_flag_clear_explicit (volatile atomic_flag *, memory_order);
# 36 "../../py/circuitpy_mpconfig.h" 2
# 159 "../../py/circuitpy_mpconfig.h"

# 159 "../../py/circuitpy_mpconfig.h"
typedef int mp_int_t;
typedef unsigned mp_uint_t;
typedef long mp_off_t;
# 180 "../../py/circuitpy_mpconfig.h"
# 1 "boards/alliecat_candythecatacorn/mpconfigboard.h" 1
# 181 "../../py/circuitpy_mpconfig.h" 2
# 235 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t analogio_module;
# 298 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t board_module;
# 318 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t busio_module;






extern const struct _mp_obj_module_t digitalio_module;
# 385 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t math_module;
# 399 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t microcontroller_module;






extern const struct _mp_obj_module_t neopixel_write_module;
# 431 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t nvm_module;



extern const struct _mp_obj_module_t os_module;
# 458 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t pulseio_module;
# 472 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t random_module;






extern const struct _mp_obj_module_t rotaryio_module;






extern const struct _mp_obj_module_t rtc_module;
# 507 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t storage_module;






extern const struct _mp_obj_module_t struct_module;






extern const struct _mp_obj_module_t supervisor_module;






extern const struct _mp_obj_module_t time_module;
# 537 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t touchio_module;
# 551 "../../py/circuitpy_mpconfig.h"
extern const struct _mp_obj_module_t usb_hid_module;






extern const struct _mp_obj_module_t usb_midi_module;
# 676 "../../py/circuitpy_mpconfig.h"
# 1 "/usr/arm-none-eabi/include/alloca.h" 1 3
# 10 "/usr/arm-none-eabi/include/alloca.h" 3
# 1 "/usr/arm-none-eabi/include/_ansi.h" 1 3
# 10 "/usr/arm-none-eabi/include/_ansi.h" 3
# 1 "/usr/arm-none-eabi/include/newlib.h" 1 3
# 11 "/usr/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/config.h" 1 3



# 1 "/usr/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/usr/arm-none-eabi/include/sys/config.h" 2 3
# 12 "/usr/arm-none-eabi/include/_ansi.h" 2 3
# 11 "/usr/arm-none-eabi/include/alloca.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/reent.h" 1 3
# 13 "/usr/arm-none-eabi/include/sys/reent.h" 3
# 1 "/usr/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/usr/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 3 4

# 143 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 209 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 3 4
typedef unsigned int size_t;
# 321 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 415 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 3 4
} max_align_t;
# 15 "/usr/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/_types.h" 1 3
# 24 "/usr/arm-none-eabi/include/sys/_types.h" 3
# 1 "/usr/arm-none-eabi/include/machine/_types.h" 1 3
# 25 "/usr/arm-none-eabi/include/sys/_types.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/lock.h" 1 3
# 33 "/usr/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);
# 26 "/usr/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 88 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 129 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef unsigned int __size_t;
# 145 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef signed int _ssize_t;
# 156 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;


# 1 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 1 3 4
# 350 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "/usr/arm-none-eabi/include/sys/_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_T _flock_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;




typedef char * __va_list;
# 16 "/usr/arm-none-eabi/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 287 "/usr/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 608 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 814 "/usr/arm-none-eabi/include/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/usr/arm-none-eabi/include/alloca.h" 2 3
# 677 "../../py/circuitpy_mpconfig.h" 2



# 1 "../../supervisor/flash_root_pointers.h" 1
# 32 "../../supervisor/flash_root_pointers.h"
# 1 "./supervisor/internal_flash_root_pointers.h" 1
# 33 "../../supervisor/flash_root_pointers.h" 2
# 681 "../../py/circuitpy_mpconfig.h" 2
# 693 "../../py/circuitpy_mpconfig.h"

# 693 "../../py/circuitpy_mpconfig.h"
void supervisor_run_background_tasks_if_tick(void);
# 91 "./mpconfigport.h" 2
# 224 "./mpconfigport.h"
# 1 "./peripherals/samd/dma.h" 1
# 30 "./peripherals/samd/dma.h"
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.0/include/stdbool.h" 1 3 4
# 31 "./peripherals/samd/dma.h" 2
# 43 "./peripherals/samd/dma.h"
volatile 
# 43 "./peripherals/samd/dma.h" 3 4
        _Bool 
# 43 "./peripherals/samd/dma.h"
             audio_dma_in_use;

void init_shared_dma(void);






uint8_t sercom_index(Sercom* sercom);

int32_t sercom_dma_write(Sercom* sercom, const uint8_t* buffer, uint32_t length);
int32_t sercom_dma_read(Sercom* sercom, uint8_t* buffer, uint32_t length, uint8_t tx);
int32_t sercom_dma_transfer(Sercom* sercom, const uint8_t* buffer_out, uint8_t* buffer_in, uint32_t length);

void dma_configure(uint8_t channel_number, uint8_t trigsrc, 
# 58 "./peripherals/samd/dma.h" 3 4
                                                           _Bool 
# 58 "./peripherals/samd/dma.h"
                                                                output_event);
void dma_enable_channel(uint8_t channel_number);
void dma_disable_channel(uint8_t channel_number);
void dma_suspend_channel(uint8_t channel_number);
void dma_resume_channel(uint8_t channel_number);

# 63 "./peripherals/samd/dma.h" 3 4
_Bool 
# 63 "./peripherals/samd/dma.h"
    dma_channel_free(uint8_t channel_number);

# 64 "./peripherals/samd/dma.h" 3 4
_Bool 
# 64 "./peripherals/samd/dma.h"
    dma_channel_enabled(uint8_t channel_number);
uint8_t dma_transfer_status(uint8_t channel_number);
DmacDescriptor* dma_descriptor(uint8_t channel_number);
# 225 "./mpconfigport.h" 2
# 46 "../../py/mpconfig.h" 2
# 606 "../../py/mpconfig.h"
typedef float mp_float_t;
# 28 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (1))

Q()
Q(*)
Q(_)
Q(/)
Q(%#o)
Q(%#x)
Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)





Q( )

Q(%#o)

Q(%#x)

Q(*)

Q(*)

Q(.frozen)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/)

Q(/lib)

Q(<dictcomp>)

Q(<genexpr>)

Q(<lambda>)

Q(<listcomp>)

Q(<module>)

Q(<setcomp>)

Q(<stdin>)

Q(<stdin>)

Q(<string>)

Q(A0)

Q(A1)

Q(A2)

Q(A3)

Q(A4)

Q(APA102_MOSI)

Q(APA102_SCK)

Q(AnalogIn)

Q(AnalogIn)

Q(AnalogOut)

Q(AnalogOut)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BOOTLOADER)

Q(BOOTLOADER)

Q(BaseException)

Q(BaseException)

Q(ByteArray)

Q(ByteArray)

Q(Clock)

Q(D0)

Q(D1)

Q(D13)

Q(D2)

Q(D3)

Q(D4)

Q(DOWN)

Q(DOWN)

Q(Device)

Q(Device)

Q(DigitalInOut)

Q(DigitalInOut)

Q(Direction)

Q(Direction)

Q(Direction)

Q(DriveMode)

Q(DriveMode)

Q(DriveMode)

Q(EACCES)

Q(EAGAIN)

Q(EAR_L)

Q(EAR_R)

Q(EEXIST)

Q(EINVAL)

Q(EIO)

Q(EISDIR)

Q(ENODEV)

Q(ENOENT)

Q(ENOMEM)

Q(EOFError)

Q(EOFError)

Q(EPERM)

Q(EVEN)

Q(EVEN)

Q(EYE_CORNERS)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(FileIO)

Q(FileIO)

Q(Flash)

Q(GeneratorExit)

Q(GeneratorExit)

Q(I2C)

Q(I2C)

Q(I2C)

Q(INPUT)

Q(INPUT)

Q(ImportError)

Q(ImportError)

Q(IncrementalEncoder)

Q(IncrementalEncoder)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LookupError)

Q(LookupError)

Q(MISO)

Q(MISO)

Q(MOSI)

Q(MOSI)

Q(MemoryError)

Q(MemoryError)

Q(MpyError)

Q(MpyError)

Q(NORMAL)

Q(NORMAL)

Q(NameError)

Q(NameError)

Q(NoneType)

Q(NotImplementedError)

Q(NotImplementedError)

Q(ODD)

Q(ODD)

Q(OPEN_DRAIN)

Q(OPEN_DRAIN)

Q(OSC32K)

Q(OSC32K)

Q(OSError)

Q(OSError)

Q(OUTPUT)

Q(OUTPUT)

Q(OneWire)

Q(OneWire)

Q(OneWire)

Q(OverflowError)

Q(OverflowError)

Q(PA00)

Q(PA01)

Q(PA02)

Q(PA05)

Q(PA06)

Q(PA07)

Q(PA08)

Q(PA09)

Q(PA10)

Q(PAWS)

Q(PUSH_PULL)

Q(PUSH_PULL)

Q(PWMOut)

Q(PWMOut)

Q(Parity)

Q(Parity)

Q(Parity)

Q(Pin)

Q(Pin)

Q(PortIn)

Q(PortIn)

Q(PortOut)

Q(PortOut)

Q(Processor)

Q(Processor)

Q(Pull)

Q(Pull)

Q(Pull)

Q(PulseIn)

Q(PulseIn)

Q(PulseOut)

Q(PulseOut)

Q(RTC)

Q(RTC)

Q(RTC)

Q(RTC)

Q(RX)

Q(ReloadException)

Q(ReloadException)

Q(RunMode)

Q(RunMode)

Q(RunMode)

Q(Runtime)

Q(RuntimeError)

Q(RuntimeError)

Q(SAFE_MODE)

Q(SAFE_MODE)

Q(SCK)

Q(SCL)

Q(SDA)

Q(SPI)

Q(SPI)

Q(SPI)

Q(StopIteration)

Q(StopIteration)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(TAIL1)

Q(TAIL2)

Q(TX)

Q(TextIOWrapper)

Q(TimeoutError)

Q(TouchIn)

Q(TouchIn)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UP)

Q(UP)

Q(UnicodeError)

Q(UnicodeError)

Q(ValueError)

Q(ValueError)

Q(VfsFat)

Q(VfsFat)

Q(XOSC32K)

Q(XOSC32K)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(__add__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__bytes__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__module__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__qualname__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__set__)

Q(__set__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(abs)

Q(acos)

Q(add)

Q(address)

Q(address)

Q(address)

Q(all)

Q(analogio)

Q(analogio)

Q(any)

Q(append)

Q(append)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(array)

Q(array)

Q(asin)

Q(atan)

Q(atan2)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(bin)

Q(bits)

Q(bits)

Q(board)

Q(board)

Q(bool)

Q(bool)

Q(bound_method)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffer_in)

Q(buffer_out)

Q(buffering)

Q(builtins)

Q(builtins)

Q(busio)

Q(busio)

Q(busio)

Q(bytearray)

Q(bytearray)

Q(bytecode)

Q(byteorder)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(calcsize)

Q(calibration)

Q(calibration)

Q(callable)

Q(ceil)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(choice)

Q(chr)

Q(circuitpython)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clock)

Q(clock)

Q(clock)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(closure)

Q(collect)

Q(collections)

Q(collections)

Q(configure)

Q(const)

Q(const)

Q(copy)

Q(copy)

Q(copy)

Q(copysign)

Q(cos)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(cpu)

Q(cts)

Q(datetime)

Q(datetime)

Q(default)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delay_us)

Q(deleter)

Q(devices)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference_update)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(digitalio)

Q(dir)

Q(direction)

Q(disable)

Q(disable_autoreload)

Q(disable_concurrent_write_protection)

Q(disable_interrupts)

Q(discard)

Q(divmod)

Q(doc)

Q(drive_mode)

Q(drive_mode)

Q(duty_cycle)

Q(duty_cycle)

Q(e)

Q(enable)

Q(enable_autoreload)

Q(enable_interrupts)

Q(enabled)

Q(encoding)

Q(encoding)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(erase_filesystem)

Q(eval)

Q(exec)

Q(exit)

Q(exp)

Q(extend)

Q(extend)

Q(fabs)

Q(file)

Q(file)

Q(filter)

Q(filter)

Q(find)

Q(find)

Q(float)

Q(float)

Q(floor)

Q(flush)

Q(flush)

Q(fmod)

Q(format)

Q(format)

Q(format)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frequency)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getmount)

Q(getrandbits)

Q(getter)

Q(globals)

Q(hasattr)

Q(hash)

Q(heap_lock)

Q(heap_unlock)

Q(help)

Q(help)

Q(hex)

Q(id)

Q(idle_state)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(implementation)

Q(in_buffer)

Q(in_end)

Q(in_end)

Q(in_start)

Q(in_start)

Q(in_waiting)

Q(index)

Q(index)

Q(index)

Q(index)

Q(indices)

Q(input)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(intersection)

Q(intersection_update)

Q(ioctl)

Q(ioctl)

Q(isalpha)

Q(isalpha)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(iter)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(join)

Q(join)

Q(kbd_intr)

Q(key)

Q(key)

Q(keys)

Q(keys)

Q(label)

Q(ldexp)

Q(len)

Q(length)

Q(list)

Q(list)

Q(listdir)

Q(little)

Q(little)

Q(little)

Q(locals)

Q(log)

Q(lower)

Q(lower)

Q(lstrip)

Q(lstrip)

Q(machine)

Q(map)

Q(map)

Q(math)

Q(math)

Q(max)

Q(maxlen)

Q(maxlen)

Q(maxsize)

Q(mem_alloc)

Q(mem_free)

Q(memoryview)

Q(memoryview)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(microcontroller)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mode)

Q(mode)

Q(modf)

Q(module)

Q(modules)

Q(modules)

Q(monotonic)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(name)

Q(namedtuple)

Q(native)

Q(neopixel_write)

Q(neopixel_write)

Q(neopixel_write)

Q(next)

Q(nodename)

Q(nvm)

Q(nvm)

Q(object)

Q(object)

Q(oct)

Q(offset)

Q(on_next_reset)

Q(open)

Q(open)

Q(open)

Q(opt_level)

Q(ord)

Q(os)

Q(os)

Q(out_buffer)

Q(out_end)

Q(out_end)

Q(out_start)

Q(out_start)

Q(pack)

Q(pack_into)

Q(parent)

Q(parity)

Q(path)

Q(pause)

Q(paused)

Q(pend_throw)

Q(phase)

Q(pi)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin)

Q(pin_a)

Q(pin_b)

Q(platform)

Q(polarity)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(popleft)

Q(ports)

Q(ports)

Q(position)

Q(pow)

Q(pow)

Q(print)

Q(print_exception)

Q(property)

Q(property)

Q(protocol_pin)

Q(protocol_pin)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_stream)

Q(protocol_vfs)

Q(protocol_vfs)

Q(pull)

Q(pull)

Q(pulseio)

Q(pulseio)

Q(r)

Q(r)

Q(radians)

Q(randint)

Q(random)

Q(random)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(raw_value)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_bit)

Q(read_bit)

Q(readblocks)

Q(readblocks)

Q(readfrom_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readonly)

Q(readonly)

Q(readonly)

Q(receiver_buffer_size)

Q(reference_voltage)

Q(release)

Q(reload)

Q(remount)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(rename)

Q(rename)

Q(rename)

Q(rename)

Q(replace)

Q(replace)

Q(repr)

Q(reset)

Q(reset)

Q(reset)

Q(reset_input_buffer)

Q(resume)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rotaryio)

Q(rotaryio)

Q(round)

Q(rs485_dir)

Q(rs485_invert)

Q(rsplit)

Q(rsplit)

Q(rstrip)

Q(rstrip)

Q(rtc)

Q(rtc)

Q(rts)

Q(runtime)

Q(rx)

Q(samd)

Q(samd)

Q(scan)

Q(scl)

Q(sda)

Q(seed)

Q(seek)

Q(send)

Q(send)

Q(send)

Q(send_report)

Q(sep)

Q(sep)

Q(serial_bytes_available)

Q(serial_connected)

Q(set)

Q(set)

Q(set_next_stack_limit)

Q(set_rgb_status_brightness)

Q(set_time_source)

Q(setattr)

Q(setdefault)

Q(setter)

Q(signed)

Q(sin)

Q(sleep)

Q(slice)

Q(slice)

Q(sort)

Q(sorted)

Q(split)

Q(split)

Q(sqrt)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(startswith)

Q(startswith)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(staticmethod)

Q(staticmethod)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(storage)

Q(storage)

Q(str)

Q(str)

Q(str)

Q(str)

Q(strip)

Q(strip)

Q(struct)

Q(struct)

Q(struct_time)

Q(struct_time)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(supervisor)

Q(supervisor)

Q(switch_to_input)

Q(switch_to_output)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sync)

Q(sys)

Q(sys)

Q(sysname)

Q(tan)

Q(tell)

Q(temperature)

Q(threshold)

Q(throw)

Q(throw)

Q(time)

Q(time)

Q(timeout)

Q(timeout)

Q(timeout)

Q(tm_hour)

Q(tm_isdst)

Q(tm_mday)

Q(tm_min)

Q(tm_mon)

Q(tm_sec)

Q(tm_wday)

Q(tm_yday)

Q(tm_year)

Q(to_bytes)

Q(touchio)

Q(touchio)

Q(trigger_duration)

Q(trunc)

Q(try_lock)

Q(try_lock)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tx)

Q(type)

Q(type)

Q(uid)

Q(umount)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(uniform)

Q(union)

Q(unlink)

Q(unlock)

Q(unlock)

Q(unpack)

Q(unpack_from)

Q(update)

Q(update)

Q(upper)

Q(upper)

Q(urandom)

Q(usage)

Q(usage_page)

Q(usb_hid)

Q(usb_hid)

Q(usb_midi)

Q(usb_midi)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(variable_frequency)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(voltage)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_bit)

Q(write_bit)

Q(write_readinto)

Q(write_value)

Q(writeblocks)

Q(writeblocks)

Q(writeto)

Q(writeto_then_readfrom)

Q(zip)

Q(zip)

Q({_colon_#b})

TRANSLATE("  File \"%q\", line %d")

TRANSLATE(" output:\n")

TRANSLATE("%%c requires int or char")

TRANSLATE("%q in use")

TRANSLATE("%q index out of range")

TRANSLATE("%q indices must be integers, not %s")

TRANSLATE("%q() takes %d positional arguments but %d were given")

TRANSLATE("'%q' argument required")

TRANSLATE("'%s' object does not support '%q'")

TRANSLATE("'%s' object does not support item assignment")

TRANSLATE("'%s' object does not support item deletion")

TRANSLATE("'%s' object has no attribute '%q'")

TRANSLATE("'%s' object has no attribute '%q'")

TRANSLATE("'%s' object is not an iterator")

TRANSLATE("'%s' object is not an iterator")

TRANSLATE("'%s' object is not callable")

TRANSLATE("'%s' object is not callable")

TRANSLATE("'%s' object is not iterable")

TRANSLATE("'%s' object is not subscriptable")

TRANSLATE("'=' alignment not allowed in string format specifier")

TRANSLATE("'break' outside loop")

TRANSLATE("'continue' outside loop")

TRANSLATE("'return' outside function")

TRANSLATE("'yield' outside function")

TRANSLATE("*x must be assignment target")

TRANSLATE(", in %q\n")

TRANSLATE("3-arg pow() not supported")

TRANSLATE("A hardware interrupt channel is already in use")

TRANSLATE("All timers for this pin are in use")

TRANSLATE("All timers in use")

TRANSLATE("All timers in use")

TRANSLATE("AnalogOut is only 16 bits. Value must be less than 65536.")

TRANSLATE("AnalogOut not supported on given pin")

TRANSLATE("Another send is already active")

TRANSLATE("Array must contain halfwords (type 'H')")

TRANSLATE("Array values should be single bytes.")

TRANSLATE("Attempted heap allocation when MicroPython VM not running.")

TRANSLATE("Auto-reload is off.\n")

TRANSLATE("Auto-reload is off.\n")

TRANSLATE("Auto-reload is on. Simply save files over USB to run them or enter REPL to disable.\n")

TRANSLATE("Auto-reload is on. Simply save files over USB to run them or enter REPL to disable.\n")

TRANSLATE("Both pins must support hardware interrupts")

TRANSLATE("Brightness must be between 0 and 255")

TRANSLATE("Buffer incorrect size. Should be %d bytes.")

TRANSLATE("Buffer must be at least length 1")

TRANSLATE("Bytes must be between 0 and 255.")

TRANSLATE("Call super().__init__() before accessing native object.")

TRANSLATE("Cannot delete values")

TRANSLATE("Cannot get pull while in output mode")

TRANSLATE("Cannot remount '/' when USB is active.")

TRANSLATE("Cannot reset into bootloader because no bootloader is present.")

TRANSLATE("Cannot set value when direction is input.")

TRANSLATE("Cannot subclass slice")

TRANSLATE("CircuitPython core code crashed hard. Whoops!\n")

TRANSLATE("CircuitPython is in safe mode because you pressed the reset button during boot. Press again to exit safe mode.\n")

TRANSLATE("Corrupt .mpy file")

TRANSLATE("Corrupt raw code")

TRANSLATE("Could not initialize UART")

TRANSLATE("Crash into the HardFault_Handler.")

TRANSLATE("Drive mode not used when direction is input.")

TRANSLATE("Drive mode not used when direction is input.")

TRANSLATE("EXTINT channel already in use")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Expected a %q")

TRANSLATE("Failed to allocate RX buffer of %d bytes")

TRANSLATE("Failed to allocate RX buffer of %d bytes")

TRANSLATE("Failed to write internal flash.")

TRANSLATE("File exists")

TRANSLATE("Function requires lock")

TRANSLATE("Function requires lock")

TRANSLATE("Incompatible .mpy file. Please update all .mpy files. See http://adafru.it/mpy-update for more info.")

TRANSLATE("Input/output error")

TRANSLATE("Invalid PWM frequency")

TRANSLATE("Invalid PWM frequency")

TRANSLATE("Invalid argument")

TRANSLATE("Invalid direction.")

TRANSLATE("Invalid memory access.")

TRANSLATE("Invalid number of bits")

TRANSLATE("Invalid phase")

TRANSLATE("Invalid pin")

TRANSLATE("Invalid pin")

TRANSLATE("Invalid pins")

TRANSLATE("Invalid pins")

TRANSLATE("Invalid pins")

TRANSLATE("Invalid polarity")

TRANSLATE("Invalid run mode.")

TRANSLATE("LHS of keyword arg must be an id")

TRANSLATE("Length must be an int")

TRANSLATE("Length must be non-negative")

TRANSLATE("MicroPython NLR jump failed. Likely memory corruption.")

TRANSLATE("MicroPython fatal error.")

TRANSLATE("Name too long")

TRANSLATE("No RX pin")

TRANSLATE("No TX pin")

TRANSLATE("No free GCLKs")

TRANSLATE("No hardware random available")

TRANSLATE("No hardware support on pin")

TRANSLATE("No space left on device")

TRANSLATE("No such file/directory")

TRANSLATE("Nordic Soft Device failure assertion.")

TRANSLATE("Object has been deinitialized and can no longer be used. Create a new object.")

TRANSLATE("PWM duty_cycle must be between 0 and 65535 inclusive (16 bit resolution)")

TRANSLATE("Permission denied")

TRANSLATE("Permission denied")

TRANSLATE("Pin does not have ADC capabilities")

TRANSLATE("Plus any modules on the filesystem\n")

TRANSLATE("Press any key to enter the REPL. Use CTRL-D to reload.")

TRANSLATE("Pull not used when direction is output.")

TRANSLATE("Pull not used when direction is output.")

TRANSLATE("RTS/CTS/RS485 Not yet supported on this device")

TRANSLATE("Read-only filesystem")

TRANSLATE("Read-only filesystem")

TRANSLATE("Read-only")

TRANSLATE("Running in safe mode! Auto-reload is off.\n")

TRANSLATE("Running in safe mode! Not running saved code.\n")

TRANSLATE("SDA or SCL needs a pull up")

TRANSLATE("Slice and value different lengths.")

TRANSLATE("Slices not supported")

TRANSLATE("Stack size must be at least 256")

TRANSLATE("The CircuitPython heap was corrupted because the stack was too small.\nPlease increase the stack size if you know how, or if not:")

TRANSLATE("The `microcontroller` module was used to boot into safe mode. Press reset to exit safe mode.\n")

TRANSLATE("The microcontroller's power dipped. Make sure your power supply provides\nenough power for the whole circuit and press reset (after ejecting CIRCUITPY).\n")

TRANSLATE("Traceback (most recent call last):\n")

TRANSLATE("Tuple or struct_time argument required")

TRANSLATE("USB Busy")

TRANSLATE("USB Error")

TRANSLATE("Unable to init parser")

TRANSLATE("Unable to write to nvm.")

TRANSLATE("Unable to write to nvm.")

TRANSLATE("Unknown reason.")

TRANSLATE("Unsupported baudrate")

TRANSLATE("Unsupported operation")

TRANSLATE("Unsupported pull value.")

TRANSLATE("WARNING: Your code filename has two extensions\n")

TRANSLATE("Welcome to Adafruit CircuitPython %s!\n\nPlease visit learn.adafruit.com/category/circuitpython for project guides.\n\nTo list built-in modules please do `help(\"modules\")`.\n")

TRANSLATE("You are in safe mode: something unanticipated happened.\n")

TRANSLATE("\nCode done running. Waiting for reload.\n")

TRANSLATE("\nPlease file an issue with the contents of your CIRCUITPY drive at \nhttps://github.com/adafruit/circuitpython/issues\n")

TRANSLATE("\nPlease file an issue with the contents of your CIRCUITPY drive at \nhttps://github.com/adafruit/circuitpython/issues\n")

TRANSLATE("__init__() should return None")

TRANSLATE("__init__() should return None, not '%s'")

TRANSLATE("abort() called")

TRANSLATE("arg is an empty sequence")

TRANSLATE("argument num/types mismatch")

TRANSLATE("argument num/types mismatch")

TRANSLATE("array/bytes required on right side")

TRANSLATE("array/bytes required on right side")

TRANSLATE("attributes not supported yet")

TRANSLATE("bad conversion specifier")

TRANSLATE("bad typecode")

TRANSLATE("bits must be 7, 8 or 9")

TRANSLATE("buffer size must match format")

TRANSLATE("buffer slices must be of equal length")

TRANSLATE("buffer too small")

TRANSLATE("buffer too small")

TRANSLATE("buffer too small")

TRANSLATE("buffer too small")

TRANSLATE("byte code not implemented")

TRANSLATE("bytes > 8 bits not supported")

TRANSLATE("bytes value out of range")

TRANSLATE("calibration is out of range")

TRANSLATE("calibration is read only")

TRANSLATE("calibration value out of range +/-127")

TRANSLATE("can't add special method to already-subclassed class")

TRANSLATE("can't assign to expression")

TRANSLATE("can't assign to expression")

TRANSLATE("can't convert %s to float")

TRANSLATE("can't convert %s to int")

TRANSLATE("can't convert '%q' object to %q implicitly")

TRANSLATE("can't convert NaN to int")

TRANSLATE("can't convert inf to int")

TRANSLATE("can't convert to float")

TRANSLATE("can't convert to int")

TRANSLATE("can't convert to str implicitly")

TRANSLATE("can't declare nonlocal in outer code")

TRANSLATE("can't delete expression")

TRANSLATE("can't have multiple **x")

TRANSLATE("can't have multiple *x")

TRANSLATE("can't pend throw to just-started generator")

TRANSLATE("can't send non-None value to a just-started generator")

TRANSLATE("can't set attribute")

TRANSLATE("can't switch from automatic field numbering to manual field specification")

TRANSLATE("can't switch from manual field specification to automatic field numbering")

TRANSLATE("cannot create '%q' instances")

TRANSLATE("cannot create instance")

TRANSLATE("cannot import name %q")

TRANSLATE("cannot perform relative import")

TRANSLATE("chr() arg not in range(0x110000)")

TRANSLATE("complex values not supported")

TRANSLATE("complex values not supported")

TRANSLATE("constant must be an integer")

TRANSLATE("default 'except' must be last")

TRANSLATE("dict update sequence has wrong length")

TRANSLATE("division by zero")

TRANSLATE("division by zero")

TRANSLATE("division by zero")

TRANSLATE("empty separator")

TRANSLATE("empty separator")

TRANSLATE("empty sequence")

TRANSLATE("end of format while looking for conversion specifier")

TRANSLATE("exceptions must derive from BaseException")

TRANSLATE("expected ':' after format specifier")

TRANSLATE("expected tuple/list")

TRANSLATE("expecting just a value for set")

TRANSLATE("expecting key:value for dict")

TRANSLATE("extra keyword arguments given")

TRANSLATE("extra positional arguments given")

TRANSLATE("filesystem must provide mount method")

TRANSLATE("first argument to super() must be type")

TRANSLATE("float too big")

TRANSLATE("format requires a dict")

TRANSLATE("function does not take keyword arguments")

TRANSLATE("function expected at most %d arguments, got %d")

TRANSLATE("function got multiple values for argument '%q'")

TRANSLATE("function got multiple values for argument '%q'")

TRANSLATE("function missing %d required positional arguments")

TRANSLATE("function missing keyword-only argument")

TRANSLATE("function missing required keyword argument '%q'")

TRANSLATE("function missing required positional argument #%d")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes %d positional arguments but %d were given")

TRANSLATE("function takes exactly 9 arguments")

TRANSLATE("generator already executing")

TRANSLATE("generator ignored GeneratorExit")

TRANSLATE("identifier redefined as global")

TRANSLATE("identifier redefined as nonlocal")

TRANSLATE("incomplete format key")

TRANSLATE("incomplete format")

TRANSLATE("incorrect padding")

TRANSLATE("index out of range")

TRANSLATE("index out of range")

TRANSLATE("indices must be integers")

TRANSLATE("int() arg 2 must be >= 2 and <= 36")

TRANSLATE("integer required")

TRANSLATE("invalid format specifier")

TRANSLATE("invalid micropython decorator")

TRANSLATE("invalid micropython decorator")

TRANSLATE("invalid step")

TRANSLATE("invalid syntax for integer with base %d")

TRANSLATE("invalid syntax for integer")

TRANSLATE("invalid syntax for number")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("invalid syntax")

TRANSLATE("issubclass() arg 1 must be a class")

TRANSLATE("issubclass() arg 2 must be a class or a tuple of classes")

TRANSLATE("join expects a list of str/bytes objects consistent with self object")

TRANSLATE("keywords must be strings")

TRANSLATE("length argument not allowed for this type")

TRANSLATE("lhs and rhs should be compatible")

TRANSLATE("local variable referenced before assignment")

TRANSLATE("long int not supported in this build")

TRANSLATE("math domain error")

TRANSLATE("maximum recursion depth exceeded")

TRANSLATE("memory allocation failed, allocating %u bytes")

TRANSLATE("memory allocation failed, heap is locked")

TRANSLATE("module not found")

TRANSLATE("multiple *x in assignment")

TRANSLATE("multiple bases have instance lay-out conflict")

TRANSLATE("must use keyword argument for key function")

TRANSLATE("name '%q' is not defined")

TRANSLATE("name not defined")

TRANSLATE("name reused for argument")

TRANSLATE("need more than %d values to unpack")

TRANSLATE("need more than %d values to unpack")

TRANSLATE("negative shift count")

TRANSLATE("negative shift count")

TRANSLATE("no active exception to reraise")

TRANSLATE("no binding for nonlocal found")

TRANSLATE("no module named '%q'")

TRANSLATE("no such attribute")

TRANSLATE("no such attribute")

TRANSLATE("non-default argument follows default argument")

TRANSLATE("non-hex digit found")

TRANSLATE("non-keyword arg after */**")

TRANSLATE("non-keyword arg after keyword arg")

TRANSLATE("not all arguments converted during string formatting")

TRANSLATE("not enough arguments for format string")

TRANSLATE("object '%s' is not a tuple or list")

TRANSLATE("object does not support item assignment")

TRANSLATE("object does not support item deletion")

TRANSLATE("object has no len")

TRANSLATE("object is not subscriptable")

TRANSLATE("object not an iterator")

TRANSLATE("object not an iterator")

TRANSLATE("object not callable")

TRANSLATE("object not callable")

TRANSLATE("object not in sequence")

TRANSLATE("object not iterable")

TRANSLATE("object of type '%s' has no len()")

TRANSLATE("object with buffer protocol required")

TRANSLATE("odd-length string")

TRANSLATE("offset out of bounds")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("only slices with step=1 (aka None) are supported")

TRANSLATE("ord expects a character")

TRANSLATE("ord() expected a character, but string of length %d found")

TRANSLATE("pop from an empty PulseIn")

TRANSLATE("pop from an empty set")

TRANSLATE("pop from empty list")

TRANSLATE("popitem(): dictionary is empty")

TRANSLATE("requested length %d but object has length %d")

TRANSLATE("rsplit(None,n)")

TRANSLATE("sign not allowed in string format specifier")

TRANSLATE("sign not allowed with integer format specifier 'c'")

TRANSLATE("single '}' encountered in format string")

TRANSLATE("sleep length must be non-negative")

TRANSLATE("slice step cannot be zero")

TRANSLATE("slice step cannot be zero")

TRANSLATE("slice step cannot be zero")

TRANSLATE("small int overflow")

TRANSLATE("small int overflow")

TRANSLATE("small int overflow")

TRANSLATE("small int overflow")

TRANSLATE("small int overflow")

TRANSLATE("soft reboot\n")

TRANSLATE("start/end indices")

TRANSLATE("step must be non-zero")

TRANSLATE("stop must be 1 or 2")

TRANSLATE("stop not reachable from start")

TRANSLATE("stop not reachable from start")

TRANSLATE("stream operation not supported")

TRANSLATE("string index out of range")

TRANSLATE("string index out of range")

TRANSLATE("string indices must be integers, not %s")

TRANSLATE("string not supported; use bytes or bytearray")

TRANSLATE("substring not found")

TRANSLATE("super() can't find self")

TRANSLATE("threshold must be in the range 0-65536")

TRANSLATE("time.struct_time() takes a 9-sequence")

TRANSLATE("timeout must be 0.0-100.0 seconds")

TRANSLATE("too many arguments provided with the given format")

TRANSLATE("too many values to unpack (expected %d)")

TRANSLATE("tuple index out of range")

TRANSLATE("tuple index out of range")

TRANSLATE("tuple/list has wrong length")

TRANSLATE("tx and rx cannot both be None")

TRANSLATE("tx and rx cannot both be None")

TRANSLATE("type '%q' is not an acceptable base type")

TRANSLATE("type is not an acceptable base type")

TRANSLATE("type is not an acceptable base type")

TRANSLATE("type object '%q' has no attribute '%q'")

TRANSLATE("type takes 1 or 3 arguments")

TRANSLATE("unexpected indent")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unexpected keyword argument '%q'")

TRANSLATE("unicode name escapes")

TRANSLATE("unindent does not match any outer indentation level")

TRANSLATE("unknown conversion specifier %c")

TRANSLATE("unknown format code '%c' for object of type '%s'")

TRANSLATE("unknown format code '%c' for object of type '%s'")

TRANSLATE("unknown format code '%c' for object of type '%s'")

TRANSLATE("unmatched '{' in format")

TRANSLATE("unreadable attribute")

TRANSLATE("unreadable attribute")

TRANSLATE("unreadable attribute")

TRANSLATE("unsupported format character '%c' (0x%x) at index %d")

TRANSLATE("unsupported type for %q: '%s'")

TRANSLATE("unsupported type for operator")

TRANSLATE("unsupported type for operator")

TRANSLATE("unsupported types for %q: '%s', '%s'")

TRANSLATE("value must fit in %d byte(s)")

TRANSLATE("wrong number of arguments")

TRANSLATE("wrong number of values to unpack")

TRANSLATE("wrong number of values to unpack")

TRANSLATE("wrong number of values to unpack")

TRANSLATE("zero step")
