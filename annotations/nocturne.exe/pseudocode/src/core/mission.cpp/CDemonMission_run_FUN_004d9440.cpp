// Name: core_mission.cpp_CDemonMission_run_FUN_004d9440
// Address: 004d9440
// Address Range: [[004d9440, 004d9643]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(CDemonMission *this_ptr)

{
  CHero *this_ptr_00;
  int iVar1;
  char *text;
  uint color_value;
  bool bVar2;
  int color_mode;
  
  while( true ) {
    if (_DAT_01cae0d4 < 1) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 1223;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::run - hero list empty");
    }
    if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 1224;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
              (this_ptr,(g_HeroActors[g_LocalHeroIndex]->base).base.location.area_id);
    DAT_01ccbbf0 = '\0';
    core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(this_ptr);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_0049da10(g_CGame_PTR_005b9354);
    this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
    core_mission_cpp_CDemonMission_FUN_004d8cd0(this_ptr,(CDemonActor *)this_ptr_00);
    (*(((this_ptr_00->base).base.vtable._uh)->_uh).reset)(this_ptr_00);
    core_mission_cpp_CDemonMission_FUN_004d7ea0(this_ptr);
    if ((iVar1 == 0) || (DAT_01ccbbf0 == '\0')) break;
    iVar1 = _stricmp
                      (g_CDemonSet_PTR_005be368->geometry_filename,"hq.geo");
    bVar2 = iVar1 != 0;
    if (bVar2) {
      core_game_cpp_CGame_displayActStats_FUN_004a6680(g_CGame_PTR_005b9354);
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
    color_value = (uint)!bVar2;
    core_level_cpp_CLevelLoader_show_FUN_004c5640(g_CLevelLoader_PTR_005baca0,9,(uint)bVar2,iVar1);
    core_mission_cpp_CDemonMission_load_FUN_004d7ee0(this_ptr,&DAT_01ccbbf0,0);
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(this_ptr,&this_ptr_00->base);
    if (iVar1 == 0) goto LAB_004d950e;
    iVar1 = core_mission_cpp_CDemonMission_startMission_FUN_004d9780(this_ptr);
    if (iVar1 == 0) goto LAB_004d950e;
    if (color_value == 0) {
      text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press any key to continue...")
      ;
      color_mode = 0xf8;
      iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b9900,0x58);
      engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0
                (g_CBitFont_PTR_014b9900,0x27f,0x1db - iVar1,color_mode,color_value,text);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(this_ptr,(CDemonActor *)this_ptr_00,1);
LAB_004d950e:
  if (g_CGame_PTR_005b9354->act_completion_state == 0) {
    return;
  }
  core_game_cpp_CGame_finishAct_FUN_004a6a10(g_CGame_PTR_005b9354);
  return;
}
