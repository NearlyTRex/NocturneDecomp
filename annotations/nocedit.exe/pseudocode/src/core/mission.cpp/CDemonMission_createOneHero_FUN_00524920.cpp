// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
// Address: 00524920
// Address Range: [[00524920, 00524a7e]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_00524920 (CDemonMission *this_ptr,int index,int param_3,void *param_4)

#include "nocturne.h"

int __cdecl
core_mission_cpp_CDemonMission_createOneHero_FUN_00524920
          (CDemonMission *this_ptr,int index,int param_3,void *param_4)

{
  CDemonActor *actor_ptr;
  CHeroPlaceholder *this_ptr_00;
  CHero *local_14;
  
  if (g_HeroCount <= index) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x5f1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createOneHero - too many heros!");
  }
  if (g_HeroActors[index] != (CHero *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x5f2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createOneHero - hero already created!");
  }
  actor_ptr = this_ptr->first_actor;
  local_14 = (CHero *)0x0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
LAB_0052499a:
      if (local_14 == (CHero *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't find hero placeholder for hero %d",index);
        return 0;
      }
      g_HeroActors[index] = local_14;
      return 1;
    }
    this_ptr_00 = (CHeroPlaceholder *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (actor_ptr,g_CHeroPlaceholderClassInfo.name_hash);
    if ((this_ptr_00 != (CHeroPlaceholder *)0x0) && (index == this_ptr_00->index)) {
      if (param_4 == (void *)0x0) {
        local_14 = (CHero *)core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80
                                      (this_ptr_00,param_3);
      }
      else {
        local_14 = param_4;
        (**(code **)(*(int *)((int)param_4 + 0x154) + 0x60))();
        *(int *)((int)param_4 + 0x2c) = (this_ptr_00->base).location.area_id;
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  ((CMotionController *)((int)param_4 + 0x158),0,0.0);
        (**(code **)(*(int *)((int)param_4 + 0x154) + 0x144))();
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                (g_CDemonMissionPtr,(CDemonActor *)local_14);
      goto LAB_0052499a;
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
