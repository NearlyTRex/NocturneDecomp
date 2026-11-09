// Name: core_passngr.cpp_FUN_0050aaa0
// Address: 0050aaa0
// Address Range: [[0050aaa0, 0050ab79]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_0050aaa0(int param_1)

#include "nocturne.h"

void core_passngr_cpp_FUN_0050aaa0(int param_1)

{
  core_npc_cpp_FUN_00509800(param_1);
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x206c8),"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x2072c),"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x21400,"morphTime");
  if ((1 < g_CPassengerClassVersion) && (g_CPassengerClassVersion < 5)) {
    core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
    core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  }
  if (2 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x21404,"wolfSize");
  }
  if (3 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x2074c),"nameOfWolf");
  }
  if (g_CPassengerClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x2076c),"transformWav");
  return;
}
