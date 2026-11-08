// Name: FUN_005b0bb0
// Address: 005b0bb0
// Address Range: [[005b0bb0, 005b0bf7]]
// Convention: unknown
// Signature: void FUN_005b0bb0(int param_1)

#include "nocturne.h"

void FUN_005b0bb0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0xc288) = 0x41200000;
  iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc284));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"were?.wav");
  *(uint *)(param_1 + 0xc288) = 0x41a00000;
  *(uint *)(param_1 + 0xc284) = uVar2;
  return;
}
