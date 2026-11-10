// Name: core_menu.cpp_checkAndCalibrateGamepad_FUN_0050b410
// Address: 0050b410
// Address Range: [[0050b410, 0050b430]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_checkAndCalibrateGamepad_FUN_0050b410(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_checkAndCalibrateGamepad_FUN_0050b410(void)

{
  CGame *pCVar1;
  CDemonSet *this_ptr;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStack_224 [256];
  char acStack_124 [256];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if ((*(int *)&g_CGamePtr->field_0xd0 != 2) || (g_CGamePtr->x_center != 0)) {
    return 1;
  }
  iVar6 = 0x7fffffff;
  iVar4 = 0;
  iVar5 = 0x7fffffff;
  iStack_14 = 0;
  while( true ) {
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_0152d23c,pcVar2);
    iStack_24 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_0152d23c,0x58);
    engine_font_cpp_FUN_004c1dd0(_DAT_0152d23c,pcVar2,iStack_24,0xf0 - iVar3 / 2,7,0);
    _sprintf(acStack_124,"%d,%d,%x");
    engine_2d_c_drawText_FUN_00401fe0(acStack_124,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
    if (iVar3 != 0) break;
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar3 != 0) goto LAB_0050a567;
    iStack_1c = _DAT_01c51cb0;
    iStack_18 = _DAT_01c51cb4;
  }
  while( true ) {
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Move gamepad in all directions, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_0152d23c,pcVar2);
    iStack_20 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_0152d23c,0x58);
    engine_font_cpp_FUN_004c1dd0(_DAT_0152d23c,pcVar2,iStack_20,0xf0 - iVar3 / 2,7,0);
    _sprintf(acStack_224,"%d,%d,%x");
    engine_2d_c_drawText_FUN_00401fe0(acStack_224,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
    pCVar1 = g_CGamePtr;
    if (iVar3 != 0) {
      g_CGamePtr->x_center = iStack_1c;
      pCVar1->x_stick_min = iVar6;
      pCVar1->x_stick_max = iVar4;
      pCVar1->y_stick_min = iVar5;
      pCVar1->y_center = iStack_18;
      pCVar1->y_stick_max = iStack_14;
      return 1;
    }
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar3 != 0) break;
    if (_DAT_01c51cb0 < iVar6) {
      iVar6 = _DAT_01c51cb0;
    }
    if (iVar4 < _DAT_01c51cb0) {
      iVar4 = _DAT_01c51cb0;
    }
    if (_DAT_01c51cb4 < iVar5) {
      iVar5 = _DAT_01c51cb4;
    }
    if (iStack_14 < _DAT_01c51cb4) {
      iStack_14 = _DAT_01c51cb4;
    }
  }
LAB_0050a567:
  pCVar1 = g_CGamePtr;
  g_CGamePtr->x_center = 0;
  *(uint *)&pCVar1->field_0xd0 = 0;
  return 0;
}
