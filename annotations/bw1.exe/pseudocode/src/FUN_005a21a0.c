// Name: FUN_005a21a0
// Address: 005a21a0
// Address Range: [[005a21a0, 005a2275]]
// Convention: unknown
// Signature: void FUN_005a21a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a21a0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fStack_18;
  
  FUN_004688e0(param_1 + 0x584);
  FUN_005ad640(param_1);
  iVar2 = FUN_00468900(param_1 + 0x158);
  piVar3 = (int *)FUN_004672b0(iVar2,*(int *)(iVar2 + 0x100) + -1);
  fStack_18 = -1e+30;
  for (iVar4 = 0; iVar4 < *(int *)(iVar2 + 0x104); iVar4 = iVar4 + 1) {
    fVar1 = (float)piVar3[2] + (float)piVar3[1] * (float)_DAT_005f89e0;
    if (fStack_18 < fVar1) {
      *(float *)(param_1 + 0x860) = (float)*piVar3 * _DAT_006074b8;
      *(float *)(param_1 + 0x864) = (float)piVar3[1] * _DAT_006074b8;
      *(float *)(param_1 + 0x868) = (float)piVar3[2] * _DAT_006074b8;
      fStack_18 = fVar1;
    }
    piVar3 = piVar3 + 3;
  }
  *(uint *)(param_1 + 0x8b4) = 0;
  *(uint *)(param_1 + 0x8b8) = 0;
  *(uint *)(param_1 + 0x8b0) = 0;
  return;
}
