// Name: core_sentinel.cpp_FUN_00532210
// Address: 00532210
// Address Range: [[00532210, 00532268]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_00532210(int param_1)

#include "nocturne.h"

void core_sentinel_cpp_FUN_00532210(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
