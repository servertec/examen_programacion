#include<stdio.h>
/**
 * Copyright �2023, All Rights Reserved, pat_mic
 * libreria de utilitarios para fines acad�micos de programaci�n I - EPN
 **/
//===Color font ===/
#define apCOLOR_BLACK   "\x1B[30m"
#define apCOLOR_RED     "\x1b[31m"
#define apCOLOR_GREEN   "\x1b[32m"
#define apCOLOR_YELLOW  "\x1b[33m"
#define apCOLOR_BLUE    "\x1b[34m"
#define apCOLOR_MAGENTA "\x1b[35m"
#define apCOLOR_CYAN    "\x1b[36m"
#define apCOLOR_WHITE   "\x1B[37m"
#define apCOLOR_ORANGE  "\x1B[38;2;255;128;0m"
#define apCOLOR_ROSE    "\x1B[38;2;255;151;203m"
#define apCOLOR_LBLUE   "\x1B[38;2;53;149;240m"
#define apCOLOR_LGREEN  "\x1B[38;2;17;245;120m"
#define apCOLOR_GRAY    "\x1B[38;2;176;174;174m"
#define apCOLOR_RESET   "\x1b[0m"

//===Color background ===/
#define apBG_BLACK   "\x1B[40m"
#define apBG_RED     "\x1B[41m"
#define apBG_GREEN   "\x1B[42m"
#define apBG_YELLOW  "\x1B[43m"
#define apBG_BLUE    "\x1B[44m"
#define apBG_MAGENTA "\x1B[45m"
#define apBG_CYAN    "\x1B[46m"
#define apBG_WHITE   "\x1B[47m"
#define apBG_ORANGE  "\x1B[48;2;255;128;0m"
#define apBG_LBLUE   "\x1B[48;2;53;149;240m"
#define apBG_LGREEN  "\x1B[48;2;17;245;120m"
#define apBG_GRAY    "\x1B[48;2;176;174;174m"
#define apBG_ROSE    "\x1B[48;2;255;151;203m"

//Colores de texto
#define apTextColorBlack 30
#define apTextColorRed 31
#define apTextColorGreen 32
#define apTextColorYellow 33
#define apTextColorBlue 34
#define apTextColorMagenta 35
#define apTextColorCyan 36
#define apTextColorWhite 37

//colores de fondo
#define apFnBgBlack 40
#define apFnBgRed 41
#define apFnBgGreen 42
#define apFnBgYellow 43
#define apFnBgBlue 44
#define apFnBgMagenta 45
#define apFnBgCyan 46
#define apFnBgWhite 47

/**
 * El primer valor es del color de texto y el segundo del color del fondo
*/
void setColor(int apcolor, int apBG_color)
{
        printf("%c[%d;%d;%dm", 0x1B, 1,apcolor,apBG_color);
}

/**
 * setTextColor, permite definir el color de texto
 * ejemplo: setTextColor(textColorBlue);
*/
void setTextColor(int apcolor)
{
        printf("%c[%d;%dm", 0x1B, 1,apcolor);
}