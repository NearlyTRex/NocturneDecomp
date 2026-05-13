// Name: core_waypoint.cpp_CWayPoint_cleanupAdjacency_FUN_005ec830
// Address: 005ec830
// MANUAL RECONSTRUCTION
// Address Range: [[005ec830, 005ec8ce]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_cleanupAdjacency_FUN_005ec830(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_cleanupAdjacency_FUN_005ec830(CWayPoint *this_ptr)

{
  int index;
  int local_14;
  CWayPoint *pCVar1;

  local_14 = 0;
  if (0 < this_ptr->num_adjacent_waypoints) {
    do {
      pCVar1 = this_ptr->adjacency[local_14].waypoint;
      if ((pCVar1 == (CWayPoint *)0x0) || (this_ptr == pCVar1)) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,local_14);
      }
      else {
        index = local_14 + 1;
        while (index < this_ptr->num_adjacent_waypoints) {
          if (this_ptr->adjacency[index].waypoint == pCVar1) {
            core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,index);
          }
          else {
            index = index + 1;
          }
        }
        local_14 = local_14 + 1;
      }
    } while (local_14 < this_ptr->num_adjacent_waypoints);
  }
  return;
}
