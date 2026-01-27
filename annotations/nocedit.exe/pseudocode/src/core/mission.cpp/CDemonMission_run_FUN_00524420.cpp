// Name: core_mission.cpp_CDemonMission_run_FUN_00524420
// Address: 00524420
// Address Range: [[00524420, 00524623]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_run_FUN_00524420(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_run_FUN_00524420(CDemonMission *this_ptr)

{
  CHero *actor_ptr;
  int iVar1;
  char *text_string;
  uint color_value;
  bool bVar2;
  int color_mode;
  
  while( true ) {
    if (g_HeroCount < 1) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x4c5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::run - hero list empty");
    }
    if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x4c6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
    DAT_02f35f10 = '\0';
    core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(this_ptr);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_004daf80(g_CGamePtr);
    actor_ptr = g_HeroActors[g_LocalHeroIndex];
    core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(this_ptr,(CDemonActor *)actor_ptr);
    (*(((actor_ptr->base).base.vtable._uh)->_uh).herofunc4)();
    core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
    if ((iVar1 == 0) || (DAT_02f35f10 == '\0')) break;
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(g_CDemonSetPtr->geometry_filename,"hq.geo");
    bVar2 = iVar1 != 0;
    if (bVar2) {
      core_game_cpp_CGame_displayActStats_FUN_004e3800(g_CGamePtr);
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
    color_value = (uint)!bVar2;
    core_level_cpp_CLevelLoader_show_FUN_00503dc0(g_CLevelLoaderPtr,9,(uint)bVar2,iVar1);
    core_mission_cpp_CDemonMission_load_FUN_00522d90(this_ptr,&DAT_02f35f10,0);
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(this_ptr,(int)actor_ptr);
    if (iVar1 == 0) goto LAB_005244ee;
    iVar1 = core_mission_cpp_CDemonMission_FUN_00524760(this_ptr);
    if (iVar1 == 0) goto LAB_005244ee;
    if (color_value == 0) {
      text_string = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                              ("Press any key to continue...");
      color_mode = 0xf8;
      iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
      engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
                (g_ThemeFont,0x27f,0x1db - iVar1,color_mode,color_value,text_string);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
LAB_005244ee:
  if (g_CGamePtr->unk12 == 0) {
    return;
  }
  core_game_cpp_CGame_finishAct_FUN_004e3b90();
  return;
}
