// Name: FUN_004ac9b0
// Address: 004ac9b0
// Address Range: [[004ac9b0, 004acb57]]
// Convention: unknown
// Signature: void FUN_004ac9b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac9b0(int param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_20 [24];
  
  if (*(int *)(param_1 + 0x368) == 0) {
    if (((param_2 != 0) && (*(int *)(param_1 + 0x178) != 0)) && (*(int *)(param_1 + 0x1e0) != 0)) {
      FUN_004ac7c0(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)(param_1 + 0xb34) != 0)) {
    *(uint *)(param_1 + 0xb34) = 0;
    FUN_00409f20(param_1);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
    FUN_0041ceb0(uVar1);
    if (*(int *)(param_1 + 0x178) == 0) {
      iVar5 = param_1 + 0x15c;
    }
    else {
      iVar5 = param_1 + 0x36c;
    }
    FUN_00461eb0(DAT_005ae704,iVar5);
    pfVar2 = (float *)(param_1 + 900);
    iVar5 = 0;
    piVar3 = (int *)(param_1 + 0x4b0);
    if (0 < *(int *)(param_1 + 0xb2c)) {
      do {
        *piVar3 = (int)ROUND(*pfVar2 * _DAT_0059e390);
        piVar3[1] = (int)ROUND(pfVar2[1] * _DAT_0059e390);
        piVar3[2] = (int)ROUND(pfVar2[2] * _DAT_0059e390);
        iVar5 = iVar5 + 1;
        pfVar2 = pfVar2 + 3;
        piVar3 = piVar3 + 3;
      } while (iVar5 < *(int *)(param_1 + 0xb2c));
    }
    iVar5 = 0;
    FUN_0050c200(0x01E57284,*(uint *)(param_1 + 0xb2c),(int *)(param_1 + 0x4b0));
    if (0 < *(int *)(param_1 + 0xb30)) {
      iVar6 = param_1 + 0x6a4;
      iVar4 = param_1;
      do {
        *(uint *)(iVar4 + 0x6ac) = 0;
        uVar1 = DAT_005ae704;
        *(uint *)(iVar4 + 0x6b0) = 0;
        iVar5 = iVar5 + 1;
        *(uint *)(iVar4 + 0x6b4) = 0;
        *(uint *)(iVar4 + 0x6b8) = 0;
        iVar4 = iVar4 + 0x48;
        FUN_0045f460(uVar1,iVar6,0xc1);
        iVar6 = iVar6 + 0x48;
      } while (iVar5 < *(int *)(param_1 + 0xb30));
    }
    FUN_00409f60(param_1);
  }
  return;
}
