// Name: FUN_004b0ef0
// Address: 004b0ef0
// Address Range: [[004b0ef0, 004b0f68]]
// Convention: unknown
// Signature: void FUN_004b0ef0(int param_1)

#include "nocturne.h"

void FUN_004b0ef0(int param_1)

{
  int iVar1;
  
  FUN_00537e30(0x01E661B8,param_1);
  iVar1 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xec))(iVar1);
  if ((iVar1 != 0) &&
     (*(int *)(*(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4) + 0x438) == 1)) {
    *(uint *)(param_1 + 0x25678) = 0x3f800000;
  }
  FUN_00537e00(0x01E661B8);
  *(uint *)(param_1 + 0x25658) = 0;
  return;
}
