// Name: core_menu.cpp_calibrateGamepad_FUN_004cf8d0
// Address: 004cf8d0
// Address Range: [[004cf8d0, 004cfbb6]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void)

{
  CGame *pCVar1;
  char *pcVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD DVar6;
  char local_224 [256];
  char acStack_124 [256];
  int local_24;
  int iStack_20;
  DWORD DStack_1c;
  DWORD DStack_18;
  DWORD local_14;
  
  DVar5 = 0x7fffffff;
  DVar4 = 0;
  local_14 = 0x7fffffff;
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_014b98f8,pcVar2);
    local_24 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b98f8,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b98f8,pcVar2,local_24,0xf0 - iVar3 / 2,7,0);
    _sprintf(local_224,"%d,%d,%x",g_DWORD_01c038f8,g_DWORD_01c038fc,g_DWORD_01c03908);
    engine_2d_c_drawText_FUN_00402600(local_224,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_RETURN);
    DVar6 = 0;
    if (iVar3 != 0) break;
    iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar3 != 0) goto LAB_004cfb43;
    DStack_1c = g_DWORD_01c038f8;
    DStack_18 = g_DWORD_01c038fc;
  }
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Move gamepad in all directions, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_014b98f8,pcVar2);
    iStack_20 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b98f8,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b98f8,pcVar2,iStack_20,0xf0 - iVar3 / 2,7,0);
    _sprintf(acStack_124,"%d,%d,%x",g_DWORD_01c038f8,g_DWORD_01c038fc,g_DWORD_01c03908);
    engine_2d_c_drawText_FUN_00402600(acStack_124,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_RETURN);
    pCVar1 = g_CGamePtr;
    if (iVar3 != 0) {
      g_CGamePtr->x_center = DStack_1c;
      pCVar1->x_stick_min = DVar5;
      pCVar1->x_stick_max = DVar4;
      pCVar1->y_stick_max = DVar6;
      pCVar1->y_center = DStack_18;
      pCVar1->y_stick_min = local_14;
      return 1;
    }
    iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar3 != 0) break;
    if ((int)g_DWORD_01c038f8 < (int)DVar5) {
      DVar5 = g_DWORD_01c038f8;
    }
    if ((int)DVar4 < (int)g_DWORD_01c038f8) {
      DVar4 = g_DWORD_01c038f8;
    }
    if ((int)g_DWORD_01c038fc < (int)local_14) {
      local_14 = g_DWORD_01c038fc;
    }
    if ((int)DVar6 < (int)g_DWORD_01c038fc) {
      DVar6 = g_DWORD_01c038fc;
    }
  }
LAB_004cfb43:
  pCVar1 = g_CGamePtr;
  g_CGamePtr->x_center = 0;
  pCVar1->game_control = CONTROL_MODE_KEYBOARD;
  return 0;
}
