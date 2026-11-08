// Name: FUN_004c9e40
// Address: 004c9e40
// Address Range: [[004c9e40, 004c9eaa]]
// Convention: unknown
// Signature: void FUN_004c9e40(int param_1)

#include "nocturne.h"

void FUN_004c9e40(int param_1)

{
  int iVar1;
  
  FUN_00559250(0x01E82168,param_1);
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fe20) + 0x154) + 0xe4))
                    (*(int *)(param_1 + 0x1fe20));
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x1fe20) + 0x2dc) == 1)) {
    *(uint *)(param_1 + 0x1ffe4) = 0x3f800000;
  }
  FUN_00559220(0x01E82168);
  *(uint *)(param_1 + 0x1ffc4) = 0;
  return;
}
