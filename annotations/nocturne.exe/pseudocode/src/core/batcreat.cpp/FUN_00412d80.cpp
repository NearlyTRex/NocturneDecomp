// Name: core_batcreat.cpp_FUN_00412d80
// Address: 00412d80
// Address Range: [[00412d80, 00412dc7]]
// Convention: unknown
// Signature: void core_batcreat_cpp_FUN_00412d80(int param_1)

#include "nocturne.h"

void core_batcreat_cpp_FUN_00412d80(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
