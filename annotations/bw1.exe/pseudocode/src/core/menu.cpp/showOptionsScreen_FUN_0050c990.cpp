// Name: core_menu.cpp_showOptionsScreen_FUN_0050c990
// Address: 0050c990
// Address Range: [[0050c990, 0050cc74]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_showOptionsScreen_FUN_0050c990(int initialize_systems)

#include "nocturne.h"

void __cdecl core_menu_cpp_showOptionsScreen_FUN_0050c990(int initialize_systems)

{
  CDemonSet *this_ptr;
  int iVar1;
  char *pcVar2;
  int local_14;
  
  local_14 = 0;
  if (initialize_systems != 0) {
    core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
    core_moon_cpp_CMoon_init_FUN_00521c50(&g_CMoonInstance);
  }
  pcVar2 = g_CHAR_ARRAY_01d20a30;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  iVar1 = 0;
  do {
    *(char **)((int)&g_CHAR_PTR_01d21030 + iVar1) = pcVar2;
    iVar1 = iVar1 + 4;
    pcVar2 = pcVar2 + 0x100;
  } while (iVar1 != 0x18);
  do {
    core_game_cpp_CGame_updateDT_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_00521e40(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Graphic options");
    _sprintf(g_CHAR_ARRAY_01d20a30,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound options");
    _sprintf(g_CHAR_ARRAY_01d20b30,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Control options");
    _sprintf(g_CHAR_ARRAY_01d20c30,pcVar2);
    if (g_CGamePtr->puzzle_difficulty_mode == 1) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Puzzle difficulty: Hard")
      ;
      _sprintf(g_CHAR_ARRAY_01d20d30,pcVar2);
    }
    else {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Puzzle difficulty: Normal");
      _sprintf(g_CHAR_ARRAY_01d20d30,pcVar2);
      g_CGamePtr->puzzle_difficulty_mode = 0;
    }
    if (g_CGamePtr->combat_difficulty_mode == 1) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Combat difficulty: Hard")
      ;
      _sprintf(g_CHAR_ARRAY_01d20e30,pcVar2);
    }
    else {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Combat difficulty: Normal");
      _sprintf(g_CHAR_ARRAY_01d20e30,pcVar2);
      g_CGamePtr->combat_difficulty_mode = 0;
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Credits");
    _sprintf(g_CHAR_ARRAY_01d20f30,pcVar2);
    g_CGamePtr->hero_number = HERO_TYPE_MOLOCH|HERO_TYPE_SVETLANA;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Option Menu");
    iVar1 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      (&g_CHAR_PTR_01d21030,6,&local_14,0x32,pcVar2);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    switch(iVar1) {
    case 0:
      core_menu_cpp_configureGraphicsOptions_FUN_0050aa90();
      break;
    case 1:
      core_menu_cpp_configureSoundOptions_FUN_0050ba70();
      break;
    case 2:
      g_INT_01d1ee90 = g_CGamePtr->game_control;
      core_menu_cpp_configureCustomKeys_FUN_0050b470();
      if (g_INT_01d1ee90 != g_CGamePtr->game_control) {
        core_menu_cpp_configureCustomKeyBindings_FUN_0050d640();
      }
      break;
    case 5:
      core_game_cpp_CGame_rollCredits_FUN_004d8e50(g_CGamePtr);
      core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
    }
    iVar1 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_ESCAPE);
  } while (iVar1 == 0);
  if (initialize_systems == 0) {
    core_inivar_cpp_writeIniData_FUN_004f5760();
    return;
  }
  core_moon_cpp_CMoon_free_FUN_00521d50(&g_CMoonInstance);
  core_sound_cpp_CSound_reset_FUN_0057d800(g_CSound_PTR_006236b8);
  core_inivar_cpp_writeIniData_FUN_004f5760();
  return;
}
