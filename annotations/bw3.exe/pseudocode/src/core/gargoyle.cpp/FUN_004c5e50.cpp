// Name: core_gargoyle.cpp_FUN_004c5e50
// Address: 004c5e50
// Address Range: [[004c5e50, 004c5ef5]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004c5e50(int param_1)

#include "nocturne.h"

void core_gargoyle_cpp_FUN_004c5e50(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd084),"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd088),"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd08c),"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd090,"homeBase");
  return;
}
