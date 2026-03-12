// Name: core_waypoint.cpp_CWayPoint_cleanupAdjacency_FUN_005ec830
// Address: 005ec830
// Address Range: [[005ec830, 005ec8ce]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_cleanupAdjacency_FUN_005ec830(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_cleanupAdjacency_FUN_005ec830(CWayPoint *this_ptr)

{
  CWayPoint *pCVar2;
  int index;
  char *pcVar3;
  int local_14;
  CWayPoint *pCVar1;
  
  local_14 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->num_adjacent_waypoints) {
    do {
      pCVar1 = pCVar2->adjacency[0].waypoint;
      if ((pCVar1 == (CWayPoint *)0x0) || (this_ptr == pCVar1)) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,local_14);
      }
      else {
        index = local_14 + 1;
        if (index < this_ptr->num_adjacent_waypoints) {
          pcVar3 = (this_ptr->base).base.actor_name + local_14 * 8 + 8;
          do {
            if (*(CWayPoint **)(pcVar3 + 0x374) == pCVar2->adjacency[0].waypoint) {
              core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,index);
            }
            else {
              index = index + 1;
              pcVar3 = pcVar3 + 8;
            }
          } while (index < this_ptr->num_adjacent_waypoints);
        }
        local_14 = local_14 + 1;
        pCVar2 = (CWayPoint *)((pCVar2->base).base.actor_name + 8);
      }
    } while (local_14 < this_ptr->num_adjacent_waypoints);
  }
  return;
}
