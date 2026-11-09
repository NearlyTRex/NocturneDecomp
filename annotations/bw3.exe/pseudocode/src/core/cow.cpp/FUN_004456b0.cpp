// Name: core_cow.cpp_FUN_004456b0
// Address: 004456b0
// Address Range: [[004456b0, 0044571c]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_004456b0(int param_1)

#include "nocturne.h"

void core_cow_cpp_FUN_004456b0(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"speed");
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if (g_CZombieCowClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
