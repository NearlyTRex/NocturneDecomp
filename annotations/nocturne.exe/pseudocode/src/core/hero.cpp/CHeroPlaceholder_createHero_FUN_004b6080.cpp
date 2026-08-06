// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080
// Address: 004b6080
// Address Range: [[004b6080, 004b61e9]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004b6080(CHeroPlaceholder *this_ptr,EHeroType hero_type)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004b6080(CHeroPlaceholder *this_ptr,EHeroType hero_type)

{
  UOrientationVector *pUVar1;
  CDemonActor *actor_ptr;
  UOrientationVector *pUVar2;
  CHero *actor;
  char *class_name;
  uint class_name_hash;
  
  actor = (CHero *)0x0;
  switch(hero_type) {
  case HERO_TYPE_GABRIELLA:
    class_name = "CGabriella";
    break;
  case HERO_TYPE_SVETLANA:
    class_name = "CSvetlana";
    break;
  case HERO_TYPE_STRANGER:
    class_name = "CStranger";
    break;
  case HERO_TYPE_SCAT:
    class_name = "CScat";
    break;
  case HERO_TYPE_BARON:
    class_name = "CBaron";
    break;
  case HERO_TYPE_ICEPICK:
    class_name = "CIcePick";
    break;
  case HERO_TYPE_HAYSTACK:
    class_name = "CHaystack";
    break;
  case HERO_TYPE_COLONEL:
    class_name = "CColonel";
    break;
  case HERO_TYPE_MOLOCH:
    class_name = "CMoloch";
    break;
  default:
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 1400;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CHeroPlaceholder::createHero - invalid hero type.");
    goto LAB_004b60b9;
  }
  class_name_hash = g_CHeroActorType_01cae0ec.name_hash;
  actor_ptr = core_actor_cpp_createActorByName_FUN_0040d540(class_name);
  actor = (CHero *)core_actor_cpp_castToClassHash_FUN_0040d890(actor_ptr,class_name_hash);
LAB_004b60b9:
  if (actor == (CHero *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 1405;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
            (g_CDemonMission_PTR_005baf90,(CDemonActor *)actor);
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
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)actor);
  return actor;
}
