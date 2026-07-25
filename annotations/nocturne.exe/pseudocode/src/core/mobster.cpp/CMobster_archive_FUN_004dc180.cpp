// Name: core_mobster.cpp_CMobster_archive_FUN_004dc180
// Address: 004dc180
// Address Range: [[004dc180, 004dc2a7]]
// Convention: unknown
// Signature: void core_mobster_cpp_CMobster_archive_FUN_004dc180(int param_1)

#include "nocturne.h"

void core_mobster_cpp_CMobster_archive_FUN_004dc180(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (INT_005bb124 < 4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  if (INT_005bb124 == 2) {
    core_actor_cpp_archiveClothList_FUN_0040cf70(param_1 + 0x2a8c,"clothList");
  }
  if (4 < INT_005bb124) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd40,"postMode");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd44,"ourPost");
  }
  if (5 < INT_005bb124) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd48,"vehicle");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd4c,"sideOfCar");
  }
  if (INT_005bb124 < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd50,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbd54,"holdPosCond");
  return;
}
