// Name: core_menu.cpp_showOptionsScreen_FUN_004d21c0
// Address: 004d21c0
// Address Range: [[004d21c0, 004d23b6]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showOptionsScreen_FUN_004d21c0(int initialize_systems)

#include "nocturne.h"

void __cdecl core_menu_cpp_showOptionsScreen_FUN_004d21c0(int initialize_systems)

{
  EControlMode EVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int local_10;
  
  local_10 = 0;
  if (initialize_systems != 0) {
    core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
    core_moon_cpp_CMoon_init_FUN_004de860(&g_CMoon_01cc5780);
  }
  iVar4 = 0x1cc7900;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(g_CGame_PTR_005b9354);
  iVar2 = 0;
  do {
    *(int *)(iVar2 + 0x1cc7d00) = iVar4;
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + 0x100;
  } while (iVar2 != 0x10);
  do {
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(g_CGame_PTR_005b9354);
    core_moon_cpp_CMoon_update_FUN_004deae0
              (&g_CMoon_01cc5780,g_CGame_PTR_005b9354->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50(&g_CMoon_01cc5780);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Graphic options");
    _sprintf((char *)0x1cc7900,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound options");
    _sprintf((char *)0x1cc7a00,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Control options");
    _sprintf((char *)0x1cc7b00,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Credits");
    _sprintf((char *)0x1cc7c00,pcVar3);
    g_CGame_PTR_005b9354->hero_number = HERO_TYPE_STRANGER;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Option Menu");
    iVar2 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      ((char **)0x1cc7d00,4,&local_10,0xfa,pcVar3);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    switch(iVar2) {
    case 0:
      core_menu_cpp_configureGraphicsOptions_FUN_004d0080();
      break;
    case 1:
      core_menu_cpp_configureSoundOptions_FUN_004d12e0();
      break;
    case 2:
      EVar1 = g_CGame_PTR_005b9354->game_control;
      core_menu_cpp_configureCustomKeys_FUN_004d0d20();
      if (EVar1 != g_CGame_PTR_005b9354->game_control) {
        core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00();
      }
      break;
    case 3:
      core_game_cpp_CGame_rollCredits_FUN_004a6e90(g_CGame_PTR_005b9354);
      core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
    }
    iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
  } while (iVar2 == 0);
  if (initialize_systems != 0) {
    core_moon_cpp_CMoon_free_FUN_004dea60(&g_CMoon_01cc5780);
    core_sound_cpp_CSound_reset_FUN_0052e9c0(g_CSound_PTR_005bed68);
    core_inivar_cpp_writeIniData_FUN_004be2d0();
    return;
  }
  core_inivar_cpp_writeIniData_FUN_004be2d0();
  return;
}
