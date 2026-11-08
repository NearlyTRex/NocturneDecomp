// Name: FUN_0051ff60
// Address: 0051ff60
// Address Range: [[0051ff60, 00520134]]
// Convention: unknown
// Signature: void FUN_0051ff60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ff60(int param_1)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  fVar10 = 1.0;
  if (*(int *)(param_1 + 0x2834 + *(int *)(param_1 + 0x2d04) * 0x38) == 0) {
    fVar10 = *(float *)(param_1 + 0x2d08);
  }
  if (*(int *)(param_1 + 0x2838 + *(int *)(param_1 + 0x2d04) * 0x38) == 0) {
    fVar10 = (1.0 - *(float *)(param_1 + 0x2d08)) * fVar10;
  }
  iVar1 = param_1 + 0x2b4;
  fVar3 = (float)FUN_005038a0(iVar1,4);
  fVar4 = (float)FUN_005038a0(iVar1,5);
  fVar5 = (float)FUN_005038a0(iVar1,0xc);
  fVar6 = (float)FUN_005038a0(iVar1,0xd);
  fVar7 = (float)FUN_005038a0(iVar1,0xe);
  fVar10 = (1.0 - (fVar7 + fVar6 + fVar5 + fVar4 + fVar3)) * fVar10;
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  dVar2 = (double)fVar10;
  if ((float)_DAT_005e2bb3 < fVar10) {
    if (1.0 < dVar2) {
      fVar10 = 1.0;
    }
    iVar1 = param_1 + 0x2b4;
    uVar8 = FUN_00547890(iVar1,param_1 + *(int *)(param_1 + 0x2d04) * 0x38 + 0x283c,1,dVar2,fVar10);
    uVar8 = FUN_00502f10(uVar8);
    uVar9 = FUN_00503f50(iVar1,uVar8,*(uint *)(param_1 + 0x2d08));
    FUN_00545a60(iVar1,uVar8,uVar9,fVar10,_DAT_01e620a8,&LAB_00544cc0);
    if (*(int *)(param_1 + 0x2d04) == 1) {
      FUN_00520140(param_1,1);
      return;
    }
  }
  return;
}
