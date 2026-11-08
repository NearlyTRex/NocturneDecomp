// Name: FUN_0051eac0
// Address: 0051eac0
// Address Range: [[0051eac0, 0051eb2f]]
// Convention: unknown
// Signature: void FUN_0051eac0(int param_1)

#include "nocturne.h"

void FUN_0051eac0(int param_1)

{
  uint uVar1;
  
  if (0.0 < *(float *)(param_1 + 0xc33c)) {
    return;
  }
  uVar1 = FUN_0040cc00(0x3f000000,0x3f800000);
  *(uint *)(param_1 + 0xc33c) = uVar1;
  if (*(int *)(param_1 + 0x25b0) != 0) {
    FUN_005247c0(param_1 + 0x158,6,1);
    return;
  }
  FUN_005247c0(param_1 + 0x158,2,1);
  return;
}
