// Name: FUN_004cdfc0
// Address: 004cdfc0
// Address Range: [[004cdfc0, 004cdfed]]
// Convention: unknown
// Signature: void FUN_004cdfc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cdfc0(int param_1)

{
  *(float *)(param_1 + 0x1c) = *(float *)(0x01D2130C + 0x314) + *(float *)(param_1 + 0x1c);
  if (*(float *)(param_1 + 0x1c) <= (float)_DAT_005c46e1) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = 0x40680000;
  return;
}
