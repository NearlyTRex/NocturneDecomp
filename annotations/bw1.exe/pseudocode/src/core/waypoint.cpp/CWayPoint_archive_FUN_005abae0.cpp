// Name: core_waypoint.cpp_CWayPoint_archive_FUN_005abae0
// Address: 005abae0
// Address Range: [[005abae0, 005abb72]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_005abae0(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_005abae0(CWayPoint *this_ptr)

{
  SWayPointAdjacency *pSVar1;
  int iVar2;
  byte auStack_14 [4];
  
  core_trigger_cpp_CTrigger_archive_FUN_0059b950(&this_ptr->base);
  if (g_CWayPointClassVersion < 2) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(auStack_14,"nextWayPoint");
  }
  if (1 < g_CWayPointClassVersion) {
    iVar2 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&this_ptr->num_adjacent_waypoints,"adjCount");
    if (0 < this_ptr->num_adjacent_waypoints) {
      pSVar1 = this_ptr->adjacency;
      do {
        iVar2 = iVar2 + 1;
        core_actor_cpp_archiveActor_FUN_0040b6f0(pSVar1,0);
        pSVar1 = pSVar1 + 8;
      } while (iVar2 < this_ptr->num_adjacent_waypoints);
      return;
    }
  }
  return;
}
