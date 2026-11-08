// Name: FUN_004dd390
// Address: 004dd390
// Address Range: [[004dd390, 004dd3bb]]
// Convention: unknown
// Signature: void FUN_004dd390(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd390(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    return;
  }
  *(uint *)(param_1 + 0x340) = 0;
  *(uint *)(param_1 + 0x344) = 0x40a00000;
  return;
}
