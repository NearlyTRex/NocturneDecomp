// Name: core_barrier.cpp_FUN_00410dc0
// Address: 00410dc0
// Address Range: [[00410dc0, 00410e18]]
// Convention: unknown
// Signature: void core_barrier_cpp_FUN_00410dc0(CDemonActor *param_1)

#include "nocturne.h"

void core_barrier_cpp_FUN_00410dc0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(param_1 + 1,&DAT_005cb62f);
  if (g_CBarrierClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x10,"effectClassNameList");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xc,"addToPathGrid");
  return;
}
