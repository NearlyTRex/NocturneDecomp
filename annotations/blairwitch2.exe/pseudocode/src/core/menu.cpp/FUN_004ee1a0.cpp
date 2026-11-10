// Name: core_menu.cpp_FUN_004ee1a0
// Address: 004ee1a0
// Address Range: [[004ee1a0, 004ee3dc]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004ee1a0(int initialize_systems)

#include "nocturne.h"

void __cdecl core_menu_cpp_FUN_004ee1a0(int initialize_systems)

{
  CDemonSet *this_ptr;
  int iVar1;
  char *pcVar2;
  int iVar3;
  int local_10;
  
  local_10 = 0;
  if (initialize_systems != 0) {
    core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
    core_moon_cpp_FUN_005023e0(&g_CMoonInstance);
  }
  iVar3 = 0x1d07ed0;
  core_game_cpp_CGame_saveClockTime_FUN_004b3000(g_CGamePtr);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1d082d0) = iVar3;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 0x100;
  } while (iVar1 != 0x10);
  do {
    core_game_cpp_CGame_updateDT_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_FUN_005024a0(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_FUN_00502510(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("?Graphic options" + 1);
    _sprintf((char *)0x1d07ed0,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Sound options");
    _sprintf((char *)0x1d07fd0,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Control options");
    _sprintf((char *)0x1d080d0,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Credits");
    _sprintf((char *)0x1d081d0,pcVar2);
    *(uint *)&g_CGamePtr->field_0xd4 = 9;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Option Menu");
    iVar1 = core_menu_cpp_FUN_004eb0e0((char **)0x1d082d0,4,&local_10,0x122,pcVar2);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    switch(iVar1) {
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
      core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
  } while (iVar1 == 0);
  if (initialize_systems != 0) {
    core_moon_cpp_FUN_00502450(&g_CMoonInstance);
    core_sound_cpp_CSound_reset_FUN_0055adb0(0x0264B290);
    core_inivar_cpp_writeIniData_FUN_004d94d0();
    return;
  }
  core_inivar_cpp_writeIniData_FUN_004d94d0();
  return;
}
