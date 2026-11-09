// Name: core_shadow.cpp_FUN_00545910
// Address: 00545910
// Address Range: [[00545910, 005459a1]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545910(int param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_00545910(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  if (g_CShadowClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd074),"lightUpEyes");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd0e0),"scaredByLight");
  return;
}
