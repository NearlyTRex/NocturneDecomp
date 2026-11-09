// Name: core_hino.cpp_FUN_0059d310
// Address: 0059d310
// Address Range: [[0059d310, 0059d357]]
// Convention: unknown
// Signature: void core_hino_cpp_FUN_0059d310(int param_1)

#include "nocturne.h"

void core_hino_cpp_FUN_0059d310(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
