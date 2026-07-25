// Name: core_tentacle.cpp_CTentacle_archive_FUN_00544470
// Address: 00544470
// Address Range: [[00544470, 005444ec]]
// Convention: unknown
// Signature: void core_tentacle_cpp_CTentacle_archive_FUN_00544470(int param_1)

#include "nocturne.h"

void core_tentacle_cpp_CTentacle_archive_FUN_00544470(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (INT_005c10b0 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040cbf0(param_1 + 0x150,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd2c,"graveActor");
  return;
}
