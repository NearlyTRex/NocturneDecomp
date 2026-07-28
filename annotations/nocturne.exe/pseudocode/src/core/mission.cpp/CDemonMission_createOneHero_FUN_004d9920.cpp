// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920
// Address: 004d9920
// Address Range: [[004d9920, 004d9a7e]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

{
  CDemonActor *actor_ptr;
  CHeroPlaceholder *this_ptr_00;
  CHero *local_14;
  
  if (_DAT_01cae0d4 <= index) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x5f3;
    core_main_c_FUN_004c8440("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(index * 4 + 0x1cae0d8) != 0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x5f4;
    core_main_c_FUN_004c8440("CDemonMission::createOneHero - hero already created!");
  }
  actor_ptr = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
  local_14 = (CHero *)0x0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
LAB_004d999a:
      if (local_14 == (CHero *)0x0) {
        shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't find hero placeholder for hero %d",index);
        return 0;
      }
      *(CHero **)(index * 4 + 0x1cae0d8) = local_14;
      return 1;
    }
    this_ptr_00 = (CHeroPlaceholder *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (actor_ptr,g_CHeroPlaceholderActorType_01cae128.name_hash);
    if ((this_ptr_00 != (CHeroPlaceholder *)0x0) && (index == this_ptr_00->index)) {
      if (existing_actor == (CCharacter *)0x0) {
        local_14 = core_hero_cpp_CHeroPlaceholder_createHero_FUN_004b6080(this_ptr_00,hero_type);
      }
      else {
        local_14 = (CHero *)existing_actor;
        (*((existing_actor->base).vtable._ub)->setPositionAndOrientation)
                  (&existing_actor->base,&(this_ptr_00->base).location.position,
                   (CVector3f *)&(this_ptr_00->base).orient);
        (existing_actor->base).location.area_id = (this_ptr_00->base).location.area_id;
        core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990
                  (&(existing_actor->model).motion_controller,0,0.0);
        (*(((existing_actor->base).vtable._uc)->_uc).canBeAttracted)
                  (existing_actor,(CVector3f *)0x0);
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                (0x01CC9450,(CDemonActor *)local_14);
      goto LAB_004d999a;
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
