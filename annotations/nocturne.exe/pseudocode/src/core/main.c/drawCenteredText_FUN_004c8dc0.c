// Name: core_main.c_drawCenteredText_FUN_004c8dc0
// Address: 004c8dc0
// Address Range: [[004c8dc0, 004c8e0d]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_drawCenteredText_FUN_004c8dc0(char *text,int x,int y,int color_mode)

#include "nocturne.h"

void __cdecl core_main_c_drawCenteredText_FUN_004c8dc0(char *text,int x,int y,int color_mode)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_MediumFont,text);
  engine_font_cpp_CBitFont_drawText_FUN_00490980(g_MediumFont,text,0x140 - iVar1 / 2,y,color_mode,0)
  ;
  return;
}
