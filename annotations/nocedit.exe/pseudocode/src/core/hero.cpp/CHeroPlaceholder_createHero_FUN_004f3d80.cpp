// Name: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
// Address: 004f3d80
// Address Range: [[004f3d80, 004f3ee9]]
// Convention: __cdecl
// Signature: CDemonActor * core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder * this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl
core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr)

{
  CDemonActor *pCVar1;
  uint in_stack_00000008;
  int in_stack_0000000c;
  char *class_name;
  uint class_name_hash;
  
  pCVar1 = (CDemonActor *)0x0;
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
  pCVar1 = core_actor_cpp_createActorByName_FUN_0040c430(class_name);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,class_name_hash);
LAB_004f3db9:
  if (pCVar1 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 0x57d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (pCVar1->location).position.x = *(float *)(in_stack_0000000c + 0x20);
  (pCVar1->location).position.y = *(float *)(in_stack_0000000c + 0x24);
  (pCVar1->location).position.z = *(float *)(in_stack_0000000c + 0x28);
  (pCVar1->location).area_id = *(int *)(in_stack_0000000c + 0x2c);
  if (&pCVar1->orient != (COrientation *)(in_stack_0000000c + 0x30)) {
    (pCVar1->orient).pitch = *(float *)(in_stack_0000000c + 0x30);
    (pCVar1->orient).bank = *(float *)(in_stack_0000000c + 0x34);
    (pCVar1->orient).heading = *(float *)(in_stack_0000000c + 0x38);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar1);
  return pCVar1;
}
