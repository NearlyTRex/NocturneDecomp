// Name: FUN_0042f310
// Address: 0042f310
// Address Range: [[0042f310, 0042f505]]
// Convention: unknown
// Signature: void FUN_0042f310(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f310(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte auStack_1ab0 [6816];
  
  FUN_0046d4b0(DAT_005f2afc,1);
  FUN_0046d4c0(DAT_005f2afc,0xc000);
  if (param_1 == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    fVar4 = (float10)DAT_007e2ae8 +
            (float10)*(float *)(0x01D2130C + 0x314) * (float10)_DAT_005b8376;
    FUN_005a3120();
    DAT_007e2ae8 = (int)ROUND(fVar4);
  }
  iVar2 = FUN_005a35cc();
  _DAT_007e2aec = iVar2 % 6;
  *(uint *)(DAT_005f2afc + 0x20) = 1;
  iVar2 = (iVar2 % 6) * 0x18;
  if ((*(uint *)(param_1 + 0x3254) & 0x7fffffff) == 0) {
    FUN_0056aa10(&DAT_005f0f74 + iVar2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3258);
    if (iVar1 == 0) {
      FUN_0056aa10(&DAT_005f1124 + iVar2);
    }
    else if (iVar1 == 1) {
      FUN_0056aa10(&DAT_005f1004 + iVar2);
    }
    else if (iVar1 == 2) {
      FUN_0056aa10(&DAT_005f1094 + iVar2);
    }
    else if (iVar1 == 4) {
      FUN_0056aa10(&DAT_005f11b4 + iVar2);
    }
    else if (iVar1 == 3) {
      FUN_0056aa10(&DAT_005f1244 + iVar2);
    }
  }
  iVar2 = param_1 + 0x158;
  FUN_0054f850(iVar2,auStack_1ab0);
  FUN_0054e340(iVar2,0x3f8ccccd,0xffffffff);
  FUN_0054dd10(iVar2);
  uVar3 = FUN_0054ea40(iVar2,param_1 + 0x2480);
  uVar3 = FUN_0054af10(uVar3);
  FUN_0054e4b0(iVar2,uVar3);
  FUN_0054fb70(iVar2,DAT_007e2ae8,0);
  FUN_0054e5a0(iVar2,0x267,1);
  *(uint *)(DAT_005f2afc + 0x20) = 0;
  FUN_0054f920(iVar2,auStack_1ab0);
  FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
