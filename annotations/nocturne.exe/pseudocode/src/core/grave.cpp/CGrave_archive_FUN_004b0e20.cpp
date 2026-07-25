// Name: core_grave.cpp_CGrave_archive_FUN_004b0e20
// Address: 004b0e20
// Address Range: [[004b0e20, 004b0f19]]
// Convention: unknown
// Signature: void core_grave_cpp_CGrave_archive_FUN_004b0e20(int param_1)

#include "nocturne.h"

void core_grave_cpp_CGrave_archive_FUN_004b0e20(int param_1)

{
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"model name");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2d0,"fps");
  if (INT_005ba8c8 < 2) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&local_c,"active");
    *(uint *)(param_1 + 0x2d8) = 0;
    if (local_c != 0) {
      *(uint *)(param_1 + 0x2d8) = 1;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d8,"graveState");
  }
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2cc,"curFrame");
  if (2 < INT_005ba8c8) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2dc,"hideOnFirstFrame");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2e0,"startCondition");
  }
  if (INT_005ba8c8 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x344,"startSound");
  return;
}
