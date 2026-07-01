// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
// Address: 004f3d80
// MANUAL RECONSTRUCTION
// Address Range: [[004f3d80, 004f3ee9]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr,EHeroType hero_type)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr,EHeroType hero_type)

{
  UOrientationVector *pUVar1;
  CDemonActor *actor_ptr;
  UOrientationVector *pUVar2;
  CHero *pCVar2;
  char *class_name;
  uint class_name_hash;
  
  pCVar2 = (CHero *)0x0;
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
    core_main_c_displayErrorAndQuit_FUN_00506f10("CHeroPlaceholder::createHero - invalid hero type.");
    goto LAB_004f3db9;
  }
  class_name_hash = g_CHeroClassInfo.name_hash;
  actor_ptr = core_actor_cpp_createActorByName_FUN_0040c430(class_name);
  pCVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
LAB_004f3db9:
  if (pCVar2 == (CHero *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 1405;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
            (g_CDemonMissionPtr,(CDemonActor *)pCVar2);
  (pCVar2->base).base.location = (this_ptr->base).location;
  pUVar1 = &(pCVar2->base).base.orient;
  pUVar2 = &(this_ptr->base).orient;
  if (pUVar1 != pUVar2) {
    *pUVar1 = *pUVar2;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)pCVar2);
  return pCVar2;
}
