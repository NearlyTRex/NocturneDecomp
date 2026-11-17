// Name: core_menu.cpp_showOptionsScreen_FUN_004ea280
// Address: 004ea280
// Address Range: [[004ea280, 004ea4b0]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showOptionsScreen_FUN_004ea280(int initialize_systems)

#include "nocturne.h"

void __cdecl core_menu_cpp_showOptionsScreen_FUN_004ea280(int initialize_systems)

{
  CDemonSet *this_ptr;
  int iVar1;
  char *pcVar2;
  int local_10;
  
  local_10 = 0;
  if (initialize_systems != 0) {
    core_moon_cpp_CMoon_init_FUN_004f94a0(&g_CMoonInstance);
    core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
  }
  pcVar2 = g_CHAR_ARRAY_01d75478;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  iVar1 = 0;
  do {
    *(char **)((int)&g_CHAR_PTR_01d75878 + iVar1) = pcVar2;
    iVar1 = iVar1 + 4;
    pcVar2 = pcVar2 + 0x100;
  } while (iVar1 != 0x10);
  do {
    core_game_cpp_CGame_updateDT_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_004f9670(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Graphic Options");
    _sprintf(g_CHAR_ARRAY_01d75478,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Sound Options");
    _sprintf(g_CHAR_ARRAY_01d75578,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Control Options");
    _sprintf(g_CHAR_ARRAY_01d75678,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Credits");
    _sprintf(g_CHAR_ARRAY_01d75778,pcVar2);
    g_CGamePtr->hero_number = HERO_TYPE_MOLOCH|HERO_TYPE_SVETLANA;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Option Menu");
    iVar1 = core_menu_cpp_renderMenuAndGetChoice_FUN_004e7860
                      (&g_CHAR_PTR_01d75878,4,&local_10,200,pcVar2);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    switch(iVar1) {
    case 0:
      core_menu_cpp_configureGraphicsOptions_FUN_004e85a0();
      break;
    case 1:
      core_menu_cpp_configureSoundOptions_FUN_004e94f0();
      break;
    case 2:
      g_INT_01d737d8 = g_CGamePtr->game_control;
      core_menu_cpp_configureCustomKeys_FUN_004e8f80();
      if (g_INT_01d737d8 != g_CGamePtr->game_control) {
        core_menu_cpp_configureCustomKeyBindings_FUN_004eae80();
      }
      break;
    case 3:
      core_game_cpp_CGame_rollCredits_FUN_004c02a0(g_CGamePtr);
      core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
    }
    iVar1 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_ESCAPE);
  } while (iVar1 == 0);
  if (initialize_systems != 0) {
    core_moon_cpp_CMoon_free_FUN_004f9580(&g_CMoonInstance);
    core_sound_cpp_CSound_reset_FUN_00560930(g_CSound_PTR_006045f8);
    core_inivar_cpp_writeIniData_FUN_004d95c0();
    return;
  }
  core_inivar_cpp_writeIniData_FUN_004d95c0();
  return;
}
