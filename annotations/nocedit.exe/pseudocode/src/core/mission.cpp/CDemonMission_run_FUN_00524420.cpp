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
  int iVar2;
  char *color_value;
  int unaff_retaddr;
  CDemonActor *in_stack_00000008;
  CLevelLoader *this_ptr_00;
  int in_stack_0000002c;
  char *in_stack_00000044;
  
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
    (*(actor_ptr->base_character).base_actor.vtable[1].fillAttackDamageInfo)
              ((CDemonActor *)actor_ptr,unaff_retaddr,(SDamageInfo *)this_ptr,in_stack_00000008);
    core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
    if ((iVar1 == 0) || (DAT_02f35f10 == '\0')) break;
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(g_CDemonSetPtr->geometry_filename,"hq.geo");
    if (iVar1 != 0) {
      core_game_cpp_CGame_displayActStats_FUN_004e3800(g_CGamePtr);
      in_stack_0000002c = -1;
      iVar2 = 9;
      this_ptr_00 = g_CLevelLoaderPtr;
    }
    else {
      iVar2 = 0;
      this_ptr_00 = (CLevelLoader *)0x9;
    }
    core_level_cpp_CLevelLoader_show_FUN_00503dc0(this_ptr_00,iVar2,1,in_stack_0000002c);
    core_mission_cpp_CDemonMission_load_FUN_00522d90(this_ptr,&DAT_02f35f10,0);
    in_stack_0000002c = 0x52457b;
    iVar2 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(this_ptr,(int)actor_ptr);
    if (iVar2 == 0) goto LAB_005244ee;
    iVar2 = core_mission_cpp_CDemonMission_FUN_00524760(this_ptr);
    if (iVar2 == 0) goto LAB_005244ee;
    if (iVar1 != 0) {
      color_value = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                              ("Press any key to continue...");
      iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
      in_stack_0000002c = 0x5245e0;
      engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
                (g_ThemeFont,0x27f,0x1db - iVar1,0,(int)color_value,in_stack_00000044);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
LAB_005244ee:
  if (g_CGamePtr->field87_0x258 == 0) {
    return;
  }
  core_game_cpp_CGame_finishAct_FUN_004e3b90();
  return;
}
