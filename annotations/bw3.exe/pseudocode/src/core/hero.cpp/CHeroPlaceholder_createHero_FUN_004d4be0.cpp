// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004d4be0
// Address: 004d4be0
// Address Range: [[004d4be0, 004d4c85]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004d4be0(CHeroPlaceholder *this_ptr,EHeroType hero_type)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004d4be0(CHeroPlaceholder *this_ptr,EHeroType hero_type)

{
  UOrientationVector *pUVar1;
  UOrientationVector *pUVar2;
  CDemonActor *actor_ptr;
  CHero *actor;
  uint class_name_hash;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  actor_ptr = core_actor_cpp_createActorByName_FUN_0040c4f0(this_ptr->hero_name);
  actor = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,class_name_hash);
  if (actor == (CHero *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\hero.cpp";
    g_INT_01d71de4 = 0x75c;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530
            (g_CDemonMission_PTR_00600530,(CDemonActor *)actor);
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
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)actor);
  return actor;
}
