// Name: core_hecaitmx.cpp_FUN_00598590
// Address: 00598590
// Address Range: [[00598590, 005985ef]]
// Convention: unknown
// Signature: void core_hecaitmx_cpp_FUN_00598590(int param_1)

#include "nocturne.h"

void core_hecaitmx_cpp_FUN_00598590(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
