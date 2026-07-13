// Name: FUN_004c4370
// Address: 004c4370
// Address Range: [[004c4370, 004c43e9]]
// Convention: unknown
// Signature: int FUN_004c4370(int param_1)

#include "nocturne.h"

int FUN_004c4370(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_1c [24];
  
  iVar1 = FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return 0;
  }
  FUN_00409f20(param_1);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  iVar1 = FUN_0041ceb0(uVar2);
  if (iVar1 != 0) {
    FUN_004544d0(param_1 + 0x150,0,0xffffffff);
  }
  FUN_00409f60(param_1);
  return iVar1;
}
