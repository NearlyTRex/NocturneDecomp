// Name: core_menu.cpp_showJoystickCalibrationScreen_FUN_004cf810
// Address: 004cf810
// Address Range: [[004cf810, 004cf8c0]]
// Convention: unknown
// Signature: void core_menu_cpp_showJoystickCalibrationScreen_FUN_004cf810(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_showJoystickCalibrationScreen_FUN_004cf810(char *param_1)

{
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b98f8,param_1);
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b98f8,0x58);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b98f8,param_1,0x140 - iVar1 / 2,0xf0 - iVar2 / 2,7,0);
  _sprintf(local_110,"%d,%d,%x",_DAT_01c038f8,_DAT_01c038fc,_DAT_01c03908);
  engine_2d_c_drawText_FUN_00402600(local_110,0,0);
  return;
}
