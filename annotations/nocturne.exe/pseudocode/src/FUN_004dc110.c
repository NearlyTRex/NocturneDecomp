// Name: FUN_004dc110
// Address: 004dc110
// Address Range: [[004dc110, 004dc17f]]
// Convention: unknown
// Signature: void FUN_004dc110(int param_1)

#include "nocturne.h"

void FUN_004dc110(int param_1)

{
  uint uVar1;
  
  if (0.0 < *(float *)(param_1 + 0xbdf8)) {
    return;
  }
  uVar1 = FUN_0040dda0(0x3f000000,0x3f800000);
  *(uint *)(param_1 + 0xbdf8) = uVar1;
  if (*(int *)(param_1 + 0x24ac) != 0) {
    FUN_004e16b0(param_1 + 0x150,6,1);
    return;
  }
  FUN_004e16b0(param_1 + 0x150,2,1);
  return;
}
