// Name: FUN_004c6560
// Address: 004c6560
// Address Range: [[004c6560, 004c65ed]]
// Convention: unknown
// Signature: int FUN_004c6560(int param_1)

#include "nocturne.h"

int FUN_004c6560(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_2c [24];
  int local_14;
  
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_2c,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    FUN_00409f60(param_1);
    return 0;
  }
  iVar3 = FUN_00454530(param_1 + 0x150,0xffffffff);
  local_14 = *(int *)(iVar3 + 0x100) + -1;
  FUN_004544d0(param_1 + 0x150,(float)local_14 * *(float *)(param_1 + 0x2d4));
  FUN_00409f60(param_1);
  return iVar2;
}
