// Name: core_main.c_drawCenteredText_FUN_00508250
// Address: 00508250
// Address Range: [[00508250, 0050829d]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_drawCenteredText_FUN_00508250(char *text,int x,int y,int color_mode)

#include "nocturne.h"

void __cdecl core_main_c_drawCenteredText_FUN_00508250(char *text,int x,int y,int color_mode)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,text);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(g_MediumFont,text,0x140 - iVar1 / 2,y,color_mode,0)
  ;
  return;
}
