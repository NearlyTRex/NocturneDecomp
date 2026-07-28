// Name: core_waypoint.cpp_CWayPoint_archive_FUN_005525e0
// Address: 005525e0
// Address Range: [[005525e0, 00552672]]
// Convention: unknown
// Signature: void core_waypoint_cpp_CWayPoint_archive_FUN_005525e0(CTrigger *param_1)

#include "nocturne.h"

void core_waypoint_cpp_CWayPoint_archive_FUN_005525e0(CTrigger *param_1)

{
  char *actor_ptr;
  int iVar1;
  CDemonActor *local_14;
  
  core_trigger_cpp_CTrigger_archive_FUN_00548170(param_1);
  if (INT_005c1578 < 2) {
    core_actor_cpp_archiveActor_FUN_0040c980(&local_14,"nextWayPoint");
  }
  if (1 < INT_005c1578) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"adjCount");
    if (0 < *(int *)param_1[1].base.actor_name) {
      actor_ptr = param_1[1].base.actor_name + 4;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)actor_ptr,(char *)0x0);
        actor_ptr = actor_ptr + 8;
      } while (iVar1 < *(int *)param_1[1].base.actor_name);
      return;
    }
  }
  return;
}
