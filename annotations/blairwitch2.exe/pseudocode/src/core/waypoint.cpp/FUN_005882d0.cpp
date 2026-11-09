// Name: core_waypoint.cpp_FUN_005882d0
// Address: 005882d0
// Address Range: [[005882d0, 0058847b]]
// Convention: unknown
// Signature: int core_waypoint_cpp_FUN_005882d0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_waypoint_cpp_FUN_005882d0(uint param_1,int param_2,uint param_3)

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
  float local_18;
  int local_c;
  
  if (param_2 != 0) {
    iVar4 = core_waypoint_cpp_FUN_00587c30(param_1,param_2 + 0x20,0,param_3);
    if (iVar4 != 0) {
      return param_2;
    }
    if (0 < *(int *)(param_2 + 0x4d0)) {
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < *(int *)&g_CDemonSetPtr->field_0x154e74; iVar8 = iVar8 + 1) {
        piVar1 = (int *)(&g_CDemonSetPtr->field_0x154e78 + iVar4);
        iVar4 = iVar4 + 4;
        *(uint *)(*piVar1 + 0x6b4) = 0x7149f2ca;
      }
      iVar4 = 1;
      _DAT_0265fb64 = param_2;
      *(uint *)(param_2 + 0x6b4) = 0;
      do {
        iVar8 = _DAT_0265fb64;
        iVar4 = iVar4 + -1;
        n = iVar4 * 4;
        memmove(&DAT_0265fb64,(void *)0x265fb68,n);
        local_c = 0;
        iVar9 = iVar8;
        if (0 < *(int *)(iVar8 + 0x4d0)) {
          do {
            fVar3 = *(float *)(iVar8 + 0x6b4) + *(float *)(iVar9 + 0x4d8);
            iVar2 = *(int *)(iVar9 + 0x4d4);
            SVar7 = n;
            if (fVar3 < *(float *)(iVar2 + 0x6b4)) {
              iVar6 = 0;
              *(float *)(iVar2 + 0x6b4) = fVar3;
              if (0 < iVar4) {
                iVar5 = 0;
                do {
                  if (iVar2 == *(int *)(&DAT_0265fb64 + iVar5)) break;
                  iVar5 = iVar5 + 4;
                  iVar6 = iVar6 + 1;
                } while (iVar5 < iVar4 * 4);
              }
              if (iVar6 == iVar4) {
                SVar7 = n + 4;
                iVar4 = iVar4 + 1;
                *(int *)(&DAT_0265fb64 + n) = iVar2;
              }
            }
            local_c = local_c + 1;
            n = SVar7;
            iVar9 = iVar9 + 8;
          } while (local_c < *(int *)(iVar8 + 0x4d0));
        }
        if (iVar4 < 1) {
          iVar4 = 0;
          local_18 = 1e+29;
          iVar8 = 0;
          for (iVar9 = 0; iVar9 < *(int *)&g_CDemonSetPtr->field_0x154e74; iVar9 = iVar9 + 1) {
            iVar2 = *(int *)(&g_CDemonSetPtr->field_0x154e78 + iVar8);
            if ((*(float *)(iVar2 + 0x6b4) < local_18) &&
               (iVar6 = core_waypoint_cpp_FUN_00587c30(param_1,iVar2 + 0x20,0,param_3), iVar6 != 0))
            {
              local_18 = *(float *)(iVar2 + 0x6b4);
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
