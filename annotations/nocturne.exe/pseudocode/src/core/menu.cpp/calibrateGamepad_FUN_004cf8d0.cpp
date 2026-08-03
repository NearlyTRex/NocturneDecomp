// Name: core_menu.cpp_calibrateGamepad_FUN_004cf8d0
// Address: 004cf8d0
// Address Range: [[004cf8d0, 004cfbb6]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void)

{
  CGame *pCVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_224 [256];
  char acStack_124 [256];
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  iVar6 = 0x7fffffff;
  iVar5 = 0;
  local_14 = 0x7fffffff;
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(&g_CMoon_01cc5780);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_014b98f8,pcVar2);
    local_24 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b98f8,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b98f8,pcVar2,local_24,0xf0 - iVar3 / 2,7,0);
    _sprintf(local_224,"%d,%d,%x");
    engine_2d_c_drawText_FUN_00402600(local_224,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGame_PTR_005b9354);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_RETURN);
    iVar3 = 0;
    if (iVar4 != 0) break;
    iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar3 != 0) goto LAB_004cfb43;
    iStack_1c = _DAT_01c038f8;
    iStack_18 = _DAT_01c038fc;
  }
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(&g_CMoon_01cc5780);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Move gamepad in all directions, press ENTER")
    ;
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_014b98f8,pcVar2);
    iStack_20 = 0x140 - iVar4 / 2;
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b98f8,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b98f8,pcVar2,iStack_20,0xf0 - iVar4 / 2,7,0);
    _sprintf(acStack_124,"%d,%d,%x");
    engine_2d_c_drawText_FUN_00402600(acStack_124,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGame_PTR_005b9354);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_RETURN);
    pCVar1 = g_CGame_PTR_005b9354;
    if (iVar4 != 0) {
      g_CGame_PTR_005b9354->x_center = iStack_1c;
      pCVar1->x_stick_min = iVar6;
      pCVar1->x_stick_max = iVar5;
      pCVar1->y_stick_max = iVar3;
      pCVar1->y_center = iStack_18;
      pCVar1->y_stick_min = local_14;
      return 1;
    }
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar4 != 0) break;
    if (_DAT_01c038f8 < iVar6) {
      iVar6 = _DAT_01c038f8;
    }
    if (iVar5 < _DAT_01c038f8) {
      iVar5 = _DAT_01c038f8;
    }
    if (_DAT_01c038fc < local_14) {
      local_14 = _DAT_01c038fc;
    }
    if (iVar3 < _DAT_01c038fc) {
      iVar3 = _DAT_01c038fc;
    }
  }
LAB_004cfb43:
  pCVar1 = g_CGame_PTR_005b9354;
  g_CGame_PTR_005b9354->x_center = 0;
  pCVar1->game_control = CONTROL_MODE_KEYBOARD;
  return 0;
}
