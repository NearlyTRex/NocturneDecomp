// Name: FUN_004dd340
// Address: 004dd340
// Address Range: [[004dd340, 004dd380]]
// Convention: unknown
// Signature: void FUN_004dd340(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd340(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x340) = 0x40a00000;
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x350) = 0x40a00000;
      return;
    }
  }
  return;
}
