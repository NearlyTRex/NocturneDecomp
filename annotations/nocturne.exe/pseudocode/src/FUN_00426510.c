// Name: FUN_00426510
// Address: 00426510
// Address Range: [[00426510, 00426566]]
// Convention: unknown
// Signature: void FUN_00426510(int param_1)

#include "nocturne.h"

void FUN_00426510(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_1c [24];
  
  if (*(int *)(param_1 + 0x2404) == 0) {
    return;
  }
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    FUN_00425c20(param_1);
  }
  FUN_00409f60(param_1);
  return;
}
