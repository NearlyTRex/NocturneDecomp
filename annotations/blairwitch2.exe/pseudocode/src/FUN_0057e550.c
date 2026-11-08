// Name: FUN_0057e550
// Address: 0057e550
// Address Range: [[0057e550, 0057e625]]
// Convention: unknown
// Signature: void FUN_0057e550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057e550(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fStack_18;
  
  FUN_0044fd00(param_1 + 0x6e0);
  FUN_00589b50(param_1);
  iVar2 = FUN_0044fd20(param_1 + 0x2b4);
  piVar3 = (int *)FUN_0044e6e0(iVar2,*(int *)(iVar2 + 0x100) + -1);
  fStack_18 = -1e+30;
  for (iVar4 = 0; iVar4 < *(int *)(iVar2 + 0x104); iVar4 = iVar4 + 1) {
    fVar1 = (float)piVar3[2] + (float)piVar3[1] * (float)_DAT_005ed684;
    if (fStack_18 < fVar1) {
      *(float *)(param_1 + 0x9bc) = (float)*piVar3 * _DAT_005fd518;
      *(float *)(param_1 + 0x9c0) = (float)piVar3[1] * _DAT_005fd518;
      *(float *)(param_1 + 0x9c4) = (float)piVar3[2] * _DAT_005fd518;
      fStack_18 = fVar1;
    }
    piVar3 = piVar3 + 3;
  }
  *(uint *)(param_1 + 0xa10) = 0;
  *(uint *)(param_1 + 0xa14) = 0;
  *(uint *)(param_1 + 0xa0c) = 0;
  return;
}
