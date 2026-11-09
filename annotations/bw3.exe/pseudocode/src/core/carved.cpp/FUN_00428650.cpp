// Name: core_carved.cpp_FUN_00428650
// Address: 00428650
// Address Range: [[00428650, 004286b9]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00428650(int param_1)

#include "nocturne.h"

void core_carved_cpp_FUN_00428650(int param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"speed");
  model_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_actor_cpp_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_FUN_0040bba0(model_ptr,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd070),"alwaysChaseFast");
  return;
}
