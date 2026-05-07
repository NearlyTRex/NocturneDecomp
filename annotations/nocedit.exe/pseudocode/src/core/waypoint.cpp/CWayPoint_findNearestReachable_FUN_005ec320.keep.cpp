// Name: core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320
// Address: 005ec320
// MANUAL RECONSTRUCTION
// Address Range: [[005ec320, 005ec4c1]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005ec320(CWayPoint *this_ptr,CWayPoint *start_waypoint)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005ec320(CWayPoint *this_ptr,CWayPoint *start_waypoint)

{
  CWayPoint *pCVar1;
  int iVar4;
  int iVar2;
  int iVar5;
  int iVar3;
  int iVar6;
  SIZE_T n;
  SIZE_T SVar6;
  CWayPoint *pCVar7;
  int iVar8;
  float local_18;
  int local_c;
  float fVar3;
  CWayPoint *pCVar2;
  
  if (start_waypoint != (CWayPoint *)0x0) {
    iVar4 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005ebd40
                      (this_ptr,&(start_waypoint->base).base.location,0);
    if (iVar4 != 0) {
      return start_waypoint;
    }
    if (0 < start_waypoint->num_adjacent_waypoints) {
      for (iVar8 = 0; iVar8 < g_CDemonSetPtr->waypoint_count; iVar8 = iVar8 + 1) {
        *(uint *)&g_CDemonSetPtr->waypoints[iVar8]->pathfind_cost = 0x7149f2ca;
      }
      iVar2 = 1;
      g_WaypointSearchQueue[0] = start_waypoint;
      start_waypoint->pathfind_cost = 0.0;
      do {
        pCVar1 = g_WaypointSearchQueue[0];
        iVar2 = iVar2 + -1;
        n = iVar2 * 4;
        memmove(g_WaypointSearchQueue,g_WaypointSearchQueue + 1,n);
        if (0 < pCVar1->num_adjacent_waypoints) {
          for (local_c = 0; local_c < pCVar1->num_adjacent_waypoints; local_c = local_c + 1) {
            fVar3 = pCVar1->pathfind_cost + pCVar1->adjacency[local_c].distance;
            pCVar2 = pCVar1->adjacency[local_c].waypoint;
            if (fVar3 < pCVar2->pathfind_cost) {
              iVar6 = 0;
              pCVar2->pathfind_cost = fVar3;
              if (0 < iVar2) {
                iVar5 = 0;
                do {
                  if (pCVar2 == g_WaypointSearchQueue[iVar5]) break;
                  iVar5 = iVar5 + 1;
                  iVar6 = iVar6 + 1;
                } while (iVar5 < iVar2);
              }
              if (iVar6 == iVar2) {
                SVar6 = n + 4;
                g_WaypointSearchQueue[iVar2] = pCVar2;
                iVar2 = iVar2 + 1;
                n = SVar6;
              }
            }
          }
        }
        if (iVar2 < 1) {
          pCVar7 = (CWayPoint *)0x0;
          local_18 = 1e+29;
          for (iVar6 = 0; iVar6 < g_CDemonSetPtr->waypoint_count; iVar6 = iVar6 + 1) {
            pCVar1 = g_CDemonSetPtr->waypoints[iVar6];
            if ((pCVar1->pathfind_cost < local_18) &&
               (iVar3 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005ebd40
                                  (this_ptr,&(pCVar1->base).base.location,0), iVar3 != 0)) {
              local_18 = pCVar1->pathfind_cost;
              pCVar7 = pCVar1;
            }
          }
          return pCVar7;
        }
      } while( true );
    }
  }
  return (CWayPoint *)0x0;
}
