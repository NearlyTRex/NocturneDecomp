// Name: FUN_00411e30
// Address: 00411e30
// Address Range: [[00411e30, 00411e9d]]
// Convention: unknown
// Signature: int FUN_00411e30(int param_1)

#include "nocturne.h"

int FUN_00411e30(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_20 [24];
  
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    FUN_00409f60(param_1);
    return 0;
  }
  FUN_004544d0(param_1 + 0x180,*(uint *)(param_1 + 0x17c),0xffffffff);
  FUN_00409f60(param_1);
  return iVar2;
}
