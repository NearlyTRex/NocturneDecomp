// Name: core_spirindi.cpp_FUN_0059a8a0
// Address: 0059a8a0
// Address Range: [[0059a8a0, 0059a90f]]
// Convention: unknown
// Signature: void core_spirindi_cpp_FUN_0059a8a0(int param_1)

#include "nocturne.h"

void core_spirindi_cpp_FUN_0059a8a0(int param_1)

{
  core_npc_cpp_FUN_00509800(param_1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x34160),"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x34164),"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x34168,"speed");
  return;
}
