// Name: FUN_004cc870
// Address: 004cc870
// Address Range: [[004cc870, 004cc8e3]]
// Convention: unknown
// Signature: void FUN_004cc870(int param_1)

#include "nocturne.h"

void FUN_004cc870(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x150,"courseName");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x170,"totalTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x174,"param");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x178,"phase");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x198,&DAT_005881be);
  return;
}
