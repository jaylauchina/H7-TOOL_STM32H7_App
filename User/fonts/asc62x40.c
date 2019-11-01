/*
*********************************************************************************************************
*
*    模块名称 : ASCII点阵字库。高62宽40
*    文件名称 : asc62x40.c
*    版    本 : V1.0
*    说    明 : 只包含本程序用到汉字字库
*    修改记录 :
*        版本号  日期        作者    说明
*        v1.0    2017-07-04 armfly  用于长体数字，0-9，XYZUV,小数点，度分秒
*
*    Copyright (C), 2010-2011, 安富莱电子 www.armfly.com
*
*********************************************************************************************************
*/


/*
    FLASH中内嵌小字库，只包括本程序用到的汉字点阵
    每行点阵数据，头2字节是汉子的内码，后面32字节是24点阵汉子的字模数据。
*/

unsigned char const g_Ascii62x40[] = 
{
0x5E,    // " //
    0X03,0XFF,0X8F,0XFE,0X00,0X03,0XFF,0X8F,0XFE,0X00,0X03,0XFF,0X8F,0XFE,0X00,0X03,
    0XFF,0X8F,0XFE,0X00,0X03,0XFF,0X8F,0XFE,0X00,0X03,0XFF,0X0F,0XFC,0X00,0X01,0XFF,
    0X07,0XFC,0X00,0X01,0XFF,0X07,0XFC,0X00,0X01,0XFF,0X07,0XFC,0X00,0X01,0XFF,0X07,
    0XFC,0X00,0X01,0XFF,0X07,0XFC,0X00,0X00,0XFE,0X03,0XF8,0X00,0X00,0XFE,0X03,0XF8,
    0X00,0X00,0XFE,0X03,0XF8,0X00,0X00,0XFE,0X03,0XF8,0X00,0X00,0XFE,0X03,0XF8,0X00,
    0X00,0XFE,0X03,0XF8,0X00,0X00,0X7C,0X01,0XF0,0X00,0X00,0X7C,0X01,0XF0,0X00,0X00,
    0X7C,0X01,0XF0,0X00,0X00,0X7C,0X01,0XF0,0X00,0X00,0X7C,0X01,0XF0,0X00,0X00,0X7C,
    0X01,0XF0,0X00,0X00,0X38,0X00,0XE0,0X00,0X00,0X38,0X00,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,

      
0x27,    // ' //
    0X03,0XFF,0X80,0X00,0X00,0X03,0XFF,0X80,0X00,0X00,0X03,0XFF,0X80,0X00,0X00,0X03,
    0XFF,0X80,0X00,0X00,0X03,0XFF,0X80,0X00,0X00,0X03,0XFF,0X00,0X00,0X00,0X01,0XFF,
    0X00,0X00,0X00,0X01,0XFF,0X00,0X00,0X00,0X01,0XFF,0X00,0X00,0X00,0X01,0XFF,0X00,
    0X00,0X00,0X01,0XFF,0X00,0X00,0X00,0X00,0XFE,0X00,0X00,0X00,0X00,0XFE,0X00,0X00,
    0X00,0X00,0XFE,0X00,0X00,0X00,0X00,0XFE,0X00,0X00,0X00,0X00,0XFE,0X00,0X00,0X00,
    0X00,0XFE,0X00,0X00,0X00,0X00,0X7C,0X00,0X00,0X00,0X00,0X7C,0X00,0X00,0X00,0X00,
    0X7C,0X00,0X00,0X00,0X00,0X7C,0X00,0X00,0X00,0X00,0X7C,0X00,0X00,0X00,0X00,0X7C,
    0X00,0X00,0X00,0X00,0X38,0X00,0X00,0X00,0X00,0X38,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,

      
0x2D,    // - //
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,
    0X80,0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,
    0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X01,
    0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,

      
0x2E,    // . //
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,
    0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,
    0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,
    0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,
    0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF8,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,

      
0x30,    // 0 //
    0X00,0X03,0XFF,0X00,0X00,0X00,0X7F,0XFF,0XF8,0X00,0X01,0XFF,0XFF,0XFE,0X00,0X07,
    0XFF,0XFF,0XFF,0X80,0X0F,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,
    0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,
    0XFF,0XFC,0X7F,0XFF,0X83,0XFF,0XFC,0XFF,0XFF,0X01,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,
    0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,
    0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,
    0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,
    0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,
    0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,
    0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,
    0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,
    0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,
    0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,
    0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,
    0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,
    0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XFE,0X7F,
    0XFF,0X01,0XFF,0XFC,0X7F,0XFF,0X83,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,
    0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,
    0XFF,0XE0,0X07,0XFF,0XFF,0XFF,0XC0,0X01,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,0XFC,
    0X00,0X00,0X03,0XFF,0XC0,0X00,

      
0x31,    // 1 //
    0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X0F,0XFF,0XF0,0X00,0X00,
    0X0F,0XFF,0XF0,0X00,0X00,0X1F,0XFF,0XF0,0X00,0X00,0X1F,0XFF,0XF0,0X00,0X00,0X3F,
    0XFF,0XF0,0X00,0X00,0X7F,0XFF,0XF0,0X00,0X00,0XFF,0XFF,0XF0,0X00,0X03,0XFF,0XFF,
    0XF0,0X00,0X0F,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFF,0XF0,
    0X00,0X0F,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFF,0XF0,0X00,
    0X0F,0XFF,0XFF,0XF0,0X00,0X0F,0XF7,0XFF,0XF0,0X00,0X0F,0XC7,0XFF,0XF0,0X00,0X0F,
    0X07,0XFF,0XF0,0X00,0X08,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,
    0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,
    0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,
    0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,
    0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,
    0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,
    0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,
    0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,
    0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,
    0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,
    0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,
    0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,
    0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,
    0X00,0X00,0X00,0X00,0X00,0X00,

      
0x32,    // 2 //
    0X00,0X03,0XFF,0X80,0X00,0X00,0X3F,0XFF,0XF8,0X00,0X01,0XFF,0XFF,0XFE,0X00,0X03,
    0XFF,0XFF,0XFF,0X80,0X0F,0XFF,0XFF,0XFF,0XC0,0X1F,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,
    0XFF,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XFF,
    0XFF,0XFC,0X7F,0XFF,0X83,0XFF,0XFC,0XFF,0XFF,0X03,0XFF,0XFC,0XFF,0XFE,0X01,0XFF,
    0XFC,0XFF,0XFE,0X01,0XFF,0XFC,0XFF,0XFE,0X01,0XFF,0XFC,0XFF,0XFE,0X01,0XFF,0XFC,
    0XFF,0XFE,0X01,0XFF,0XFE,0XFF,0XFE,0X01,0XFF,0XFE,0XFF,0XFE,0X01,0XFF,0XFE,0XFF,
    0XFE,0X01,0XFF,0XFE,0XFF,0XFE,0X01,0XFF,0XFC,0XFF,0XFE,0X01,0XFF,0XFC,0XFF,0XFE,
    0X01,0XFF,0XFC,0XFF,0XFE,0X03,0XFF,0XFC,0X00,0X00,0X03,0XFF,0XFC,0X00,0X00,0X07,
    0XFF,0XFC,0X00,0X00,0X0F,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XF8,0X00,0X00,0X3F,0XFF,
    0XF0,0X00,0X00,0X7F,0XFF,0XE0,0X00,0X00,0XFF,0XFF,0XE0,0X00,0X01,0XFF,0XFF,0XC0,
    0X00,0X03,0XFF,0XFF,0X80,0X00,0X07,0XFF,0XFF,0X00,0X00,0X0F,0XFF,0XFE,0X00,0X00,
    0X1F,0XFF,0XFC,0X00,0X00,0X3F,0XFF,0XF8,0X00,0X00,0X7F,0XFF,0XF0,0X00,0X00,0XFF,
    0XFF,0XE0,0X00,0X01,0XFF,0XFF,0XC0,0X00,0X03,0XFF,0XFF,0X00,0X00,0X07,0XFF,0XFE,
    0X00,0X00,0X0F,0XFF,0XFC,0X00,0X00,0X1F,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XF0,0X00,
    0X00,0X3F,0XFF,0XF0,0X00,0X00,0X3F,0XFF,0XE0,0X00,0X00,0X7F,0XFF,0XC0,0X00,0X00,
    0X7F,0XFF,0XC0,0X00,0X00,0X7F,0XFF,0XC0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,
    0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,
    0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,
    0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,
    0XFE,0X00,0X00,0X00,0X00,0X00,

      
0x33,    // 3 //
    0X00,0X03,0XFF,0XC0,0X00,0X00,0X3F,0XFF,0XFC,0X00,0X00,0XFF,0XFF,0XFF,0X00,0X03,
    0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0XFF,0XFF,0XE0,0X0F,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,
    0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,
    0XFF,0XFC,0X7F,0XFF,0X83,0XFF,0XFE,0X7F,0XFF,0X01,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,
    0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,
    0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X00,
    0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,
    0X00,0XFF,0XFC,0X00,0X00,0X01,0XFF,0XFC,0X00,0X03,0XFF,0XFF,0XF8,0X00,0X03,0XFF,
    0XFF,0XF8,0X00,0X03,0XFF,0XFF,0XF0,0X00,0X03,0XFF,0XFF,0XE0,0X00,0X03,0XFF,0XFF,
    0X80,0X00,0X03,0XFF,0XFF,0X80,0X00,0X03,0XFF,0XFF,0XE0,0X00,0X03,0XFF,0XFF,0XF8,
    0X00,0X03,0XFF,0XFF,0XFC,0X00,0X03,0XFF,0XFF,0XFC,0X00,0X03,0XFF,0XFF,0XFC,0X00,
    0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,
    0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0XFF,0XFF,0X00,
    0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,
    0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,
    0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X81,0XFF,0XFE,0XFF,
    0XFF,0XC3,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,
    0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,
    0XFF,0XE0,0X07,0XFF,0XFF,0XFF,0X80,0X03,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XF8,
    0X00,0X00,0X0F,0XFF,0X80,0X00,

      
0x34,     // 4 //
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XC0,0X00,0X00,0X7F,0XFF,0XC0,0X00,
    0X00,0XFF,0XFF,0XC0,0X00,0X00,0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFF,0XC0,0X00,0X01,
    0XFF,0XFF,0XC0,0X00,0X03,0XFF,0XFF,0XC0,0X00,0X03,0XFF,0XFF,0XC0,0X00,0X07,0XFF,
    0XFF,0XC0,0X00,0X07,0XFF,0XFF,0XC0,0X00,0X0F,0XFF,0XFF,0XC0,0X00,0X0F,0XFF,0XFF,
    0XC0,0X00,0X1F,0XFF,0XFF,0XC0,0X00,0X1F,0XFF,0XFF,0XC0,0X00,0X3F,0XFF,0XFF,0XC0,
    0X00,0X3F,0XFF,0XFF,0XC0,0X00,0X7F,0XEF,0XFF,0XC0,0X00,0X7F,0XEF,0XFF,0XC0,0X00,
    0XFF,0XCF,0XFF,0XC0,0X00,0XFF,0XCF,0XFF,0XC0,0X01,0XFF,0X8F,0XFF,0XC0,0X01,0XFF,
    0X8F,0XFF,0XC0,0X03,0XFF,0X0F,0XFF,0XC0,0X03,0XFF,0X0F,0XFF,0XC0,0X07,0XFE,0X0F,
    0XFF,0XC0,0X07,0XFE,0X0F,0XFF,0XC0,0X0F,0XFE,0X0F,0XFF,0XC0,0X0F,0XFC,0X0F,0XFF,
    0XC0,0X0F,0XFC,0X0F,0XFF,0XC0,0X1F,0XF8,0X0F,0XFF,0XC0,0X1F,0XF8,0X0F,0XFF,0XC0,
    0X3F,0XF0,0X0F,0XFF,0XC0,0X3F,0XF0,0X0F,0XFF,0XC0,0X7F,0XE0,0X0F,0XFF,0XC0,0X7F,
    0XE0,0X0F,0XFF,0XC0,0XFF,0XC0,0X0F,0XFF,0XC0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,
    0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,
    0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,
    0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,
    0XC0,0X00,0X00,0X00,0X00,0X00,

      
0x35,    // 5 //
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,
    0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,
    0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,
    0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0X00,0X00,
    0X00,0X3F,0XFF,0X00,0X00,0X00,0X3F,0XFF,0X00,0X00,0X00,0X3F,0XFF,0X00,0X00,0X00,
    0X3F,0XFF,0X00,0X00,0X00,0X3F,0XFF,0X00,0X00,0X00,0X3F,0XFF,0X00,0X00,0X00,0X3F,
    0XFF,0X00,0X00,0X00,0X3F,0XFF,0X00,0X00,0X00,0X3F,0XFF,0X01,0XFC,0X00,0X3F,0XFF,
    0X0F,0XFF,0X00,0X3F,0XFF,0X1F,0XFF,0XC0,0X3F,0XFF,0X7F,0XFF,0XE0,0X3F,0XFF,0X7F,
    0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,
    0XFC,0X3F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XC1,0XFF,0XFE,
    0X3F,0XFF,0X80,0XFF,0XFE,0X3F,0XFF,0X00,0XFF,0XFE,0X3F,0XFF,0X00,0XFF,0XFE,0X00,
    0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,
    0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,
    0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,
    0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,
    0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0X7F,
    0XFF,0X80,0XFF,0XFC,0X7F,0XFF,0XC3,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,
    0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,
    0XFF,0XE0,0X07,0XFF,0XFF,0XFF,0XC0,0X01,0XFF,0XFF,0XFF,0X00,0X00,0X7F,0XFF,0XFC,
    0X00,0X00,0X03,0XFF,0XC0,0X00,

      
0x36,    // 6 //
    0X00,0X03,0XFF,0X80,0X00,0X00,0X3F,0XFF,0XFC,0X00,0X00,0XFF,0XFF,0XFF,0X00,0X03,
    0XFF,0XFF,0XFF,0XC0,0X0F,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,
    0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,
    0XFF,0XFC,0X7F,0XFF,0X83,0XFF,0XFC,0X7F,0XFF,0X01,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,
    0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,
    0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,
    0XFF,0X00,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,
    0X00,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0X03,0XFE,0X00,0XFF,0XFF,0X1F,
    0XFF,0XC0,0XFF,0XFF,0X3F,0XFF,0XE0,0XFF,0XFF,0X7F,0XFF,0XF8,0XFF,0XFF,0XFF,0XFF,
    0XFC,0XFF,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,
    0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0X83,0XFF,0XFF,0XFF,0XFF,0X01,0XFF,0XFF,0XFF,
    0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,
    0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,
    0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,
    0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,
    0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,
    0XFF,0X01,0XFF,0XFE,0X7F,0XFF,0X83,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,
    0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XF0,0X07,0XFF,0XFF,
    0XFF,0XE0,0X03,0XFF,0XFF,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,0X00,0X00,0X1F,0XFF,0XFC,
    0X00,0X00,0X03,0XFF,0XC0,0X00,

      
0x37,    // 7 //
    0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,
    0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,
    0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,
    0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XF0,0X00,0XFF,
    0XFE,0XFF,0XF0,0X00,0XFF,0XFC,0XFF,0XF0,0X01,0XFF,0XFC,0XFF,0XF0,0X01,0XFF,0XF8,
    0XFF,0XF0,0X03,0XFF,0XF0,0XFF,0XF0,0X07,0XFF,0XF0,0XFF,0XF0,0X07,0XFF,0XE0,0X00,
    0X00,0X0F,0XFF,0XE0,0X00,0X00,0X0F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0X80,0X00,0X00,
    0X1F,0XFF,0X80,0X00,0X00,0X3F,0XFF,0X80,0X00,0X00,0X3F,0XFF,0X00,0X00,0X00,0X7F,
    0XFF,0X00,0X00,0X00,0X7F,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFC,
    0X00,0X00,0X01,0XFF,0XFC,0X00,0X00,0X01,0XFF,0XFC,0X00,0X00,0X03,0XFF,0XF8,0X00,
    0X00,0X03,0XFF,0XF8,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XF0,0X00,0X00,
    0X07,0XFF,0XF0,0X00,0X00,0X0F,0XFF,0XE0,0X00,0X00,0X0F,0XFF,0XE0,0X00,0X00,0X1F,
    0XFF,0XE0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X1F,0XFF,0XC0,0X00,0X00,0X3F,0XFF,
    0XC0,0X00,0X00,0X3F,0XFF,0XC0,0X00,0X00,0X3F,0XFF,0X80,0X00,0X00,0X7F,0XFF,0X80,
    0X00,0X00,0X7F,0XFF,0X80,0X00,0X00,0X7F,0XFF,0X80,0X00,0X00,0XFF,0XFF,0X00,0X00,
    0X00,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,
    0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X01,0XFF,
    0XFE,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,
    0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,

      
0x38,    // 8 //
    0X00,0X01,0XFF,0X00,0X00,0X00,0X3F,0XFF,0XF8,0X00,0X00,0XFF,0XFF,0XFE,0X00,0X03,
    0XFF,0XFF,0XFF,0X80,0X07,0XFF,0XFF,0XFF,0XE0,0X0F,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,
    0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,
    0XFF,0XFC,0X3F,0XFF,0X81,0XFF,0XFC,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,
    0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,
    0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,
    0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X3F,0XFF,0X00,0XFF,0XFC,0X3F,0XFF,
    0X00,0XFF,0XFC,0X3F,0XFF,0X81,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,
    0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XE0,0X03,0XFF,0XFF,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,
    0X00,0X03,0XFF,0XFF,0XFF,0X80,0X07,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,0XFF,0XFF,0XF8,
    0X3F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0X81,0XFF,0XFE,0X7F,
    0XFF,0X80,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,
    0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,
    0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,
    0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,
    0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0X7F,
    0XFF,0X81,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,
    0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,
    0XFF,0XF0,0X03,0XFF,0XFF,0XFF,0XE0,0X00,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,0XFC,
    0X00,0X00,0X01,0XFF,0X80,0X00,
      
0x39,    // 9 //
    0X00,0X03,0XFF,0X80,0X00,0X00,0X3F,0XFF,0XF8,0X00,0X00,0XFF,0XFF,0XFF,0X00,0X03,
    0XFF,0XFF,0XFF,0X80,0X07,0XFF,0XFF,0XFF,0XE0,0X0F,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,
    0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,
    0XFF,0XFC,0X7F,0XFF,0X83,0XFF,0XFE,0X7F,0XFF,0X01,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,
    0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,
    0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,
    0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,
    0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,
    0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X81,0XFF,
    0XFE,0X3F,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFE,
    0X1F,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X07,0XFF,0XFF,0XFF,0XFE,0X03,
    0XFF,0XFE,0XFF,0XFE,0X00,0XFF,0XF8,0XFF,0XFE,0X00,0X1F,0XC0,0XFF,0XFE,0X00,0X00,
    0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,
    0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,
    0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,
    0XFF,0XFF,0X00,0XFF,0XFE,0XFF,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,0XFF,0XFC,0X7F,
    0XFF,0X81,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,
    0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XE0,0X07,0XFF,0XFF,
    0XFF,0XC0,0X01,0XFF,0XFF,0XFF,0X80,0X00,0XFF,0XFF,0XFE,0X00,0X00,0X1F,0XFF,0XF0,
    0X00,0X00,0X01,0XFF,0X00,0X00,

      
0x40,    // @ //
    0X00,0X0F,0XF0,0X00,0X00,0X00,0X3F,0XFC,0X00,0X00,0X00,0XFF,0XFF,0X00,0X00,0X01,
    0XFF,0XFF,0X80,0X00,0X03,0XFF,0XFF,0XC0,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X07,0XFF,
    0XFF,0XE0,0X00,0X0F,0XF8,0X1F,0XF0,0X00,0X0F,0XF0,0X0F,0XF0,0X00,0X1F,0XE0,0X07,
    0XF8,0X00,0X1F,0XC0,0X03,0XF8,0X00,0X1F,0XC0,0X03,0XF8,0X00,0X1F,0XC0,0X03,0XF8,
    0X00,0X1F,0XC0,0X03,0XF8,0X00,0X1F,0XC0,0X03,0XF8,0X00,0X1F,0XE0,0X07,0XF8,0X00,
    0X0F,0XF0,0X0F,0XF0,0X00,0X0F,0XF8,0X1F,0XF0,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X07,
    0XFF,0XFF,0XE0,0X00,0X03,0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFF,0X80,0X00,0X00,0XFF,
    0XFF,0X00,0X00,0X00,0X3F,0XFC,0X00,0X00,0X00,0X0F,0XF0,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,

0x55,    // U //
    0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,
    0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,
    0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,
    0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,
    0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,
    0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,
    0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,
    0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,
    0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,
    0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,
    0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,
    0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,
    0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,
    0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,
    0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,
    0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X81,0XFF,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,
    0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,
    0XFF,0XF0,0X07,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,0XFE,
    0X00,0X00,0X03,0XFF,0XE0,0X00,

0x56,    // V //
    0X00,0X00,0X00,0X00,0X00,0XFF,0XFE,0X00,0X7F,0XFF,0XFF,0XFE,0X00,0X7F,0XFF,0XFF,
    0XFE,0X00,0X7F,0XFE,0X7F,0XFE,0X00,0X7F,0XFE,0X7F,0XFE,0X00,0X7F,0XFE,0X7F,0XFE,
    0X00,0XFF,0XFE,0X7F,0XFE,0X00,0XFF,0XFE,0X7F,0XFE,0X00,0XFF,0XFC,0X7F,0XFF,0X00,
    0XFF,0XFC,0X3F,0XFF,0X00,0XFF,0XFC,0X3F,0XFF,0X00,0XFF,0XFC,0X3F,0XFF,0X00,0XFF,
    0XFC,0X3F,0XFF,0X01,0XFF,0XF8,0X3F,0XFF,0X01,0XFF,0XF8,0X1F,0XFF,0X01,0XFF,0XF8,
    0X1F,0XFF,0X81,0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF8,0X1F,
    0XFF,0X81,0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF8,0X1F,0XFF,
    0X81,0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF0,0X0F,0XFF,0X81,
    0XFF,0XF0,0X0F,0XFF,0X81,0XFF,0XF0,0X0F,0XFF,0X83,0XFF,0XF0,0X0F,0XFF,0X83,0XFF,
    0XF0,0X0F,0XFF,0X83,0XFF,0XE0,0X0F,0XFF,0XC3,0XFF,0XE0,0X07,0XFF,0XC3,0XFF,0XE0,
    0X07,0XFF,0XC3,0XFF,0XE0,0X07,0XFF,0XC3,0XFF,0XE0,0X07,0XFF,0XC3,0XFF,0XC0,0X07,
    0XFF,0XC7,0XFF,0XC0,0X03,0XFF,0XC7,0XFF,0XC0,0X03,0XFF,0XC7,0XFF,0XC0,0X03,0XFF,
    0XE7,0XFF,0XC0,0X03,0XFF,0XE7,0XFF,0X80,0X03,0XFF,0XE7,0XFF,0X80,0X01,0XFF,0XE7,
    0XFF,0X80,0X01,0XFF,0XEF,0XFF,0X80,0X01,0XFF,0XEF,0XFF,0X80,0X01,0XFF,0XEF,0XFF,
    0X00,0X01,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0X00,
    0X00,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFE,0X00,0X00,0XFF,0XFF,0XFE,0X00,0X00,
    0XFF,0XFF,0XFE,0X00,0X00,0X7F,0XFF,0XFE,0X00,0X00,0X7F,0XFF,0XFE,0X00,0X00,0X7F,
    0XFF,0XFE,0X00,0X00,0X7F,0XFF,0XFC,0X00,0X00,0X7F,0XFF,0XFC,0X00,0X00,0X3F,0XFF,
    0XFC,0X00,0X00,0X3F,0XFF,0XFC,0X00,0X00,0X3F,0XFF,0XFC,0X00,0X00,0X3F,0XFF,0XFC,
    0X00,0X00,0X00,0X00,0X00,0X00,

0x58,    // X //
    0X00,0X00,0X00,0X00,0X00,0XFF,0XFE,0X00,0X7F,0XFF,0XFF,0XFE,0X00,0X7F,0XFE,0X7F,
    0XFF,0X00,0X7F,0XFE,0X7F,0XFF,0X00,0XFF,0XFE,0X3F,0XFF,0X00,0XFF,0XFC,0X3F,0XFF,
    0X00,0XFF,0XFC,0X3F,0XFF,0X80,0XFF,0XFC,0X1F,0XFF,0X81,0XFF,0XF8,0X1F,0XFF,0X81,
    0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF8,0X0F,0XFF,0XC1,0XFF,0XF0,0X0F,0XFF,0XC3,0XFF,
    0XF0,0X0F,0XFF,0XC3,0XFF,0XF0,0X07,0XFF,0XC3,0XFF,0XE0,0X07,0XFF,0XE3,0XFF,0XE0,
    0X07,0XFF,0XE7,0XFF,0XE0,0X07,0XFF,0XE7,0XFF,0XE0,0X07,0XFF,0XE7,0XFF,0XE0,0X03,
    0XFF,0XF7,0XFF,0XE0,0X03,0XFF,0XFF,0XFF,0XC0,0X03,0XFF,0XFF,0XFF,0XC0,0X01,0XFF,
    0XFF,0XFF,0XC0,0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X00,0XFF,0XFF,
    0XFF,0X00,0X00,0XFF,0XFF,0XFF,0X00,0X00,0X7F,0XFF,0XFF,0X00,0X00,0X7F,0XFF,0XFE,
    0X00,0X00,0X7F,0XFF,0XFE,0X00,0X00,0X7F,0XFF,0XFE,0X00,0X00,0X7F,0XFF,0XFF,0X00,
    0X00,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0X80,0X01,
    0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0X80,0X03,0XFF,
    0XFF,0XFF,0XC0,0X03,0XFF,0XFF,0XFF,0XC0,0X03,0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0XFF,
    0XFF,0XE0,0X07,0XFF,0XF7,0XFF,0XE0,0X07,0XFF,0XE7,0XFF,0XE0,0X07,0XFF,0XE7,0XFF,
    0XE0,0X07,0XFF,0XE7,0XFF,0XE0,0X07,0XFF,0XC3,0XFF,0XE0,0X0F,0XFF,0XC3,0XFF,0XF0,
    0X0F,0XFF,0XC3,0XFF,0XF0,0X0F,0XFF,0XC3,0XFF,0XF0,0X1F,0XFF,0X81,0XFF,0XF8,0X1F,
    0XFF,0X81,0XFF,0XF8,0X1F,0XFF,0X81,0XFF,0XF8,0X3F,0XFF,0X81,0XFF,0XFC,0X3F,0XFF,
    0X00,0XFF,0XFC,0X3F,0XFF,0X00,0XFF,0XFC,0X7F,0XFF,0X00,0XFF,0XFE,0X7F,0XFF,0X00,
    0XFF,0XFE,0X7F,0XFE,0X00,0X7F,0XFE,0XFF,0XFE,0X00,0X7F,0XFF,0XFF,0XFE,0X00,0X7F,
    0XFF,0X00,0X00,0X00,0X00,0X00,
     

0x59,    // Y //
    0X00,0X00,0X00,0X00,0X00,0XFF,0XFC,0X00,0X3F,0XFF,0X7F,0XFE,0X00,0X3F,0XFE,0X7F,
    0XFE,0X00,0X3F,0XFE,0X3F,0XFE,0X00,0X3F,0XFE,0X3F,0XFE,0X00,0X7F,0XFC,0X3F,0XFF,
    0X00,0X7F,0XFC,0X3F,0XFF,0X00,0X7F,0XF8,0X3F,0XFF,0X00,0XFF,0XF8,0X1F,0XFF,0X00,
    0XFF,0XF8,0X1F,0XFF,0X80,0XFF,0XF8,0X1F,0XFF,0X80,0XFF,0XF8,0X0F,0XFF,0X81,0XFF,
    0XF8,0X0F,0XFF,0X81,0XFF,0XF0,0X07,0XFF,0X81,0XFF,0XF0,0X07,0XFF,0X81,0XFF,0XF0,
    0X07,0XFF,0X83,0XFF,0XE0,0X03,0XFF,0XC3,0XFF,0XE0,0X03,0XFF,0XC3,0XFF,0XC0,0X01,
    0XFF,0XC3,0XFF,0XC0,0X01,0XFF,0XE3,0XFF,0XC0,0X01,0XFF,0XE3,0XFF,0X80,0X01,0XFF,
    0XE3,0XFF,0X80,0X01,0XFF,0XE7,0XFF,0X80,0X01,0XFF,0XF7,0XFF,0X00,0X00,0XFF,0XF7,
    0XFF,0X00,0X00,0XFF,0XF7,0XFF,0X00,0X00,0X7F,0XFF,0XFF,0X00,0X00,0X7F,0XFF,0XFF,
    0X00,0X00,0X7F,0XFF,0XFE,0X00,0X00,0X3F,0XFF,0XFE,0X00,0X00,0X3F,0XFF,0XFE,0X00,
    0X00,0X1F,0XFF,0XFC,0X00,0X00,0X1F,0XFF,0XFC,0X00,0X00,0X1F,0XFF,0XFC,0X00,0X00,
    0X0F,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XF0,0X00,0X00,0X0F,
    0XFF,0XF0,0X00,0X00,0X0F,0XFF,0XF0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,
    0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,
    0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,
    0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,
    0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,
    0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,
    0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,

0x5A,    // Z //
    0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X0F,
    0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,
    0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,
    0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X07,0XFF,
    0XFE,0X00,0X00,0X0F,0XFF,0XFE,0X00,0X00,0X0F,0XFF,0XFC,0X00,0X00,0X1F,0XFF,0XF8,
    0X00,0X00,0X3F,0XFF,0XF8,0X00,0X00,0X3F,0XFF,0XF0,0X00,0X00,0X7F,0XFF,0XF0,0X00,
    0X00,0X7F,0XFF,0XE0,0X00,0X00,0XFF,0XFF,0XE0,0X00,0X00,0XFF,0XFF,0XC0,0X00,0X01,
    0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFF,0X80,0X00,0X03,0XFF,0XFF,0X80,0X00,0X03,0XFF,
    0XFF,0X00,0X00,0X07,0XFF,0XFF,0X00,0X00,0X07,0XFF,0XFE,0X00,0X00,0X0F,0XFF,0XFE,
    0X00,0X00,0X0F,0XFF,0XFC,0X00,0X00,0X1F,0XFF,0XFC,0X00,0X00,0X1F,0XFF,0XF8,0X00,
    0X00,0X3F,0XFF,0XF8,0X00,0X00,0X3F,0XFF,0XF0,0X00,0X00,0X7F,0XFF,0XF0,0X00,0X00,
    0X7F,0XFF,0XE0,0X00,0X00,0XFF,0XFF,0XE0,0X00,0X00,0XFF,0XFF,0XC0,0X00,0X01,0XFF,
    0XFF,0X80,0X00,0X01,0XFF,0XFF,0X80,0X00,0X03,0XFF,0XFF,0X00,0X00,0X03,0XFF,0XFF,
    0X00,0X00,0X07,0XFF,0XFE,0X00,0X00,0X07,0XFF,0XFE,0X00,0X00,0X0F,0XFF,0XFC,0X00,
    0X00,0X0F,0XFF,0XFC,0X00,0X00,0X1F,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XF8,0X00,0X00,
    0X3F,0XFF,0XF0,0X00,0X00,0X3F,0XFF,0XF0,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,
    0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,
    0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,
    0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,
    0XFE,0X00,0X00,0X00,0X00,0X00,
      

     
/* 最后一行必须用0xFF,0xFF结束，这是字库数组结束标志 */
0xFF,0xFF

};
