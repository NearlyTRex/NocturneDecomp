// Name: core_styldemo.cpp_FUN_005a02e0
// Address: 005a02e0
// Address Range: [[005a02e0, 005a0327]]
// Convention: unknown
// Signature: void core_styldemo_cpp_FUN_005a02e0(int param_1)

#include "nocturne.h"

void core_styldemo_cpp_FUN_005a02e0(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
