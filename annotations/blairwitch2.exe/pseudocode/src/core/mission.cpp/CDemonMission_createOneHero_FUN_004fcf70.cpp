// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70
// Address: 004fcf70
// Address Range: [[004fcf70, 004fd0d5]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

{
  CDemonActor *actor_ptr;
  CHeroPlaceholder *this_ptr_00;
  CHero *local_14;
  
  if (g_INT_01cedee0 <= index) {
    g_CHAR_PTR_01d046a0 = "..\\core\\mission.cpp";
    g_INT_01d046a4 = 0x640;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonMission::createOneHero - too many heros!");
  }
  if (g_CHero_PTR_ARRAY_01cedee4[index] != (CHero *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\mission.cpp";
    g_INT_01d046a4 = 0x641;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonMission::createOneHero - hero already created!");
  }
  actor_ptr = this_ptr->first_actor;
  local_14 = (CHero *)0x0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
LAB_004fcfea:
      if (local_14 == (CHero *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                  (g_CEditorToolsPtr,"Can't find hero placeholder for hero %d");
        return 0;
      }
      g_CHero_PTR_ARRAY_01cedee4[index] = local_14;
      return 1;
    }
    this_ptr_00 = (CHeroPlaceholder *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (actor_ptr,g_CDemonActorType_01cedf54.name_hash);
    if ((this_ptr_00 != (CHeroPlaceholder *)0x0) && (index == this_ptr_00->index)) {
      if (existing_actor == (CCharacter *)0x0) {
        local_14 = core_hero_cpp_CHeroPlaceholder_createHero_FUN_004d0a40
                             (this_ptr_00,(EHeroType)g_CHAR_PTR_ARRAY_00617a68[hero_type]);
      }
      else {
        local_14 = (CHero *)existing_actor;
        (*((existing_actor->base).vtable._ub)->setPositionAndOrientation)
                  (&existing_actor->base,&(this_ptr_00->base).location.position,
                   (CVector3f *)&(this_ptr_00->base).orient);
        (existing_actor->base).location.area_id = (this_ptr_00->base).location.area_id;
        core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
                  (&(existing_actor->model).base,0,0.0);
        (*(((existing_actor->base).vtable._uc)->_uc).setWalkTarget)
                  (existing_actor,(CDemonActor *)0x0,0.0,0.0);
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                (g_CDemonMission_PTR_00618170,(CDemonActor *)local_14);
      goto LAB_004fcfea;
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
