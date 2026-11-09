// Name: core_baal.cpp_FUN_00597c70
// Address: 00597c70
// Address Range: [[00597c70, 00597cf3]]
// Convention: unknown
// Signature: void core_baal_cpp_FUN_00597c70(int param_1)

#include "nocturne.h"

void core_baal_cpp_FUN_00597c70(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd06c,"maxFadeTime");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd070),"fadeOutOpacity");
  return;
}
