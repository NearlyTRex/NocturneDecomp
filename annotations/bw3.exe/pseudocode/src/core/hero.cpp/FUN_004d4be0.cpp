// Name: core_hero.cpp_FUN_004d4be0
// Address: 004d4be0
// Address Range: [[004d4be0, 004d4c85]]
// Convention: unknown
// Signature: CDemonActor * core_hero_cpp_FUN_004d4be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * core_hero_cpp_FUN_004d4be0(int param_1)

{
  uint uVar1;
  CDemonActor *actor;
  
  uVar1 = core_actor_cpp_createActorByName_FUN_0040c4f0(param_1 + 0x15c,g_CHeroClassInfo.name_hash);
  actor = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840(uVar1);
  if (actor == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\hero.cpp";
    _DAT_01d71de4 = 0x75c;
    core_main_c_FUN_004e4330("CHeroPlaceholder::createHero - failed.");
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,actor);
  (actor->location).position.x = *(float *)(param_1 + 0x20);
  (actor->location).position.y = *(float *)(param_1 + 0x24);
  (actor->location).position.z = *(float *)(param_1 + 0x28);
  (actor->location).area_id = *(int *)(param_1 + 0x2c);
  if (&actor->orient != (UOrientationVector *)(param_1 + 0x30)) {
    (actor->orient).vec.x = *(float *)(param_1 + 0x30);
    (actor->orient).vec.y = *(float *)(param_1 + 0x34);
    (actor->orient).vec.z = *(float *)(param_1 + 0x38);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(actor);
  return actor;
}
