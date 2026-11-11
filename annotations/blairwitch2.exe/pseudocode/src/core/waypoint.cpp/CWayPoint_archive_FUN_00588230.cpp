// Name: core_waypoint.cpp_CWayPoint_archive_FUN_00588230
// Address: 00588230
// Address Range: [[00588230, 005882c2]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_00588230(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_00588230(CWayPoint *this_ptr)

{
  SWayPointAdjacency *pSVar1;
  int iVar2;
  byte auStack_14 [4];
  
  core_trigger_cpp_CTrigger_archive_FUN_005780e0(&this_ptr->base);
  if (g_CWayPointClassVersion < 2) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(auStack_14,"?nextWayPoint" + 1);
  }
  if (1 < g_CWayPointClassVersion) {
    iVar2 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->num_adjacent_waypoints,"adjCount");
    if (0 < this_ptr->num_adjacent_waypoints) {
      pSVar1 = this_ptr->adjacency;
      do {
        iVar2 = iVar2 + 1;
        core_actor_cpp_archiveActor_FUN_0040b9e0(pSVar1,0);
        pSVar1 = pSVar1 + 1;
      } while (iVar2 < this_ptr->num_adjacent_waypoints);
      return;
    }
  }
  return;
}
