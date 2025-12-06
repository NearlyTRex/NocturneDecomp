// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410
// Address: 00510410
// Address Range: [[00510410, 005104c0]]
// Convention: __cdecl
// Signature: void core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410(char * instruction_text, char * message_text)

#include "nocturne.h"

void __cdecl
core_menu_cpp_showJoystickCalibrationScreen_FUN_00510410(char *instruction_text,char *message_text)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *in_stack_0000000c;
  char acStack_100 [240];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,instruction_text);
  iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_MediumFont,in_stack_0000000c,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffefc,"%d,%d,%x",g_JoyXPos,g_JoyYPos,g_JoyButtons);
  engine_2d_c_drawText_FUN_00401fd0(acStack_100,0,0);
  return;
}
