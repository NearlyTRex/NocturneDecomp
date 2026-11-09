// Name: core_asgaya.cpp_FUN_005a1aa0
// Address: 005a1aa0
// Address Range: [[005a1aa0, 005a1b0f]]
// Convention: unknown
// Signature: void core_asgaya_cpp_FUN_005a1aa0(int param_1)

#include "nocturne.h"

void core_asgaya_cpp_FUN_005a1aa0(int param_1)

{
  core_npc_cpp_FUN_00509800(param_1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x33fa4),"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x33fa8),"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x33fac,"speed");
  return;
}
