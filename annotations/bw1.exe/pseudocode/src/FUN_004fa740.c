// Name: FUN_004fa740
// Address: 004fa740
// Address Range: [[004fa740, 004fa761]]
// Convention: unknown
// Signature: void FUN_004fa740(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa740(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  *(uint *)(param_1 + 0x348) = 0x40a00000;
  return;
}
