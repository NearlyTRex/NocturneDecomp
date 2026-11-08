// Name: FUN_004c8690
// Address: 004c8690
// Address Range: [[004c8690, 004c86bd]]
// Convention: unknown
// Signature: void FUN_004c8690(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8690(int param_1)

{
  *(float *)(param_1 + 0x24) = *(float *)(0x01CB6900 + 0x284) + *(float *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x24) <= (float)_DAT_005d946a) {
    return;
  }
  *(uint *)(param_1 + 0x24) = 0x40000000;
  return;
}
