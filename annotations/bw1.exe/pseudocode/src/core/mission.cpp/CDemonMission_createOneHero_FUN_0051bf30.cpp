// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30
// Address: 0051bf30
// Address Range: [[0051bf30, 0051c09e]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_0051bf30(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_0051bf30(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

{
  CDemonActor *actor_ptr;
  CHeroPlaceholder *this_ptr_00;
  CHero *local_14;
  
  if (_DAT_01d06aa0 <= index) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x64f;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(index * 4 + 0x1d06aa4) != 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x650;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonMission::createOneHero - hero already created!");
  }
  actor_ptr = this_ptr->first_actor;
  local_14 = (CHero *)0x0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
LAB_0051bfaa:
      if (local_14 == (CHero *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                  (g_CEditorToolsPtr,"Can't find hero placeholder for hero %d");
        return 0;
      }
      *(CHero **)(index * 4 + 0x1d06aa4) = local_14;
      return 1;
    }
    this_ptr_00 = (CHeroPlaceholder *)
                  core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,_DAT_01d06b4c);
    if ((this_ptr_00 != (CHeroPlaceholder *)0x0) && (index == this_ptr_00->index)) {
      if (existing_actor == (CCharacter *)0x0) {
        local_14 = core_hero_cpp_CHeroPlaceholder_createHero_FUN_004ecca0
                             (this_ptr_00,(EHeroType)(&PTR_s_CGabriella_0061ef2c)[hero_type]);
      }
      else {
        local_14 = (CHero *)existing_actor;
        (*((existing_actor->base).vtable._ub)->setPositionAndOrientation)
                  (&existing_actor->base,&(this_ptr_00->base).location.position,
                   (CVector3f *)&(this_ptr_00->base).orient);
        (existing_actor->base).location.area_id = (this_ptr_00->base).location.area_id;
        core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&existing_actor->model);
        core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
                  (&(existing_actor->model).base,0,0.0);
        (*(((existing_actor->base).vtable._uc)->_uc).setWalkTarget)
                  (existing_actor,(CDemonActor *)0x0,0.0,0.0);
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                (0x01D2C900,(CDemonActor *)local_14);
      goto LAB_0051bfaa;
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
