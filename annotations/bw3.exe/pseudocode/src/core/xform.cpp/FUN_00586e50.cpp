// Name: core_xform.cpp_FUN_00586e50
// Address: 00586e50
// Address Range: [[00586e50, 00586eab]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00586e50(int param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_00586e50(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@Aspeed" + 2);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
