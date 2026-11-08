// Name: FUN_00542090
// Address: 00542090
// Address Range: [[00542090, 00542264]]
// Convention: unknown
// Signature: void FUN_00542090(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542090(int param_1)

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
  if (*(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    fVar10 = *(float *)(param_1 + 0x2c9c);
  }
  if (*(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    fVar10 = (1.0 - *(float *)(param_1 + 0x2c9c)) * fVar10;
  }
  iVar1 = param_1 + 0x158;
  fVar3 = (float)FUN_00524a40(iVar1,4);
  fVar4 = (float)FUN_00524a40(iVar1,5);
  fVar5 = (float)FUN_00524a40(iVar1,0xc);
  fVar6 = (float)FUN_00524a40(iVar1,0xd);
  fVar7 = (float)FUN_00524a40(iVar1,0xe);
  fVar10 = (1.0 - (fVar7 + fVar6 + fVar5 + fVar4 + fVar3)) * fVar10;
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  dVar2 = (double)fVar10;
  if ((float)_DAT_005edebf < fVar10) {
    if (1.0 < dVar2) {
      fVar10 = 1.0;
    }
    iVar1 = param_1 + 0x158;
    uVar8 = FUN_00569f30(iVar1,param_1 + *(int *)(param_1 + 0x2c98) * 0x38 + 0x27d0,1,dVar2,fVar10);
    uVar8 = FUN_005240c0(uVar8);
    uVar9 = FUN_00525110(iVar1,uVar8,*(uint *)(param_1 + 0x2c9c));
    FUN_00568100(iVar1,uVar8,uVar9,fVar10,_DAT_01e7e054,&LAB_00567360);
    if (*(int *)(param_1 + 0x2c98) == 1) {
      FUN_00542270(param_1,1);
      return;
    }
  }
  return;
}
