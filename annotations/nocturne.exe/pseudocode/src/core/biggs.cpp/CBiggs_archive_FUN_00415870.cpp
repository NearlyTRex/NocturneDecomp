// Name: core_biggs.cpp_CBiggs_archive_FUN_00415870
// Address: 00415870
// Address Range: [[00415870, 004158f3]]
// Convention: unknown
// Signature: void core_biggs_cpp_CBiggs_archive_FUN_00415870(int param_1)

#include "nocturne.h"

void core_biggs_cpp_CBiggs_archive_FUN_00415870(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbea0,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbea4,"morphTimer");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xcad4,"morphEvent");
  return;
}
