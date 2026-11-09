// Name: core_dog.cpp_FUN_00463460
// Address: 00463460
// Address Range: [[00463460, 004634cc]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_00463460(int param_1)

#include "nocturne.h"

void core_dog_cpp_FUN_00463460(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
