// Name: core_waypoint.cpp_CWayPoint_removeAllAdjTo_FUN_005ec640
// Address: 005ec640
// MANUAL RECONSTRUCTION
// Address Range: [[005ec640, 005ec689]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_removeAllAdjTo_FUN_005ec640(CWayPoint *this_ptr,CWayPoint *target)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_removeAllAdjTo_FUN_005ec640(CWayPoint *this_ptr,CWayPoint *target)

{
  int index;

  index = 0;
  if (0 < this_ptr->num_adjacent_waypoints) {
    do {
      while (target == this_ptr->adjacency[index].waypoint) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,index);
        if (this_ptr->num_adjacent_waypoints <= index) {
          return;
        }
      }
      index = index + 1;
    } while (index < this_ptr->num_adjacent_waypoints);
  }
  return;
}
