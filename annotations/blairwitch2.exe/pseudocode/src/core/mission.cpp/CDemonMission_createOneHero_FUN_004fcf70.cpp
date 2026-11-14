// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70
// Address: 004fcf70
// Address Range: [[004fcf70, 004fd0d5]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

{
  CDemonActor *actor_ptr;
  CDemonActor *pCVar1;
  CCharacter *local_14;
  
  if (_DAT_01cedee0 <= index) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x640;
    core_main_c_FUN_004e4500("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(index * 4 + 0x1cedee4) != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x641;
    core_main_c_FUN_004e4500("CDemonMission::createOneHero - hero already created!");
  }
  actor_ptr = this_ptr->first_actor;
  local_14 = (CCharacter *)0x0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
LAB_004fcfea:
      if (local_14 == (CCharacter *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                  (g_CEditorToolsPtr,"Can't find hero placeholder for hero %d");
        return 0;
      }
      *(CCharacter **)(index * 4 + 0x1cedee4) = local_14;
      return 1;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,_DAT_01cedf8c);
    if ((pCVar1 != (CDemonActor *)0x0) && (index == *(int *)pCVar1[1].actor_name)) {
      if (existing_actor == (CCharacter *)0x0) {
        local_14 = (CCharacter *)
                   core_hero_cpp_FUN_004d0a40(pCVar1,(&PTR_s_CGabriella_00617a68)[hero_type]);
      }
      else {
        local_14 = existing_actor;
        (*((existing_actor->base).vtable._ub)->setPositionAndOrientation)
                  (&existing_actor->base,&(pCVar1->location).position,(CVector3f *)&pCVar1->orient);
        (existing_actor->base).location.area_id = (pCVar1->location).area_id;
        core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
                  (&(existing_actor->model).base,0,0.0);
        (*(((existing_actor->base).vtable._uc)->_uc).setWalkTarget)
                  (existing_actor,(CDemonActor *)0x0,0.0,0.0);
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,&local_14->base);
      goto LAB_004fcfea;
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
