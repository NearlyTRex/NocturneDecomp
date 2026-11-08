// Name: FUN_004c8ce0
// Address: 004c8ce0
// Address Range: [[004c8ce0, 004c8d0d]]
// Convention: unknown
// Signature: void FUN_004c8ce0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8ce0(int param_1)

{
  *(float *)(param_1 + 0x18) = *(float *)(0x01CB6900 + 0x284) + *(float *)(param_1 + 0x18);
  if (*(float *)(param_1 + 0x18) <= (float)_DAT_005d94e2) {
    return;
  }
  *(uint *)(param_1 + 0x18) = 0x40680000;
  return;
}
