// Name: core_flamecan.cpp_FUN_0048e830
// Address: 0048e830
// Address Range: [[0048e830, 0048e88f]]
// Convention: unknown
// Signature: void core_flamecan_cpp_FUN_0048e830(int param_1)

#include "nocturne.h"

void core_flamecan_cpp_FUN_0048e830(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2cc,"onFire");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2d0,"timeToExplode");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2d4,"onFireCondition");
  return;
}
