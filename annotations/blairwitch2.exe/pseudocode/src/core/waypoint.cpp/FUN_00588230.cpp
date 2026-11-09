// Name: core_waypoint.cpp_FUN_00588230
// Address: 00588230
// Address Range: [[00588230, 005882c2]]
// Convention: unknown
// Signature: void core_waypoint_cpp_FUN_00588230(CTrigger *param_1)

#include "nocturne.h"

void core_waypoint_cpp_FUN_00588230(CTrigger *param_1)

{
  byte *puVar1;
  int iVar2;
  byte auStack_14 [4];
  
  core_trigger_cpp_FUN_005780e0(param_1);
  if (g_CWayPointClassVersion < 2) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(auStack_14,"?nextWayPoint" + 1);
  }
  if (1 < g_CWayPointClassVersion) {
    iVar2 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),"adjCount");
    if (0 < *(int *)(param_1 + 1)) {
      puVar1 = &param_1[1].field_0x4;
      do {
        iVar2 = iVar2 + 1;
        core_actor_cpp_archiveActor_FUN_0040b9e0(puVar1,0);
        puVar1 = puVar1 + 8;
      } while (iVar2 < *(int *)(param_1 + 1));
      return;
    }
  }
  return;
}
