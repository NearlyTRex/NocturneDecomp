// Name: core_smiley.cpp_CSmiley_archive_FUN_00520ae0
// Address: 00520ae0
// Address Range: [[00520ae0, 00520b3b]]
// Convention: unknown
// Signature: void core_smiley_cpp_CSmiley_archive_FUN_00520ae0(int param_1)

#include "nocturne.h"

void core_smiley_cpp_CSmiley_archive_FUN_00520ae0(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbd28,"guardDistance");
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
