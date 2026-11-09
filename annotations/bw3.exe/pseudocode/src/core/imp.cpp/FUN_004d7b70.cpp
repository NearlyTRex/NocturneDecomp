// Name: core_imp.cpp_FUN_004d7b70
// Address: 004d7b70
// Address Range: [[004d7b70, 004d7bb7]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004d7b70(int param_1)

#include "nocturne.h"

void core_imp_cpp_FUN_004d7b70(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
