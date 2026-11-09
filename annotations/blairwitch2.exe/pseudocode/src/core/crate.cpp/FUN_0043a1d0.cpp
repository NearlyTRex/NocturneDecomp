// Name: core_crate.cpp_FUN_0043a1d0
// Address: 0043a1d0
// Address Range: [[0043a1d0, 0043a214]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_0043a1d0(CDemonActor *param_1)

#include "nocturne.h"

void core_crate_cpp_FUN_0043a1d0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  if (g_CCrateClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x184,"lastPlatform");
  return;
}
