// Name: core_waypoint.cpp_CWayPoint_archive_FUN_00579390
// Address: 00579390
// Address Range: [[00579390, 00579422]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_00579390(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_00579390(CWayPoint *this_ptr)

{
  SWayPointAdjacency *actor_ptr;
  int iVar1;
  CDemonActor *pCStack_14;
  
  core_trigger_cpp_CTrigger_archive_FUN_0056e940(&this_ptr->base);
  if (g_CWayPointClassVersion < 2) {
    core_actor_cpp_archiveActor_FUN_0040b930(&pCStack_14,"nextWayPoint");
  }
  if (1 < g_CWayPointClassVersion) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->num_adjacent_waypoints,"adjCount");
    if (0 < this_ptr->num_adjacent_waypoints) {
      actor_ptr = this_ptr->adjacency;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040b930((CDemonActor **)actor_ptr,(char *)0x0);
        actor_ptr = actor_ptr + 1;
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
      return;
    }
  }
  return;
}
