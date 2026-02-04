// Name: core_waypoint.cpp_CWayPoint_FUN_005ec830
// Address: 005ec830
// Address Range: [[005ec830, 005ec8ce]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec830(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec830(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  int index;
  char *pcVar2;
  int local_14;
  
  local_14 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->num_adjacent_waypoints) {
    do {
      if ((*(CWayPoint **)pCVar1->unk == (CWayPoint *)0x0) ||
         (this_ptr == *(CWayPoint **)pCVar1->unk)) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,local_14);
      }
      else {
        index = local_14 + 1;
        if (index < this_ptr->num_adjacent_waypoints) {
          pcVar2 = (this_ptr->base).base.actor_name + local_14 * 8 + 8;
          do {
            if (*(int *)(pcVar2 + 0x374) == *(int *)pCVar1->unk) {
              core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(this_ptr,index);
            }
            else {
              index = index + 1;
              pcVar2 = pcVar2 + 8;
            }
          } while (index < this_ptr->num_adjacent_waypoints);
        }
        local_14 = local_14 + 1;
        pCVar1 = (CWayPoint *)((pCVar1->base).base.actor_name + 8);
      }
    } while (local_14 < this_ptr->num_adjacent_waypoints);
  }
  return;
}
