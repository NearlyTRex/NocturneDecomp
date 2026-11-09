// Name: core_passngr.cpp_FUN_00511a70
// Address: 00511a70
// Address Range: [[00511a70, 00511b49]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_00511a70(CNPC *param_1)

#include "nocturne.h"

void core_passngr_cpp_FUN_00511a70(CNPC *param_1)

{
  core_npc_cpp_FUN_005109e0(param_1);
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 1),"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x64,"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0xd38,"morphTime");
  if ((1 < g_CPassengerClassVersion) && (g_CPassengerClassVersion < 5)) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
              (&param_1->field_0x2b4,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  }
  if (2 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0xd3c,"wolfSize");
  }
  if (3 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x84,"nameOfWolf");
  }
  if (g_CPassengerClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xa4,"transformWav");
  return;
}
