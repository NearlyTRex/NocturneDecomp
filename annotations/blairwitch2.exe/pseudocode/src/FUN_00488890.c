// Name: FUN_00488890
// Address: 00488890
// Address Range: [[00488890, 00488939]]
// Convention: unknown
// Signature: void FUN_00488890(int param_1,int param_2)

#include "nocturne.h"

void FUN_00488890(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x281c) != 0) {
    FUN_004894f0(0x01C38BC0,"@@ShotInvulnerable" + 2);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x100))(param_1);
  FUN_00427fb0(param_1,param_2);
  if (0.0 < *(float *)(param_2 + 4)) {
    iVar1 = FUN_0040c8f0(*(uint *)(param_2 + 0x38),DAT_007bdc94);
    if (iVar1 == 0) {
      iVar1 = FUN_0040c8f0(*(uint *)(param_2 + 0x34),DAT_007bdc94);
    }
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10a7c) = 0x41700000;
      *(uint *)(param_1 + 0x10a6c) = 1;
      *(int *)(param_1 + 0x10a78) = iVar1;
      return;
    }
  }
  return;
}
