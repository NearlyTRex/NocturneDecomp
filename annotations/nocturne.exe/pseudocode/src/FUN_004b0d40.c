// Name: FUN_004b0d40
// Address: 004b0d40
// Address Range: [[004b0d40, 004b0db9]]
// Convention: unknown
// Signature: void FUN_004b0d40(int param_1,int param_2)

#include "nocturne.h"

void FUN_004b0d40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte local_1c [24];
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x2d4) == 0) {
      if (*(int *)(param_1 + 0x2d8) != 2) {
        return;
      }
      *(uint *)(param_1 + 0x2d4) = 1;
    }
    FUN_00409f20(param_1);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
    iVar2 = FUN_0041ceb0(uVar1);
    if (iVar2 != 0) {
      FUN_004544d0(param_1 + 0x150,*(uint *)(param_1 + 0x2cc),0xffffffff);
    }
    FUN_00409f60(param_1);
  }
  return;
}
