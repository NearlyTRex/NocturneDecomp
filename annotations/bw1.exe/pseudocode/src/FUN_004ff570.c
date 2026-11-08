// Name: FUN_004ff570
// Address: 004ff570
// Address Range: [[004ff570, 004ff5cd]]
// Convention: unknown
// Signature: void FUN_004ff570(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ff570(int param_1)

{
  *(uint *)(param_1 + 0x418) = 1;
  if (*(float *)(param_1 + 0x2dc) < (float)_DAT_005e6d5a) {
    *(uint *)(param_1 + 0x41c) = 0x3f800000;
    return;
  }
  *(uint *)(param_1 + 0x41c) = 0;
  return;
}
