// Name: core_waypoint.cpp_CWayPoint_FUN_005ec640
// Address: 005ec640
// Address Range: [[005ec640, 005ec689]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec640(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec640(CWayPoint *this_ptr)

{
  int index;
  CWayPoint *pCVar1;
  CWayPoint *in_stack_00000008;
  
  index = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->num_adjacent_waypoints) {
    do {
      while (in_stack_00000008 == pCVar1->adjacency[0].waypoint) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,index);
        if (this_ptr->num_adjacent_waypoints <= index) {
          return;
        }
      }
      index = index + 1;
      pCVar1 = (CWayPoint *)((pCVar1->base).base.actor_name + 8);
    } while (index < this_ptr->num_adjacent_waypoints);
  }
  return;
}
