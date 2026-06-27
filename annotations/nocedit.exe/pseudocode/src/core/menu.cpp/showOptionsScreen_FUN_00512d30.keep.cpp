// Name: core_menu.cpp_showOptionsScreen_FUN_00512d30
// Address: 00512d30
// MANUAL RECONSTRUCTION
// Address Range: [[00512d30, 00512f26]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showOptionsScreen_FUN_00512d30(int initialize_systems)

#include "nocturne.h"

void __cdecl core_menu_cpp_showOptionsScreen_FUN_00512d30(int initialize_systems)

{
  int iVar2;
  char *pcVar3;
  char *pcVar1;
  int iVar3;
  char (*pacVar4) [256];
  int local_10;
  EControlMode EVar1;
  
  local_10 = 0;
  if (initialize_systems != 0) {
    core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
  }
  pacVar4 = g_OptionsMenuTextBuffers;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  iVar2 = 0;
  do {
    g_OptionsMenuPointers[iVar2 / 4] = (char *)pacVar4;
    iVar2 = iVar2 + 4;
    pacVar4 = pacVar4 + 1;
  } while (iVar2 != 0x10);
  do {
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Graphic options");
    _sprintf(g_OptionsMenuTextBuffers[0],pcVar3);
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound options");
    _sprintf(g_OptionsMenuTextBuffers[1],pcVar1);
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control options");
    _sprintf(g_OptionsMenuTextBuffers[2],pcVar1);
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Credits");
    _sprintf(g_OptionsMenuTextBuffers[3],pcVar1);
    g_CGamePtr->hero_number = HERO_TYPE_STRANGER;
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Option Menu");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_OptionsMenuPointers,4,&local_10,0xfa,pcVar1);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(iVar3) {
    case 0:
      core_menu_cpp_configureGraphicsOptions_FUN_00510c80();
      break;
    case 1:
      core_menu_cpp_configureSoundOptions_FUN_00511e50();
      break;
    case 2:
      EVar1 = g_CGamePtr->game_control;
      core_menu_cpp_configureCustomKeys_FUN_00511890();
      if (EVar1 != g_CGamePtr->game_control) {
        core_menu_cpp_configureCustomKeyBindings_FUN_005138e0();
      }
      break;
    case 3:
      core_game_cpp_CGame_rollCredits_FUN_004e4010(g_CGamePtr);
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
  } while (iVar3 == 0);
  if (initialize_systems != 0) {
    core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
    core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
    core_inivar_cpp_writeIniData_FUN_004fc510();
    return;
  }
  core_inivar_cpp_writeIniData_FUN_004fc510();
  return;
}
