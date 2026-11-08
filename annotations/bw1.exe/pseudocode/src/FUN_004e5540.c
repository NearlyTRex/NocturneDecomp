// Name: FUN_004e5540
// Address: 004e5540
// Address Range: [[004e5540, 004e556d]]
// Convention: unknown
// Signature: void FUN_004e5540(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5540(int param_1)

{
  *(float *)(param_1 + 0x18) = *(float *)(0x01CCF390 + 0x294) + *(float *)(param_1 + 0x18);
  if (*(float *)(param_1 + 0x18) <= (float)_DAT_005e40c5) {
    return;
  }
  *(uint *)(param_1 + 0x18) = 0x40680000;
  return;
}
