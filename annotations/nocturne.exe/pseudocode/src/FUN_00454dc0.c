// Name: FUN_00454dc0
// Address: 00454dc0
// Address Range: [[00454dc0, 00454e2c]]
// Convention: unknown
// Signature: void FUN_00454dc0(int param_1)

#include "nocturne.h"

void FUN_00454dc0(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"@@speed" + 2);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (0x00000002 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
