// Name: core_glass.cpp_CGlass_archive_FUN_004acbc0
// Address: 004acbc0
// Address Range: [[004acbc0, 004accbd]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_archive_FUN_004acbc0(int param_1)

#include "nocturne.h"

void core_glass_cpp_CGlass_archive_FUN_004acbc0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x150,"glassSize");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x164,"glassTexture");
  if (1 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x174,"opacity");
  }
  if (2 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x178,"shattered");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x17c,"breakEvent");
  }
  if (3 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1e0,"mirrorFlag");
  }
  if (4 < INT_005b9668) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x304,"breakableCondition");
  }
  if (INT_005b9668 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x368,"backgroundFlag");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x374,"brokenTexture");
  return;
}
