// Name: core_ghoul.cpp_FUN_004c8cc0
// Address: 004c8cc0
// Address Range: [[004c8cc0, 004c8dc4]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004c8cc0(int param_1)

#include "nocturne.h"

void core_ghoul_cpp_FUN_004c8cc0(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  if (g_CGhoulClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  }
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  if ((1 < g_CGhoulClassVersion) && (g_CGhoulClassVersion < 7)) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  if (2 < g_CGhoulClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd070),"livesLeft");
  }
  if (4 < g_CGhoulClassVersion) {
    core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  }
  if (g_CGhoulClassVersion < 6) {
    return;
  }
  core_actor_cpp_FUN_0040bba0((CDeformableModelInstance *)(param_1 + 0x158),"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd074),"spasmCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd070),"livesLeft");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd060),"ariseTimer");
  return;
}
