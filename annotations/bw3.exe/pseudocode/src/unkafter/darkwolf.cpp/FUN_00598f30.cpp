// Name: unkafter_darkwolf.cpp_FUN_00598f30
// Address: 00598f30
// Address Range: [[00598f30, 00598fad]]
// Convention: unknown
// Signature: void unkafter_darkwolf_cpp_FUN_00598f30(int param_1)

#include "nocturne.h"

void unkafter_darkwolf_cpp_FUN_00598f30(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  if (g_CDarkwolfClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xdc90,"morphTime");
  return;
}
