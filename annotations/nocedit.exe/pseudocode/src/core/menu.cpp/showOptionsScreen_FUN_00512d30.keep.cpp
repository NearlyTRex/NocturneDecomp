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
#if NOCTURNE_AUTHENTIC_DEV_TOOLS
  char *menu_ptrs [8];
  char dev_tools_line [256];
  int dev_tools_item;
  int menu_count;
  int menu_ch;
  int menu_y;
#endif

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
#if NOCTURNE_AUTHENTIC_DEV_TOOLS
    dev_tools_item = -1;
    menu_count = 4;
    if (initialize_systems == 0) {
      for (iVar3 = 0; iVar3 < 4; iVar3++) {
        menu_ptrs[iVar3] = g_OptionsMenuPointers[iVar3];
      }
      strcpy(dev_tools_line,
             support_newmsg_cpp_getLocalizedString_FUN_005441f0("Developer tools"));
      dev_tools_item = 4;
      menu_ptrs[dev_tools_item] = dev_tools_line;
      menu_count = 5;
      menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont,0x58);
      menu_y = 0xfa;
      if (g_WindowHeight < menu_y + (menu_count + 4) * menu_ch) {
        menu_y = g_WindowHeight - (menu_count + 4) * menu_ch;
      }
      if (menu_y < 0) {
        menu_y = 0;
      }
      iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                        (menu_ptrs,menu_count,&local_10,menu_y,pcVar1);
    }
    else {
      iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                        (g_OptionsMenuPointers,4,&local_10,0xfa,pcVar1);
    }
#else
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_OptionsMenuPointers,4,&local_10,0xfa,pcVar1);
#endif
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
      break;
#if NOCTURNE_AUTHENTIC_DEV_TOOLS
    case 4:
#if NOCTURNE_AUTHENTIC_D3D_OPTIONS
      if (g_UseDirect3D != 0) {
        engine_special_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("3D acceleration has been turned off!",0,0);
        engine_2d_c_drawText_FUN_00401fd0("Press any key to continue...",0,0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      g_UseDirect3D = 0;
#endif
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_main_c_showDeveloperToolsMenu_FUN_005073a0();
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      break;
#endif
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
