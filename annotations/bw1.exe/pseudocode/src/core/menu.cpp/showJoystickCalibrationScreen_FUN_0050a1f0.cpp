// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_0050a1f0
// Address: 0050a1f0
// Address Range: [[0050a1f0, 0050a2a0]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_0050a1f0(char *instruction_text,char *message_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_0050a1f0(char *instruction_text,char *message_text)

{
  int iVar1;
  int iVar2;
  char acStack_110 [256];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_0152d23c,instruction_text);
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_0152d23c,0x58);
  engine_font_cpp_FUN_004c1dd0
            (_DAT_0152d23c,instruction_text,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  _sprintf(acStack_110,"%d,%d,%x");
  engine_2d_c_drawText_FUN_00401fe0(acStack_110,0,0);
  return;
}
