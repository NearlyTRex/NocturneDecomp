// Name: FUN_004fa6c0
// Address: 004fa6c0
// Address Range: [[004fa6c0, 004fa700]]
// Convention: unknown
// Signature: void FUN_004fa6c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa6c0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x340) = 0x40a00000;
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x350) = 0x40a00000;
      return;
    }
  }
  return;
}
