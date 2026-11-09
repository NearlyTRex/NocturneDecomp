// Name: core_kedward.cpp_FUN_005919f0
// Address: 005919f0
// Address Range: [[005919f0, 00591aa9]]
// Convention: unknown
// Signature: void core_kedward_cpp_FUN_005919f0(int param_1)

#include "nocturne.h"

void core_kedward_cpp_FUN_005919f0(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  if (1 < g_CKedwardClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd06c,"maxFadeTime");
  }
  if (2 < g_CKedwardClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd070),"fadeOutOpacity");
  }
  if (g_CKedwardClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd094),"ciniFlag");
  return;
}
