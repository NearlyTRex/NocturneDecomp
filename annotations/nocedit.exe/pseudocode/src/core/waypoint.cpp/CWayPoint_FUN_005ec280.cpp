// Name: core_waypoint.cpp_CWayPoint_FUN_005ec280
// Address: 005ec280
// Address Range: [[005ec280, 005ec312]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec280(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec280(CWayPoint *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  
  core_trigger_cpp_CTrigger_archive_FUN_005e0690(&this_ptr->base);
  if (g_CWayPointClassVersion < 2) {
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)&stack0xffffffec,"nextWayPoint");
  }
  if (1 < g_CWayPointClassVersion) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->num_adjacent_waypoints,"adjCount");
    if (0 < this_ptr->num_adjacent_waypoints) {
      actor_ptr = (CDemonActor *)this_ptr->unk;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040b870(actor_ptr,(char *)0x0);
        actor_ptr = (CDemonActor *)(actor_ptr->actor_name + 8);
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
      return;
    }
  }
  return;
}
