// Name: core_main.c_drawCenteredText_FUN_00508250
// Address: 00508250
// Address Range: [[00508250, 0050829d]]
// Convention: __cdecl
// Signature: void core_main.c_drawCenteredText_FUN_00508250(char * text, int y_pos, int color)

#include "nocturne.h"

void __cdecl core_main_c_drawCenteredText_FUN_00508250(char *text,int y_pos,int color)

{
  int iVar1;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,text);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_MediumFont,(char *)y_pos,0x140 - iVar1 / 2,in_stack_00000010,in_stack_00000014,0);
  return;
}
