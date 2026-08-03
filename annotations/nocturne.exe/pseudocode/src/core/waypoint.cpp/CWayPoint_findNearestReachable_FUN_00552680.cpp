// Name: core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680
// Address: 00552680
// Address Range: [[00552680, 00552821]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint *this_ptr,CWayPoint *start_waypoint)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint *this_ptr,CWayPoint *start_waypoint)

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
    iVar4 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0
                      (this_ptr,&(start_waypoint->base).base.location,0);
    if (iVar4 != 0) {
      return start_waypoint;
    }
    if (0 < start_waypoint->num_adjacent_waypoints) {
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < g_CDemonSet_PTR_005be368->waypoint_count; iVar8 = iVar8 + 1) {
        piVar1 = (int *)((int)g_CDemonSet_PTR_005be368->waypoints + iVar4);
        iVar4 = iVar4 + 4;
        *(uint *)(*piVar1 + 0x54c) = 0x7149f2ca;
      }
      iVar4 = 1;
      _DAT_02ddd5d4 = start_waypoint;
      start_waypoint->pathfind_cost = 0.0;
      do {
        pCVar7 = _DAT_02ddd5d4;
        iVar4 = iVar4 + -1;
        n = iVar4 * 4;
        memmove(&DAT_02ddd5d4,(void *)0x2ddd5d8,n);
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
                  if (pCVar2 == *(CWayPoint **)(&DAT_02ddd5d4 + iVar5)) break;
                  iVar5 = iVar5 + 4;
                  iVar8 = iVar8 + 1;
                } while (iVar5 < iVar4 * 4);
              }
              if (iVar8 == iVar4) {
                SVar6 = n + 4;
                iVar4 = iVar4 + 1;
                *(CWayPoint **)(&DAT_02ddd5d4 + n) = pCVar2;
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
          for (iVar8 = 0; iVar8 < g_CDemonSet_PTR_005be368->waypoint_count; iVar8 = iVar8 + 1) {
            pCVar9 = *(CWayPoint **)((int)g_CDemonSet_PTR_005be368->waypoints + iVar4);
            if ((pCVar9->pathfind_cost < local_18) &&
               (iVar5 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0
                                  (this_ptr,&(pCVar9->base).base.location,0), iVar5 != 0)) {
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
