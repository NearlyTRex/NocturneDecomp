// Name: core_thehand.cpp_FUN_0056c8c0
// Address: 0056c8c0
// Address Range: [[0056c8c0, 0056c8ff]]
// Convention: unknown
// Signature: void core_thehand_cpp_FUN_0056c8c0(int param_1)

#include "nocturne.h"

void core_thehand_cpp_FUN_0056c8c0(int param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_FUN_00489120(param_1);
  model_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_actor_cpp_FUN_0040ba30(model_ptr,"0@modelName" + 2);
  core_actor_cpp_FUN_0040bab0((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_FUN_0040bba0(model_ptr,"partStatus");
  return;
}
