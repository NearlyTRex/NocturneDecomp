// Name: core_flies.cpp_CFlies_archive_FUN_0048eff0
// Address: 0048eff0
// Address Range: [[0048eff0, 0048f084]]
// Convention: unknown
// Signature: void core_flies_cpp_CFlies_archive_FUN_0048eff0(int param_1)

#include "nocturne.h"

void core_flies_cpp_CFlies_archive_FUN_0048eff0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x15c,"count");
  if (INT_005b9210 < 2) {
    if (INT_005b9210 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x2a00,"followActor");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2a04,"gatherCount");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2a0c,"gatherTime");
    if (INT_005b9210 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x150,"boxSize");
  return;
}
