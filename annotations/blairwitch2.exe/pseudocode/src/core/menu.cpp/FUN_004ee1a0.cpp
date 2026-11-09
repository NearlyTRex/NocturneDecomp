// Name: core_menu.cpp_FUN_004ee1a0
// Address: 004ee1a0
// Address Range: [[004ee1a0, 004ee3dc]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_004ee1a0(int param_1)

#include "nocturne.h"

void core_menu_cpp_FUN_004ee1a0(int param_1)

{
  CDemonSet *this_ptr;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint local_10;
  
  local_10 = 0;
  if (param_1 != 0) {
    core_sound_cpp_FUN_0055ac50(0x0264B290);
    core_moon_cpp_FUN_005023e0(&g_CMoonInstance);
  }
  iVar4 = 0x1d07ed0;
  core_game_cpp_FUN_004b3000(g_CGamePtr);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1d082d0) = iVar4;
    iVar1 = iVar1 + 4;
    iVar4 = iVar4 + 0x100;
  } while (iVar1 != 0x10);
  do {
    core_game_cpp_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_005344c0(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_005024a0(&g_CMoonInstance,*(uint *)&g_CGamePtr->field_0x284);
    core_moon_cpp_FUN_00502510(&g_CMoonInstance);
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("?Graphic options" + 1);
    FUN_005b7790(0x1d07ed0,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound options");
    FUN_005b7790(0x1d07fd0,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Control options");
    FUN_005b7790(0x1d080d0,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Credits");
    FUN_005b7790(0x1d081d0,pcVar2);
    *(uint *)&g_CGamePtr->field_0xd4 = 9;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Option Menu");
    uVar3 = core_menu_cpp_FUN_004eb0e0(0x1d082d0,4,&local_10,0x122,pcVar2);
    wincore_wddvmem_cpp_FUN_00589560();
    switch(uVar3) {
    case 0:
      core_menu_cpp_FUN_004ebf10();
      break;
    case 1:
      core_menu_cpp_FUN_004ed260();
      break;
    case 2:
      iVar1 = *(int *)&g_CGamePtr->field_0xd0;
      core_menu_cpp_FUN_004ecc70();
      if (iVar1 != *(int *)&g_CGamePtr->field_0xd0) {
        core_menu_cpp_FUN_004eed60();
      }
      break;
    case 3:
      core_game_cpp_CGame_rollCredits_FUN_004be430(g_CGamePtr);
      core_sound_cpp_FUN_0055ac50(0x0264B290);
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
  } while (iVar1 == 0);
  if (param_1 != 0) {
    core_moon_cpp_FUN_00502450(&g_CMoonInstance);
    core_sound_cpp_FUN_0055adb0(0x0264B290);
    core_inivar_cpp_FUN_004d94d0();
    return;
  }
  core_inivar_cpp_FUN_004d94d0();
  return;
}
