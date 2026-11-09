// Name: core_shotgun.cpp_FUN_00546d50
// Address: 00546d50
// Address Range: [[00546d50, 00546dab]]
// Convention: unknown
// Signature: void core_shotgun_cpp_FUN_00546d50(int param_1)

#include "nocturne.h"

void core_shotgun_cpp_FUN_00546d50(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@Aspeed" + 2);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  return;
}
