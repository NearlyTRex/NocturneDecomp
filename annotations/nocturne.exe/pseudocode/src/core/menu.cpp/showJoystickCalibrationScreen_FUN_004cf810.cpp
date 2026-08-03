// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_004cf810
// Address: 004cf810
// Address Range: [[004cf810, 004cf8c0]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_004cf810(char *instruction_text,char *message_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_004cf810(char *instruction_text,char *message_text)

{
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (g_CBitFont_PTR_014b98f8,instruction_text);
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b98f8,0x58);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b98f8,instruction_text,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  _sprintf(local_110,"%d,%d,%x");
  engine_2d_c_drawText_FUN_00402600(local_110,0,0);
  return;
}
