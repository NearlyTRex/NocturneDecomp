// Name: FUN_004e4f70
// Address: 004e4f70
// Address Range: [[004e4f70, 004e4f9d]]
// Convention: unknown
// Signature: void FUN_004e4f70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4f70(int param_1)

{
  *(float *)(param_1 + 0x24) = *(float *)(0x01CCF390 + 0x294) + *(float *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x24) <= (float)_DAT_005e404d) {
    return;
  }
  *(uint *)(param_1 + 0x24) = 0x40000000;
  return;
}
