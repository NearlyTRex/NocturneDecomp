// Name: core_drone.cpp_FUN_004630e0
// Address: 004630e0
// Address Range: [[004630e0, 0046314c]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_004630e0(int param_1)

#include "nocturne.h"

void core_drone_cpp_FUN_004630e0(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (g_INT_005b0660 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
