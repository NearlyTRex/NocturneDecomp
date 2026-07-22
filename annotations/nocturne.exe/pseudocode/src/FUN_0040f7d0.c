// Name: FUN_0040f7d0
// Address: 0040f7d0
// Address Range: [[0040f7d0, 0040f843]]
// Convention: unknown
// Signature: void FUN_0040f7d0(int param_1)

#include "nocturne.h"

void FUN_0040f7d0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2cc,"dropCondition");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x330,"dropHeight");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x334,"triggered");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x338,"yvel");
  return;
}
