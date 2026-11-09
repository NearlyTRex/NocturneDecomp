// Name: core_menu.cpp_FUN_0050c990
// Address: 0050c990
// Address Range: [[0050c990, 0050cc74]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_0050c990(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_0050c990(int param_1)

{
  CDemonSet *this_ptr;
  int iVar1;
  char *pcVar2;
  int iVar3;
  int local_14;
  
  local_14 = 0;
  if (param_1 != 0) {
    core_sound_cpp_FUN_0057d6a0(0x02C82A60);
    core_moon_cpp_FUN_00521c50(&g_CMoonInstance);
  }
  iVar3 = 0x1d20a30;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1d21030) = iVar3;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 0x100;
  } while (iVar1 != 0x18);
  do {
    core_game_cpp_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_00555770(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Graphic options");
    FUN_005bfb40(0x1d20a30,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound options");
    FUN_005bfb40(0x1d20b30,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Control options");
    FUN_005bfb40(0x1d20c30,pcVar2);
    if (*(int *)&g_CGamePtr->field_0xe4 == 1) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Puzzle difficulty: Hard")
      ;
      FUN_005bfb40(0x1d20d30,pcVar2);
    }
    else {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Puzzle difficulty: Normal");
      FUN_005bfb40(0x1d20d30,pcVar2);
      *(uint *)&g_CGamePtr->field_0xe4 = 0;
    }
    if (*(int *)&g_CGamePtr->field_0xe8 == 1) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Combat difficulty: Hard")
      ;
      FUN_005bfb40(0x1d20e30,pcVar2);
    }
    else {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Combat difficulty: Normal");
      FUN_005bfb40(0x1d20e30,pcVar2);
      *(uint *)&g_CGamePtr->field_0xe8 = 0;
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Credits");
    FUN_005bfb40(0x1d20f30,pcVar2);
    *(uint *)&g_CGamePtr->field_0xd4 = 9;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Option Menu");
    iVar1 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      ((char **)0x1d21030,6,&local_14,0x32,pcVar2);
    wincore_wddvmem_cpp_FUN_005acff0();
    switch(iVar1) {
    case 0:
      core_menu_cpp_FUN_0050aa90();
      break;
    case 1:
      core_menu_cpp_FUN_0050ba70();
      break;
    case 2:
      _DAT_01d1ee90 = *(int *)&g_CGamePtr->field_0xd0;
      core_menu_cpp_FUN_0050b470();
      if (_DAT_01d1ee90 != *(int *)&g_CGamePtr->field_0xd0) {
        core_menu_cpp_FUN_0050d640();
      }
      break;
    case 5:
      core_game_cpp_CGame_rollCredits_FUN_004d8e50(g_CGamePtr);
      core_sound_cpp_FUN_0057d6a0(0x02C82A60);
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
  } while (iVar1 == 0);
  if (param_1 == 0) {
    core_inivar_cpp_FUN_004f5760();
    return;
  }
  core_moon_cpp_FUN_00521d50(&g_CMoonInstance);
  core_sound_cpp_FUN_0057d800(0x02C82A60);
  core_inivar_cpp_FUN_004f5760();
  return;
}
