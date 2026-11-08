// Name: FUN_004a0f00
// Address: 004a0f00
// Address Range: [[004a0f00, 004a0fa9]]
// Convention: unknown
// Signature: void FUN_004a0f00(int param_1,int param_2)

#include "nocturne.h"

void FUN_004a0f00(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    FUN_004a1b70(0x01C51D80,"@@ShotInvulnerable" + 2);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  FUN_004319e0(param_1,param_2);
  if (0.0 < *(float *)(param_2 + 4)) {
    iVar1 = FUN_0040c600(*(uint *)(param_2 + 0x38),DAT_007c637c);
    if (iVar1 == 0) {
      iVar1 = FUN_0040c600(*(uint *)(param_2 + 0x34),DAT_007c637c);
    }
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xc1ec) = 0x41700000;
      *(uint *)(param_1 + 0xc1dc) = 1;
      *(int *)(param_1 + 0xc1e8) = iVar1;
      return;
    }
  }
  return;
}
