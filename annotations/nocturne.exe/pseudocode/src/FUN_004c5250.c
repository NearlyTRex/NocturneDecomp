// Name: FUN_004c5250
// Address: 004c5250
// Address Range: [[004c5250, 004c52bc]]
// Convention: unknown
// Signature: void FUN_004c5250(int param_1)

#include "nocturne.h"

void FUN_004c5250(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (INT_005bac7c < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
