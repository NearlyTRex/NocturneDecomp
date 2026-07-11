// Name: FUN_004c32e0
// Address: 004c32e0
// Address Range: [[004c32e0, 004c3343]]
// Convention: unknown
// Signature: void FUN_004c32e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c32e0(int param_1)

{
  if (*(int *)(param_1 + 4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    *(uint *)(param_1 + 0x44c) = (uint)(*(int *)(param_1 + 0x44c) == 0);
    if (0.0 < *(float *)(param_1 + 0x33c)) {
      FUN_004c1d70(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0x338)) {
      FUN_004c1d20(param_1,0);
      return;
    }
  }
  return;
}
