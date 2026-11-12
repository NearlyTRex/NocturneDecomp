// Name: core_hero.cpp_FUN_004ecca0
// Address: 004ecca0
// Address Range: [[004ecca0, 004ecd45]]
// Convention: unknown
// Signature: CDemonActor * core_hero_cpp_FUN_004ecca0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * core_hero_cpp_FUN_004ecca0(int param_1)

{
  CDemonActor *pCVar1;
  uint class_name_hash;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  pCVar1 = core_actor_cpp_createActorByName_FUN_0040c2b0((char *)(param_1 + 0x15c));
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,class_name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\hero.cpp";
    _DAT_01d1d404 = 0x6cf;
    core_main_c_FUN_005030e0("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar1);
  (pCVar1->location).position.x = *(float *)(param_1 + 0x20);
  (pCVar1->location).position.y = *(float *)(param_1 + 0x24);
  (pCVar1->location).position.z = *(float *)(param_1 + 0x28);
  (pCVar1->location).area_id = *(int *)(param_1 + 0x2c);
  if (&pCVar1->orient != (UOrientationVector *)(param_1 + 0x30)) {
    (pCVar1->orient).vec.x = *(float *)(param_1 + 0x30);
    (pCVar1->orient).vec.y = *(float *)(param_1 + 0x34);
    (pCVar1->orient).vec.z = *(float *)(param_1 + 0x38);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(pCVar1);
  return pCVar1;
}
