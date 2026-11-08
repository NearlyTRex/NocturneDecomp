// Name: FUN_004cdb20
// Address: 004cdb20
// Address Range: [[004cdb20, 004cdb4d]]
// Convention: unknown
// Signature: void FUN_004cdb20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cdb20(int param_1)

{
  *(float *)(param_1 + 0x28) = *(float *)(0x01D2130C + 0x314) + *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x28) <= (float)_DAT_005c4661) {
    return;
  }
  *(uint *)(param_1 + 0x28) = 0x40000000;
  return;
}
