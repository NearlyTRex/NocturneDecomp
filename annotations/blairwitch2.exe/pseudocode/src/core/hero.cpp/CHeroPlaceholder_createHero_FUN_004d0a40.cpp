// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004d0a40
// Address: 004d0a40
// Address Range: [[004d0a40, 004d0ae5]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004d0a40(CHeroPlaceholder *this_ptr,EHeroType hero_type)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004d0a40(CHeroPlaceholder *this_ptr,EHeroType hero_type)

{
  UOrientationVector *pUVar1;
  UOrientationVector *pUVar2;
  CDemonActor *actor_ptr;
  CHero *actor;
  uint class_name_hash;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  actor_ptr = core_actor_cpp_createActorByName_FUN_0040c5a0(this_ptr->hero_name);
  actor = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,class_name_hash);
  if (actor == (CHero *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 1863;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
            (g_CDemonMission_PTR_00618170,(CDemonActor *)actor);
  (actor->base).base.location.position.x = (this_ptr->base).location.position.x;
  (actor->base).base.location.position.y = (this_ptr->base).location.position.y;
  (actor->base).base.location.position.z = (this_ptr->base).location.position.z;
  (actor->base).base.location.area_id = (this_ptr->base).location.area_id;
  pUVar1 = &(actor->base).base.orient;
  pUVar2 = &(this_ptr->base).orient;
  if (pUVar1 != pUVar2) {
    (pUVar1->vec).x = (pUVar2->vec).x;
    (actor->base).base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (actor->base).base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)actor);
  return actor;
}
