// Name: FUN_005882d0
// Address: 005882d0
// Address Range: [[005882d0, 0058847b]]
// Convention: unknown
// Signature: int FUN_005882d0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005882d0(uint param_1,int param_2,uint param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float local_18;
  int local_c;
  
  if (param_2 != 0) {
    iVar3 = FUN_00587c30(param_1,param_2 + 0x20,0,param_3);
    if (iVar3 != 0) {
      return param_2;
    }
    if (0 < *(int *)(param_2 + 0x4d0)) {
      iVar3 = 0;
      for (iVar8 = 0; iVar8 < *(int *)(0x01E661B8 + 0x154e74); iVar8 = iVar8 + 1) {
        piVar1 = (int *)(0x01E661B8 + 0x154e78 + iVar3);
        iVar3 = iVar3 + 4;
        *(uint *)(*piVar1 + 0x6b4) = 0x7149f2ca;
      }
      iVar3 = 1;
      _DAT_0265fb64 = param_2;
      *(uint *)(param_2 + 0x6b4) = 0;
      do {
        iVar10 = _DAT_0265fb64;
        iVar3 = iVar3 + -1;
        iVar8 = iVar3 * 4;
        FUN_005ba1f0(&DAT_0265fb64,0x265fb68,iVar8);
        local_c = 0;
        iVar9 = iVar10;
        if (0 < *(int *)(iVar10 + 0x4d0)) {
          do {
            fVar2 = *(float *)(iVar10 + 0x6b4) + *(float *)(iVar9 + 0x4d8);
            iVar5 = *(int *)(iVar9 + 0x4d4);
            iVar7 = iVar8;
            if (fVar2 < *(float *)(iVar5 + 0x6b4)) {
              iVar6 = 0;
              *(float *)(iVar5 + 0x6b4) = fVar2;
              if (0 < iVar3) {
                iVar4 = 0;
                do {
                  if (iVar5 == *(int *)(&DAT_0265fb64 + iVar4)) break;
                  iVar4 = iVar4 + 4;
                  iVar6 = iVar6 + 1;
                } while (iVar4 < iVar3 * 4);
              }
              if (iVar6 == iVar3) {
                iVar7 = iVar8 + 4;
                iVar3 = iVar3 + 1;
                *(int *)(&DAT_0265fb64 + iVar8) = iVar5;
              }
            }
            local_c = local_c + 1;
            iVar8 = iVar7;
            iVar9 = iVar9 + 8;
          } while (local_c < *(int *)(iVar10 + 0x4d0));
        }
        if (iVar3 < 1) {
          iVar3 = 0;
          local_18 = 1e+29;
          iVar8 = 0;
          for (iVar10 = 0; iVar10 < *(int *)(0x01E661B8 + 0x154e74); iVar10 = iVar10 + 1) {
            iVar9 = *(int *)(iVar8 + 0x154e78 + 0x01E661B8);
            if ((*(float *)(iVar9 + 0x6b4) < local_18) &&
               (iVar5 = FUN_00587c30(param_1,iVar9 + 0x20,0,param_3), iVar5 != 0)) {
              local_18 = *(float *)(iVar9 + 0x6b4);
              iVar3 = iVar9;
            }
            iVar8 = iVar8 + 4;
          }
          return iVar3;
        }
      } while( true );
    }
  }
  return 0;
}
