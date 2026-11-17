// Name: core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680
// Address: 00552680
// Address Range: [[00552680, 00552821]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint *this_ptr,CWayPoint *start_waypoint)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint *this_ptr,CWayPoint *start_waypoint)

{
  int *piVar1;
  CWayPoint *pCVar2;
  float fVar3;
  char acVar4 [4];
  int iVar5;
  int iVar6;
  int iVar7;
  SIZE_T n;
  SIZE_T SVar8;
  CWayPoint *pCVar9;
  int iVar10;
  char acVar11 [4];
  float local_18;
  int local_c;
  
  if (start_waypoint != (CWayPoint *)0x0) {
    iVar5 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0
                      (this_ptr,&(start_waypoint->base).base.location,0);
    if (iVar5 != 0) {
      return start_waypoint;
    }
    if (0 < start_waypoint->num_adjacent_waypoints) {
      iVar5 = 0;
      for (iVar10 = 0; iVar10 < g_CDemonSetPtr->waypoint_count; iVar10 = iVar10 + 1) {
        piVar1 = (int *)((int)g_CDemonSetPtr->waypoints + iVar5);
        iVar5 = iVar5 + 4;
        *(uint *)(*piVar1 + 0x54c) = 0x7149f2ca;
      }
      iVar5 = 1;
      g_CHAR_ARRAY_02ddd5d4 = (char  [4])start_waypoint;
      start_waypoint->pathfind_cost = 0.0;
      do {
        acVar4 = g_CHAR_ARRAY_02ddd5d4;
        iVar5 = iVar5 + -1;
        n = iVar5 * 4;
        memmove(g_CHAR_ARRAY_02ddd5d4,(void *)0x2ddd5d8,n);
        local_c = 0;
        acVar11 = acVar4;
        if (0 < *(int *)((int)acVar4 + 0x368)) {
          do {
            fVar3 = *(float *)((int)acVar4 + 0x54c) + *(float *)((int)acVar11 + 0x370);
            iVar10 = *(int *)((int)acVar11 + 0x36c);
            SVar8 = n;
            if (fVar3 < *(float *)(iVar10 + 0x54c)) {
              iVar7 = 0;
              *(float *)(iVar10 + 0x54c) = fVar3;
              if (0 < iVar5) {
                iVar6 = 0;
                do {
                  if (iVar10 == *(int *)(g_CHAR_ARRAY_02ddd5d4 + iVar6)) break;
                  iVar6 = iVar6 + 4;
                  iVar7 = iVar7 + 1;
                } while (iVar6 < iVar5 * 4);
              }
              if (iVar7 == iVar5) {
                SVar8 = n + 4;
                iVar5 = iVar5 + 1;
                *(int *)(g_CHAR_ARRAY_02ddd5d4 + n) = iVar10;
              }
            }
            local_c = local_c + 1;
            n = SVar8;
            acVar11 = (char  [4])((int)acVar11 + 8);
          } while (local_c < *(int *)((int)acVar4 + 0x368));
        }
        if (iVar5 < 1) {
          pCVar9 = (CWayPoint *)0x0;
          local_18 = 1e+29;
          iVar5 = 0;
          for (iVar10 = 0; iVar10 < g_CDemonSetPtr->waypoint_count; iVar10 = iVar10 + 1) {
            pCVar2 = *(CWayPoint **)((int)g_CDemonSetPtr->waypoints + iVar5);
            if ((pCVar2->pathfind_cost < local_18) &&
               (iVar7 = core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0
                                  (this_ptr,&(pCVar2->base).base.location,0), iVar7 != 0)) {
              local_18 = pCVar2->pathfind_cost;
              pCVar9 = pCVar2;
            }
            iVar5 = iVar5 + 4;
          }
          return pCVar9;
        }
      } while( true );
    }
  }
  return (CWayPoint *)0x0;
}
