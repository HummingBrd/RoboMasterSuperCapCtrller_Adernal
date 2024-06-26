#include "Display.h"
#include "led.h"
#include "Mode.h"

uint8_t Display_NomadLogo[512] = 
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFE,0xF0,0xE0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x3E,0xFE,0xFC,0xF0,0xE0,0xC0,0xC0,0x80,0x80,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFE,0xF8,0xF0,0xC0,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x1F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF8,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,
0x3F,0x3F,0x3F,0x3F,0x1F,0x0F,0x07,0x03,0x03,0x03,0x07,0x1F,0xFF,0xFF,0xFE,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0x81,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x0F,0x0F,0x0F,0x1F,0x1E,0x1E,
0x0E,0x0E,0x06,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

/**
  ************************************************************************** 
  ** @name          : Display_BootUpInterface
  ** @brief         : Displaying the start-up screen
  ** @param         : void
  ** @retval        : void
  ************************************************************************** 
**/
void Display_BootUpInterface(void)
{
	OLED_ShowString(0, 0, "Welcome to use");
	OLED_ShowString(0, 2, "SuperCapCtrller");
	OLED_ShowString(40, 4, "Adernal");
	OLED_ShowString(32, 6, "Power By");
}

void Display_LogoInterface(void)
{
	OLED_DrawBMP(32, 0, 95, 7, Display_NomadLogo);
}

/**
  ************************************************************************** 
  ** @name          : Display_PrepareInterface
  ** @brief         : Framework for displaying work interfaces
  ** @param         : void
  ** @retval        : void
  ************************************************************************** 
**/
void Display_PrepareInterface(void)
{
	OLED_ShowString(0, 0, "Vcap:");
	OLED_ShowString(0, 2, "Mode:");
	OLED_ShowString(0, 4, "Exceed:");
}

/**
  ************************************************************************** 
  ** @name          : Display_PrepareInterface
  ** @brief         : Displays the current capacitor bank voltage
  ** @param         : void
  ** @retval        : void
  ************************************************************************** 
**/
CCMRAM void Display_Vcap_DataUpdateInterface(float Vcap)
{
	uint8_t Vcap_DisplayChar[5];
	uint8_t Vcap_Handler = (uint8_t)(Vcap*10);
	
	Vcap_DisplayChar[0] = (Vcap_Handler/100)+'0';
	Vcap_Handler %= 100;
	Vcap_DisplayChar[1] = (Vcap_Handler/10)+'0';
	Vcap_DisplayChar[2] = '.';
	Vcap_DisplayChar[3] = (Vcap_Handler%10)+'0';
	Vcap_DisplayChar[4] = '\0';
	
	OLED_ShowString(40, 0, Vcap_DisplayChar);
}

/**
  ************************************************************************** 
  ** @name          : Display_Mode_DataUpdateInterface
  ** @brief         : Displays the current operating mode
  ** @param         : void
  ** @retval        : void
  ************************************************************************** 
**/
CCMRAM void Display_Mode_DataUpdateInterface(uint8_t Mode)
{
	switch(Mode)
	{
		case Silent:
		{
			OLED_ShowString(40, 2, "Silent");
		}
		break;
		case Work:
		{
			OLED_ShowString(40, 2, " Work ");
		}
		break;
		case Charge:
		{
			OLED_ShowString(40, 2, "Charge");
		}
		break;
		default:;
	}
}

/**
  ************************************************************************** 
  ** @name          : Display_Mode_DataUpdateInterface
  ** @brief         : Displays the Exceed on or not.
  ** @param         : void
  ** @retval        : void
  ************************************************************************** 
**/
CCMRAM void Display_Exceed_DataUpdateInterface(uint8_t ExceedGet)
{
	switch(ExceedGet)
	{
		case 0x00:
		{
			OLED_ShowString(56, 4, "OFF");
		}
		break;
		case 0x01:
		{
			OLED_ShowString(56, 4, "ON ");
		}
		break;
		default:;
	}
}

/**
  ************************************************************************** 
  ** @name          : Display_Mode_DataUpdateInterface
  ** @brief         : Displays the current Safety state.
	** @param         : void
  ** @retval        : void
  ************************************************************************** 
**/
uint8_t InterfaceCode[8] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
CCMRAM void Display_SafetyCode_DataUpdateInterface(uint8_t *SafetyCode)
{
	uint8_t i;
	for(i=0; i<8; i++)
	{
		if(InterfaceCode[i] != SafetyCode[i])
		{
			InterfaceCode[i] = SafetyCode[i];
			
			OLED_ShowChar(16*i, 6, InterfaceCode[i]+'0');
		}
	}
}

