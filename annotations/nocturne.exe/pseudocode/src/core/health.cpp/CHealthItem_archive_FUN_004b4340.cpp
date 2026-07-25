// Name: core_health.cpp_CHealthItem_archive_FUN_004b4340
// Address: 004b4340
// Address Range: [[004b4340, 004b43bf]]
// Convention: unknown
// Signature: void core_health_cpp_CHealthItem_archive_FUN_004b4340(int param_1)

#include "nocturne.h"

void core_health_cpp_CHealthItem_archive_FUN_004b4340(int param_1)

{
  byte local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2cc,"useCount");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2d0,"hpRestored");
  if (INT_005ba928 != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(local_104,"descriptiveName");
  return;
}
