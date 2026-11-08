// Name: FUN_004fa710
// Address: 004fa710
// Address Range: [[004fa710, 004fa73b]]
// Convention: unknown
// Signature: void FUN_004fa710(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa710(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  *(uint *)(param_1 + 0x340) = 0;
  *(uint *)(param_1 + 0x344) = 0x40a00000;
  return;
}
