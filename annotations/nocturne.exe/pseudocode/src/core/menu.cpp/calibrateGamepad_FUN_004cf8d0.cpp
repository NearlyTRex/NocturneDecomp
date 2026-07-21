// Name: core_menu.cpp_calibrateGamepad_FUN_004cf8d0
// Address: 004cf8d0
// Address Range: [[004cf8d0, 004cfbb6]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_224 [256];
  byte auStack_124 [256];
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  iVar6 = 0x7fffffff;
  iVar5 = 0;
  local_14 = 0x7fffffff;
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(0x1cc5780);
    uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                      ("Center gamepad, press ENTER");
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b98f8,uVar1);
    local_24 = 0x140 - iVar2 / 2;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b98f8,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (_DAT_014b98f8,uVar1,local_24,0xf0 - iVar2 / 2,7,0);
    _sprintf(local_224,"%d,%d,%x",_DAT_01c038f8,_DAT_01c038fc,_DAT_01c03908);
    engine_2d_c_drawText_FUN_00402600(local_224,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(0x01C775EC);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1c);
    iVar2 = 0;
    if (iVar3 != 0) break;
    iVar2 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
    if (iVar2 != 0) goto LAB_004cfb43;
    iStack_1c = _DAT_01c038f8;
    iStack_18 = _DAT_01c038fc;
  }
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(0x1cc5780);
    uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                      ("Move gamepad in all directions, press ENTER");
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b98f8,uVar1);
    iStack_20 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b98f8,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (_DAT_014b98f8,uVar1,iStack_20,0xf0 - iVar3 / 2,7,0);
    _sprintf(auStack_124,"%d,%d,%x",_DAT_01c038f8,_DAT_01c038fc,_DAT_01c03908);
    engine_2d_c_drawText_FUN_00402600(auStack_124,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(0x01C775EC);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1c);
    iVar3 = 0x01C775EC;
    if (iVar4 != 0) {
      *(int *)(0x01C775EC + 0xa4) = iStack_1c;
      *(int *)(iVar3 + 0xac) = iVar6;
      *(int *)(iVar3 + 0xb0) = iVar5;
      *(int *)(iVar3 + 0xb8) = iVar2;
      *(int *)(iVar3 + 0xa8) = iStack_18;
      *(int *)(iVar3 + 0xb4) = local_14;
      return 1;
    }
    iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
    if (iVar3 != 0) break;
    if (_DAT_01c038f8 < iVar6) {
      iVar6 = _DAT_01c038f8;
    }
    if (iVar5 < _DAT_01c038f8) {
      iVar5 = _DAT_01c038f8;
    }
    if (_DAT_01c038fc < local_14) {
      local_14 = _DAT_01c038fc;
    }
    if (iVar2 < _DAT_01c038fc) {
      iVar2 = _DAT_01c038fc;
    }
  }
LAB_004cfb43:
  iVar5 = 0x01C775EC;
  *(uint *)(0x01C775EC + 0xa4) = 0;
  *(uint *)(iVar5 + 0xbc) = 0;
  return 0;
}
