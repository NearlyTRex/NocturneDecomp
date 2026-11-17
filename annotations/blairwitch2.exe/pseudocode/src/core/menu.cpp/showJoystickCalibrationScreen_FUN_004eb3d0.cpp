// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_004eb3d0
// Address: 004eb3d0
// Address Range: [[004eb3d0, 004eb480]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_004eb3d0(char *instruction_text,char *message_text)

#include "nocturne.h"

void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_004eb3d0(char *instruction_text,char *message_text)

{
  int iVar1;
  int iVar2;
  char acStack_110 [256];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00
                    (g_CBitFont_PTR_01511cb8,instruction_text);
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01511cb8,0x58);
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_CBitFont_PTR_01511cb8,instruction_text,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  _sprintf(acStack_110,"%d,%d,%x");
  engine_2d_c_drawText_FUN_00401fe0(acStack_110,0,0);
  return;
}
