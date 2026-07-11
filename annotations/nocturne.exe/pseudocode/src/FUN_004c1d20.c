// Name: FUN_004c1d20
// Address: 004c1d20
// Address Range: [[004c1d20, 004c1d60]]
// Convention: unknown
// Signature: void FUN_004c1d20(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1d20(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    *(uint *)(param_1 + 0x33c) = 0;
    *(uint *)(param_1 + 0x338) = 0x40a00000;
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x348) = 0x40a00000;
      return;
    }
  }
  return;
}
