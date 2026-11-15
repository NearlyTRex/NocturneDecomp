// Name: core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005abb80
// Address: 005abb80
// Address Range: [[005abb80, 005abd2b]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005abb80(CWayPoint *this_ptr,CWayPoint *start_waypoint,int skip_path_check)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005abb80(CWayPoint *this_ptr,CWayPoint *start_waypoint,int skip_path_check)

{
  int *piVar1;
  CWayPoint *pCVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  SIZE_T n;
  SIZE_T SVar6;
  CWayPoint *pCVar7;
  int iVar8;
  CWayPoint *pCVar9;
  float local_18;
  int local_c;
  
  if (start_waypoint != (CWayPoint *)0x0) {
    iVar4 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005ab880
                      (this_ptr,&(start_waypoint->base).base.location,0,skip_path_check);
    if (iVar4 != 0) {
      return start_waypoint;
    }
    if (0 < start_waypoint->num_adjacent_waypoints) {
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < g_CDemonSetPtr->waypoint_count; iVar8 = iVar8 + 1) {
        piVar1 = (int *)((int)g_CDemonSetPtr->waypoints + iVar4);
        iVar4 = iVar4 + 4;
        *(uint *)(*piVar1 + 0x558) = 0x7149f2ca;
      }
      iVar4 = 1;
      _DAT_02c97384 = start_waypoint;
      start_waypoint->pathfind_cost = 0.0;
      do {
        pCVar7 = _DAT_02c97384;
        iVar4 = iVar4 + -1;
        n = iVar4 * 4;
        memmove(&DAT_02c97384,(void *)0x2c97388,n);
        local_c = 0;
        pCVar9 = pCVar7;
        if (0 < pCVar7->num_adjacent_waypoints) {
          do {
            fVar3 = pCVar7->pathfind_cost + pCVar9->adjacency[0].distance;
            pCVar2 = pCVar9->adjacency[0].waypoint;
            SVar6 = n;
            if (fVar3 < pCVar2->pathfind_cost) {
              iVar8 = 0;
              pCVar2->pathfind_cost = fVar3;
              if (0 < iVar4) {
                iVar5 = 0;
                do {
                  if (pCVar2 == *(CWayPoint **)(&DAT_02c97384 + iVar5)) break;
                  iVar5 = iVar5 + 4;
                  iVar8 = iVar8 + 1;
                } while (iVar5 < iVar4 * 4);
              }
              if (iVar8 == iVar4) {
                SVar6 = n + 4;
                iVar4 = iVar4 + 1;
                *(CWayPoint **)(&DAT_02c97384 + n) = pCVar2;
              }
            }
            local_c = local_c + 1;
            n = SVar6;
            pCVar9 = (CWayPoint *)((pCVar9->base).base.actor_name + 8);
          } while (local_c < pCVar7->num_adjacent_waypoints);
        }
        if (iVar4 < 1) {
          pCVar7 = (CWayPoint *)0x0;
          local_18 = 1e+29;
          iVar4 = 0;
          for (iVar8 = 0; iVar8 < g_CDemonSetPtr->waypoint_count; iVar8 = iVar8 + 1) {
            pCVar9 = *(CWayPoint **)((int)g_CDemonSetPtr->waypoints + iVar4);
            if ((pCVar9->pathfind_cost < local_18) &&
               (iVar5 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005ab880
                                  (this_ptr,&(pCVar9->base).base.location,0,skip_path_check),
               iVar5 != 0)) {
              local_18 = pCVar9->pathfind_cost;
              pCVar7 = pCVar9;
            }
            iVar4 = iVar4 + 4;
          }
          return pCVar7;
        }
      } while( true );
    }
  }
  return (CWayPoint *)0x0;
}
