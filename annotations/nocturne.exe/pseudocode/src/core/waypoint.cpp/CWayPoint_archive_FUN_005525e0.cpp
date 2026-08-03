// Name: core_waypoint.cpp_CWayPoint_archive_FUN_005525e0
// Address: 005525e0
// Address Range: [[005525e0, 00552672]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_005525e0(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_005525e0(CWayPoint *this_ptr)

{
  SWayPointAdjacency *actor_ptr;
  int iVar1;
  CDemonActor *local_14;
  
  core_trigger_cpp_CTrigger_archive_FUN_00548170(&this_ptr->base);
  if (INT_005c1578 < 2) {
    core_actor_cpp_archiveActor_FUN_0040c980(&local_14,"nextWayPoint");
  }
  if (1 < INT_005c1578) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->num_adjacent_waypoints,"adjCount");
    if (0 < this_ptr->num_adjacent_waypoints) {
      actor_ptr = this_ptr->adjacency;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)actor_ptr,(char *)0x0);
        actor_ptr = actor_ptr + 1;
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
      return;
    }
  }
  return;
}
