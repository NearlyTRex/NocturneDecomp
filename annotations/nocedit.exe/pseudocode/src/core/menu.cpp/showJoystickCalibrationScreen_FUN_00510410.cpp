// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410
// Address: 00510410
// Address Range: [[00510410, 005104c0]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_00510410(char *instruction_text,char *message_text)

#include "nocturne.h"

void __cdecl
core_menu_cpp_showJoystickCalibrationScreen_FUN_00510410(char *instruction_text,char *message_text)

{
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,instruction_text);
  iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_MediumFont,instruction_text,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  sprintf(local_110,"%d,%d,%x",g_JoyXPos,g_JoyYPos,g_JoyButtons);
  engine_2d_c_drawText_FUN_00401fd0(local_110,0,0);
  return;
}
