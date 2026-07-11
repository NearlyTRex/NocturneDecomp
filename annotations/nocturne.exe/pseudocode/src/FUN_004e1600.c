// Name: FUN_004e1600
// Address: 004e1600
// Address Range: [[004e1600, 004e165f]]
// Convention: unknown
// Signature: void FUN_004e1600(int param_1)

#include "nocturne.h"

void FUN_004e1600(int param_1)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x20) = 1;
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar1;
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (*(int *)(param_1 + 0xc) == 5) {
    *(uint *)(param_1 + 0xc) = 4;
  }
  else if (*(int *)(param_1 + 0xc) == 4) {
    *(uint *)(param_1 + 0xc) = 5;
    *(float *)(param_1 + 0x14) = 1.0 - *(float *)(param_1 + 0x14);
    return;
  }
  *(float *)(param_1 + 0x14) = 1.0 - *(float *)(param_1 + 0x14);
  return;
}
