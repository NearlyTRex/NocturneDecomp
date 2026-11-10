// Name: core_menu.cpp_FUN_004ea280
// Address: 004ea280
// Address Range: [[004ea280, 004ea4b0]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004ea280(int initialize_systems)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004ea280(int initialize_systems)

{
  CDemonSet *this_ptr;
  int iVar1;
  char *pcVar2;
  int iVar3;
  int local_10;
  
  local_10 = 0;
  if (initialize_systems != 0) {
    core_moon_cpp_FUN_004f94a0(&g_CMoonInstance);
    core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
  }
  iVar3 = 0x1d75478;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x1d75878) = iVar3;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + 0x100;
  } while (iVar1 != 0x10);
  do {
    core_game_cpp_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_FUN_004f9670(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("?Graphic Options" + 1);
    _sprintf((char *)0x1d75478,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Options");
    _sprintf((char *)0x1d75578,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Control Options");
    _sprintf((char *)0x1d75678,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Credits");
    _sprintf((char *)0x1d75778,pcVar2);
    *(uint *)&g_CGamePtr->field_0xd8 = 9;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Option Menu");
    iVar1 = core_menu_cpp_FUN_004e7860((char **)0x1d75878,4,&local_10,200,pcVar2);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    switch(iVar1) {
    case 0:
      core_menu_cpp_FUN_004e85a0();
      break;
    case 1:
      core_menu_cpp_FUN_004e94f0();
      break;
    case 2:
      _DAT_01d737d8 = *(int *)&g_CGamePtr->field_0xd4;
      core_menu_cpp_FUN_004e8f80();
      if (_DAT_01d737d8 != *(int *)&g_CGamePtr->field_0xd4) {
        core_menu_cpp_FUN_004eae80();
      }
      break;
    case 3:
      core_game_cpp_CGame_rollCredits_FUN_004c02a0(g_CGamePtr);
      core_sound_cpp_CSound_configure_FUN_005607d0(0x02CF5680);
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
  } while (iVar1 == 0);
  if (initialize_systems != 0) {
    core_moon_cpp_FUN_004f9580(&g_CMoonInstance);
    core_sound_cpp_CSound_reset_FUN_00560930(0x02CF5680);
    core_inivar_cpp_writeIniData_FUN_004d95c0();
    return;
  }
  core_inivar_cpp_writeIniData_FUN_004d95c0();
  return;
}
