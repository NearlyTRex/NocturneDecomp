// Name: core_beast.cpp_FUN_00415160
// Address: 00415160
// Address Range: [[00415160, 004151a7]]
// Convention: unknown
// Signature: void core_beast_cpp_FUN_00415160(int param_1)

#include "nocturne.h"

void core_beast_cpp_FUN_00415160(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
