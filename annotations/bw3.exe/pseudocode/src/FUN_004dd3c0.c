// Name: FUN_004dd3c0
// Address: 004dd3c0
// Address Range: [[004dd3c0, 004dd3e1]]
// Convention: unknown
// Signature: void FUN_004dd3c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd3c0(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    return;
  }
  *(uint *)(param_1 + 0x348) = 0x40a00000;
  return;
}
