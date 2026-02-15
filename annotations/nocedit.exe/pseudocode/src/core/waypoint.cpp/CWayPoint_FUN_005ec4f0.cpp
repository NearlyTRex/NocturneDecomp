// Name: core_waypoint.cpp_CWayPoint_FUN_005ec4f0
// Address: 005ec4f0
// Address Range: [[005ec4f0, 005ec5d6]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec4f0(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec4f0(CWayPoint *this_ptr)

{
  int iVar1;
  int iVar2;
  CWayPoint *pCVar3;
  int iVar4;
  
  core_waypoint_cpp_CWayPoint_FUN_005ec830(this_ptr);
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->num_adjacent_waypoints) {
    do {
      iVar2 = iVar2 + 1;
      core_waypoint_cpp_CWayPoint_FUN_005ec640(*(CWayPoint **)pCVar3->unk);
      pCVar3 = (CWayPoint *)((pCVar3->base).base.actor_name + 8);
    } while (iVar2 < this_ptr->num_adjacent_waypoints);
  }
  iVar4 = 0;
  iVar2 = 0;
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(g_CDemonMissionPtr);
  this_ptr->num_adjacent_waypoints = 0;
  do {
    if (g_CDemonSetPtr->waypoint_count <= iVar4) {
      return;
    }
    pCVar3 = *(CWayPoint **)((int)g_CDemonSetPtr->waypoints + iVar2);
    if ((pCVar3 != this_ptr) && (pCVar3->num_adjacent_waypoints < 0x3c)) {
      iVar1 = core_waypoint_cpp_CWayPoint_FUN_005ebd40((CWayPoint *)&(this_ptr->base).base.location)
      ;
      if ((iVar1 != 0) &&
         (iVar1 = core_waypoint_cpp_CWayPoint_FUN_005ebd40
                            ((CWayPoint *)&(pCVar3->base).base.location), iVar1 != 0)) {
        core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(this_ptr);
        core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(pCVar3);
        if (0x3b < this_ptr->num_adjacent_waypoints) {
          return;
        }
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
