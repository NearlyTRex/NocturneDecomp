// Name: FUN_004af700
// Address: 004af700
// Address Range: [[004af700, 004af72d]]
// Convention: unknown
// Signature: void FUN_004af700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af700(int param_1)

{
  *(float *)(param_1 + 0x18) = *(float *)(0x01C775EC + 0x264) + *(float *)(param_1 + 0x18);
  if (*(float *)(param_1 + 0x18) <= (float)_DAT_00585130) {
    return;
  }
  *(uint *)(param_1 + 0x18) = 0x40680000;
  return;
}
