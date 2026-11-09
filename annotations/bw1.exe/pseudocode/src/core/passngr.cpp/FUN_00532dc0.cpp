// Name: core_passngr.cpp_FUN_00532dc0
// Address: 00532dc0
// Address Range: [[00532dc0, 00532e99]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_00532dc0(CNPC *param_1)

#include "nocturne.h"

void core_passngr_cpp_FUN_00532dc0(CNPC *param_1)

{
  core_npc_cpp_FUN_00531bf0(param_1);
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 1),"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0x64,"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0xd38,"morphTime");
  if ((1 < g_CPassengerClassVersion) && (g_CPassengerClassVersion < 5)) {
    core_actor_cpp_FUN_0040b7f0
              ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
    core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  }
  if (2 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0xd3c,"wolfSize");
  }
  if (3 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0x84,"nameOfWolf");
  }
  if (g_CPassengerClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0xa4,"transformWav");
  return;
}
