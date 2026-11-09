// Name: core_menu.cpp_FUN_0050a2b0
// Address: 0050a2b0
// Address Range: [[0050a2b0, 0050a5da]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_FUN_0050a2b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_FUN_0050a2b0(void)

{
  CGame *pCVar1;
  CDemonSet *this_ptr;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStack_224 [256];
  char local_124 [256];
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  iVar6 = 0x7fffffff;
  iVar4 = 0;
  iVar5 = 0x7fffffff;
  local_14 = 0;
  while( true ) {
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_FUN_004c3ea0(_DAT_0152d23c,pcVar2);
    local_24 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_FUN_004c4510(_DAT_0152d23c,0x58);
    engine_font_cpp_FUN_004c1dd0(_DAT_0152d23c,pcVar2,local_24,0xf0 - iVar3 / 2,7,0);
    FUN_005bfb40(local_124,"%d,%d,%x",_DAT_01c51cb0,_DAT_01c51cb4,_DAT_01c51cc0)
    ;
    engine_2d_c_drawText_FUN_00401fe0(local_124,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
    wincore_wddvmem_cpp_FUN_005acff0();
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
    if (iVar3 != 0) break;
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar3 != 0) goto LAB_0050a567;
    iStack_1c = _DAT_01c51cb0;
    iStack_18 = _DAT_01c51cb4;
  }
  while( true ) {
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_00555770(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Move gamepad in all directions, press ENTER")
    ;
    iVar3 = engine_font_cpp_FUN_004c3ea0(_DAT_0152d23c,pcVar2);
    iStack_20 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_FUN_004c4510(_DAT_0152d23c,0x58);
    engine_font_cpp_FUN_004c1dd0(_DAT_0152d23c,pcVar2,iStack_20,0xf0 - iVar3 / 2,7,0);
    FUN_005bfb40
              (acStack_224,"%d,%d,%x",_DAT_01c51cb0,_DAT_01c51cb4,_DAT_01c51cc0);
    engine_2d_c_drawText_FUN_00401fe0(acStack_224,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
    wincore_wddvmem_cpp_FUN_005acff0();
    iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
    pCVar1 = g_CGamePtr;
    if (iVar3 != 0) {
      *(int *)&g_CGamePtr->field_0xb8 = iStack_1c;
      *(int *)&pCVar1->field_0xc0 = iVar6;
      *(int *)&pCVar1->field_0xc4 = iVar4;
      *(int *)&pCVar1->field_0xc8 = iVar5;
      *(int *)&pCVar1->field_0xbc = iStack_18;
      *(int *)&pCVar1->field_0xcc = local_14;
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
    if (local_14 < _DAT_01c51cb4) {
      local_14 = _DAT_01c51cb4;
    }
  }
LAB_0050a567:
  pCVar1 = g_CGamePtr;
  *(uint *)&g_CGamePtr->field_0xb8 = 0;
  *(uint *)&pCVar1->field_0xd0 = 0;
  return 0;
}
