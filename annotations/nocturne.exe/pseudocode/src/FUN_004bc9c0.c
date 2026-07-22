// Name: FUN_004bc9c0
// Address: 004bc9c0
// Address Range: [[004bc9c0, 004bca07]]
// Convention: unknown
// Signature: void FUN_004bc9c0(int param_1)

#include "nocturne.h"

void FUN_004bc9c0(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
