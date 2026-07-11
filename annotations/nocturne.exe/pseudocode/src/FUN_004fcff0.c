// Name: FUN_004fcff0
// Address: 004fcff0
// Address Range: [[004fcff0, 004fd1c4]]
// Convention: unknown
// Signature: void FUN_004fcff0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fcff0(int param_1)

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
  if (*(int *)(param_1 + 0x2624 + *(int *)(param_1 + 0x2a84) * 0x38) == 0) {
    fVar10 = *(float *)(param_1 + 0x2a88);
  }
  if (*(int *)(param_1 + 0x2628 + *(int *)(param_1 + 0x2a84) * 0x38) == 0) {
    fVar10 = (1.0 - *(float *)(param_1 + 0x2a88)) * fVar10;
  }
  iVar1 = param_1 + 0x150;
  fVar3 = (float)FUN_004e18d0(iVar1,4);
  fVar4 = (float)FUN_004e18d0(iVar1,5);
  fVar5 = (float)FUN_004e18d0(iVar1,0xc);
  fVar6 = (float)FUN_004e18d0(iVar1,0xd);
  fVar7 = (float)FUN_004e18d0(iVar1,0xe);
  fVar10 = (1.0 - (fVar7 + fVar6 + fVar5 + fVar4 + fVar3)) * fVar10;
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  dVar2 = (double)fVar10;
  if ((float)_DAT_0058df46 < fVar10) {
    if (1.0 < dVar2) {
      fVar10 = 1.0;
    }
    iVar1 = param_1 + 0x150;
    uVar8 = FUN_0051e0a0(iVar1,param_1 + *(int *)(param_1 + 0x2a84) * 0x38 + 0x262c,1,dVar2,fVar10);
    uVar8 = FUN_004e1010(uVar8);
    uVar9 = FUN_004e1f50(iVar1,uVar8,*(uint *)(param_1 + 0x2a88));
    FUN_0051c3d0(iVar1,uVar8,uVar9,fVar10,_DAT_01e533c8,&LAB_0051b650);
    if (*(int *)(param_1 + 0x2a84) == 1) {
      FUN_004fd1d0(param_1,1);
      return;
    }
  }
  return;
}
