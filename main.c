//RCC Address 

#define     RCC_BASE            0x40021000
#define     RCC_OFFSET          0x00
#define     RCC_CFGR_OFFSET     0x08
#define     RCC_CIER_OFFSET     0x18        //Clock interrupt enable register 
#define     RCC_AHB1RSTR_OFFSET 0x28        //AHB1 peripheral reset register
#define     RCC_AHB2ENR_OFFSET  0x4C        //AHB2 peripheral clock enable register
#define     RCC_APB1ENR1_OFFSET 0x58        //APB1 peripheral clock enable register 1
#define     RCC_APB1ENR2_OFFSET 0x5C        //APB1 peripheral clock enable register 2
#define     RCC_APB2ENR_OFFSET  0x60        //APB2 peripheral clock enable register
#define     RCC_CCIPR1_OFFSET   0x88        //Peripherals independent clock configuration register 1
#define     RCC_CSR_OFFSET      0x94        //Control Status Register
#define     RCC_CRRCR_OFFSET    0x98        //Clock recovery RC register
#define     RCC_CCIPR2_OFFSET   0x9c        //Peripherals independent clock configuration register 2



//SPI Address

#define     SPI_1_BASE          0x40013000  //Base Address Of SPI 1
#define     SPI_2_BASE          0x40003800  //Base Address Of SPI 2
#define     SPI_3_BASE          0x40003C00  //Base Address Of SPI 3
#define     

//GPIO Address


#define     GPIO_D_BASE         0x48000C00
#define     GPIO_B_BASE         0x48000400 
#define     




//systick Address
#define STK_CTRL        0xE000E010
#define STK_LOAD        0xE000E014
#define STK_VAL         0xE000E018
#define STK_CALIB       0xE000E01C
#define REG(x)          (*(unsigned int *)x)


//Main Program Starts From Here

int main(){








}

//Write Function And Handlers Here...

void SysTick_Handler(){         //This Is SysTick Handller Wrie The ISR here.... What You Wnat to Do Here!!!!







}







