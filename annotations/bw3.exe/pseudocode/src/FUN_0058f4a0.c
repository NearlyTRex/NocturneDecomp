// Name: FUN_0058f4a0
// Address: 0058f4a0
// Address Range: [[0058f4a0, 0058f50f]]
// Convention: unknown
// Signature: void FUN_0058f4a0(int param_1)

#include "nocturne.h"

void FUN_0058f4a0(int param_1)

{
  uint uVar1;
  
  if (0.0 < *(float *)(param_1 + 0xd110)) {
    return;
  }
  uVar1 = FUN_0040ce40(0x3f000000,0x3f800000);
  *(uint *)(param_1 + 0xd110) = uVar1;
  if (*(int *)(param_1 + 0x25b0) != 0) {
    FUN_004fc0d0(param_1 + 0x158,6,1);
    return;
  }
  FUN_004fc0d0(param_1 + 0x158,2,1);
  return;
}
