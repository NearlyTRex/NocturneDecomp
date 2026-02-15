// Name: core_waypoint.cpp_CWayPoint_FUN_005ec320
// Address: 005ec320
// Address Range: [[005ec320, 005ec4c1]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec320(CWayPoint *this_ptr)

#include "nocturne.h"

int __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec320(CWayPoint *this_ptr)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SIZE_T n;
  SIZE_T SVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000008;
  float local_18;
  int local_c;
  
  if (in_stack_00000008 != 0) {
    iVar4 = core_waypoint_cpp_CWayPoint_FUN_005ebd40(this_ptr);
    if (iVar4 != 0) {
      return in_stack_00000008;
    }
    if (0 < *(int *)(in_stack_00000008 + 0x370)) {
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < g_CDemonSetPtr->waypoint_count; iVar8 = iVar8 + 1) {
        piVar1 = (int *)((int)g_CDemonSetPtr->waypoints + iVar4);
        iVar4 = iVar4 + 4;
        *(uint *)(*piVar1 + 0x554) = 0x7149f2ca;
      }
      iVar4 = 1;
      DAT_03f939a4 = in_stack_00000008;
      *(uint *)(in_stack_00000008 + 0x554) = 0;
      do {
        iVar8 = DAT_03f939a4;
        iVar4 = iVar4 + -1;
        n = iVar4 * 4;
        memmove(&DAT_03f939a4,&DAT_03f939a8,n);
        local_c = 0;
        iVar9 = iVar8;
        if (0 < *(int *)(iVar8 + 0x370)) {
          do {
            fVar3 = *(float *)(iVar8 + 0x554) + *(float *)(iVar9 + 0x378);
            iVar2 = *(int *)(iVar9 + 0x374);
            SVar7 = n;
            if (fVar3 < *(float *)(iVar2 + 0x554)) {
              iVar6 = 0;
              *(float *)(iVar2 + 0x554) = fVar3;
              if (0 < iVar4) {
                iVar5 = 0;
                do {
                  if (iVar2 == *(int *)((int)&DAT_03f939a4 + iVar5)) break;
                  iVar5 = iVar5 + 4;
                  iVar6 = iVar6 + 1;
                } while (iVar5 < iVar4 * 4);
              }
              if (iVar6 == iVar4) {
                SVar7 = n + 4;
                iVar4 = iVar4 + 1;
                *(int *)((int)&DAT_03f939a4 + n) = iVar2;
              }
            }
            local_c = local_c + 1;
            n = SVar7;
            iVar9 = iVar9 + 8;
          } while (local_c < *(int *)(iVar8 + 0x370));
        }
        if (iVar4 < 1) {
          iVar4 = 0;
          local_18 = 1e+29;
          iVar8 = 0;
          for (iVar9 = 0; iVar9 < g_CDemonSetPtr->waypoint_count; iVar9 = iVar9 + 1) {
            iVar2 = *(int *)((int)g_CDemonSetPtr->waypoints + iVar8);
            if ((*(float *)(iVar2 + 0x554) < local_18) &&
               (iVar6 = core_waypoint_cpp_CWayPoint_FUN_005ebd40(this_ptr), iVar6 != 0)) {
              local_18 = *(float *)(iVar2 + 0x554);
              iVar4 = iVar2;
            }
            iVar8 = iVar8 + 4;
          }
          return iVar4;
        }
      } while( true );
    }
  }
  return 0;
}
