// Name: core_cow.cpp_FUN_0043c2e0
// Address: 0043c2e0
// Address Range: [[0043c2e0, 0043c34c]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_0043c2e0(int param_1)

#include "nocturne.h"

void core_cow_cpp_FUN_0043c2e0(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (g_INT_005ad3ac < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
