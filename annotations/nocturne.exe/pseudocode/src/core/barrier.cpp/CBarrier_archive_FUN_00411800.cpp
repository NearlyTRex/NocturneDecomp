// Name: core_barrier.cpp_CBarrier_archive_FUN_00411800
// Address: 00411800
// Address Range: [[00411800, 00411858]]
// Convention: unknown
// Signature: void core_barrier_cpp_CBarrier_archive_FUN_00411800(int param_1)

#include "nocturne.h"

void core_barrier_cpp_CBarrier_archive_FUN_00411800(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x150,"size");
  if (g_INT_005acf80 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x160,"effectClassNameList");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x15c,"addToPathGrid");
  return;
}
