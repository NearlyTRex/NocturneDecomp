// Name: FUN_004dd2f0
// Address: 004dd2f0
// Address Range: [[004dd2f0, 004dd311]]
// Convention: unknown
// Signature: void FUN_004dd2f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd2f0(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  *(uint *)(param_1 + 0x348) = 0x40a00000;
  return;
}
