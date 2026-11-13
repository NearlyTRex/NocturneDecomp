// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_004eb3d0
// Address: 004eb3d0
// Address Range: [[004eb3d0, 004eb480]]
// Convention: unknown
// Signature: void core_menu_cpp_showJoystickCalibrationScreen_FUN_004eb3d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_menu_cpp_showJoystickCalibrationScreen_FUN_004eb3d0(void)

{
  int iVar1;
  int iVar2;
  char *in_stack_00000004;
  char acStack_110 [256];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(_DAT_01511cb8,in_stack_00000004);
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01511cb8,0x58);
  engine_font_cpp_FUN_004a8df0
            (_DAT_01511cb8,in_stack_00000004,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  _sprintf(acStack_110,"%d,%d,%x");
  engine_2d_c_drawText_FUN_00401fe0(acStack_110,0,0);
  return;
}
