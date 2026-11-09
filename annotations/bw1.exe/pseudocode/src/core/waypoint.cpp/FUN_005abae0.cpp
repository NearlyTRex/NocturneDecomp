// Name: core_waypoint.cpp_FUN_005abae0
// Address: 005abae0
// Address Range: [[005abae0, 005abb72]]
// Convention: unknown
// Signature: void core_waypoint_cpp_FUN_005abae0(CTrigger *param_1)

#include "nocturne.h"

void core_waypoint_cpp_FUN_005abae0(CTrigger *param_1)

{
  byte *puVar1;
  int iVar2;
  byte auStack_14 [4];
  
  core_trigger_cpp_CTrigger_archive_FUN_0059b950(param_1);
  if (g_CWayPointClassVersion < 2) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(auStack_14,"nextWayPoint");
  }
  if (1 < g_CWayPointClassVersion) {
    iVar2 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 1),"adjCount");
    if (0 < *(int *)(param_1 + 1)) {
      puVar1 = &param_1[1].field_0x4;
      do {
        iVar2 = iVar2 + 1;
        core_actor_cpp_archiveActor_FUN_0040b6f0(puVar1,0);
        puVar1 = puVar1 + 8;
      } while (iVar2 < *(int *)(param_1 + 1));
      return;
    }
  }
  return;
}
