// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
// Address: 004f3d80
// Address Range: [[004f3d80, 004f3ee9]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr,EHeroType hero_type)

#include "nocturne.h"

CDemonActor * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr,EHeroType hero_type)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  char *class_name;
  uint class_name_hash;
  
  pCVar2 = (CDemonActor *)0x0;
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
    g_CurrentLineNumber = 0x578;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CHeroPlaceholder::createHero - invalid hero type.");
    goto LAB_004f3db9;
  }
  class_name_hash = g_CHeroClassInfo.name_hash;
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040c430(class_name);
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,class_name_hash);
LAB_004f3db9:
  if (pCVar2 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 0x57d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,pCVar2);
  (pCVar2->location).position.x = (this_ptr->base).location.position.x;
  (pCVar2->location).position.y = (this_ptr->base).location.position.y;
  (pCVar2->location).position.z = (this_ptr->base).location.position.z;
  (pCVar2->location).area_id = (this_ptr->base).location.area_id;
  pUVar1 = &(this_ptr->base).orient;
  if (&pCVar2->orient != pUVar1) {
    (pCVar2->orient).vec.x = (pUVar1->vec).x;
    (pCVar2->orient).vec.y = (this_ptr->base).orient.vec.y;
    (pCVar2->orient).vec.z = (this_ptr->base).orient.vec.z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar2);
  return pCVar2;
}
