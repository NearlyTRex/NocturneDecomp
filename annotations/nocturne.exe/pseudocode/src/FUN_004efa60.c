// Name: FUN_004efa60
// Address: 004efa60
// Address Range: [[004efa60, 004efb2f]]
// Convention: unknown
// Signature: int FUN_004efa60(int param_1)

#include "nocturne.h"

int FUN_004efa60(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte local_1c [24];
  
  if ((*(float *)(param_1 + 0x202a8) <= 1.0) && (*(int *)(param_1 + 0x2404) == 0)) {
    FUN_00409f20(param_1);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
    iVar3 = FUN_0041ceb0(uVar2);
    if (iVar3 != 0) {
      if ((*(uint *)(param_1 + 0x202a8) & 0x7fffffff) != 0) {
        iVar1 = param_1 + 0x1f67c;
        FUN_004e0340(iVar1,0,param_1 + 0x150,0);
        FUN_004e0340(iVar1,1,*(int *)(param_1 + 0x1f678) + 0x150,0);
        FUN_004e0820(iVar1,*(uint *)(param_1 + 0x202a8));
        FUN_00409f60(param_1);
        return iVar3;
      }
      FUN_00425c20(param_1);
    }
    FUN_00409f60(param_1);
    return iVar3;
  }
  return 0;
}
