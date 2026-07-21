// Name: core_hotdemon.cpp_CHotDemon_archive_FUN_004b96c0
// Address: 004b96c0
// Address Range: [[004b96c0, 004b9710]]
// Convention: unknown
// Signature: undefined4 core_hotdemon_cpp_CHotDemon_archive_FUN_004b96c0(int param_1)

#include "nocturne.h"

uint core_hotdemon_cpp_CHotDemon_archive_FUN_004b96c0(int param_1)

{
  uint uVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"@@speed" + 2);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  uVar1 = FUN_0040cb00(param_1 + 0x150,"motion state");
  return uVar1;
}
