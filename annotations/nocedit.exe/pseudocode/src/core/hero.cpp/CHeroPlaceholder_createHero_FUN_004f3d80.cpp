// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
// Address: 004f3d80
// Address Range: [[004f3d80, 004f3ee9]]
// Convention: __cdecl
// Signature: CDemonActor * core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder * this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl
core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr)

{
  COrientation *pCVar1;
  CDemonActor *pCVar2;
  uint in_stack_00000008;
  char *class_name;
  uint class_name_hash;
  
  pCVar2 = (CDemonActor *)0x0;
  switch(in_stack_00000008) {
  case 0:
    class_name = "CGabriella";
    break;
  case 1:
    class_name = "CSvetlana";
    break;
  case 2:
    class_name = "CStranger";
    break;
  case 3:
    class_name = "CScat";
    break;
  case 4:
    class_name = "CBaron";
    break;
  case 5:
    class_name = "CIcePick";
    break;
  case 6:
    class_name = "CHaystack";
    break;
  case 7:
    class_name = "CColonel";
    break;
  case 8:
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
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (pCVar2->location).position.x = (this_ptr->base_actor).location.position.x;
  (pCVar2->location).position.y = (this_ptr->base_actor).location.position.y;
  (pCVar2->location).position.z = (this_ptr->base_actor).location.position.z;
  (pCVar2->location).area_id = (this_ptr->base_actor).location.area_id;
  pCVar1 = &(this_ptr->base_actor).orient;
  if (&pCVar2->orient != pCVar1) {
    (pCVar2->orient).pitch = pCVar1->pitch;
    (pCVar2->orient).bank = (this_ptr->base_actor).orient.bank;
    (pCVar2->orient).heading = (this_ptr->base_actor).orient.heading;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar2);
  return pCVar2;
}
