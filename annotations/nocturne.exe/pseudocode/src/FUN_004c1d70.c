// Name: FUN_004c1d70
// Address: 004c1d70
// Address Range: [[004c1d70, 004c1d9b]]
// Convention: unknown
// Signature: void FUN_004c1d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1d70(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  *(uint *)(param_1 + 0x338) = 0;
  *(uint *)(param_1 + 0x33c) = 0x40a00000;
  return;
}
