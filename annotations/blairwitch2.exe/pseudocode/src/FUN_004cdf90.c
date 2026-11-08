// Name: FUN_004cdf90
// Address: 004cdf90
// Address Range: [[004cdf90, 004cdfd4]]
// Convention: unknown
// Signature: undefined4 FUN_004cdf90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cdf90(int param_1,int param_2)

{
  float fVar1;
  
  if (0 < *(int *)(param_1 + 0x430)) {
    fVar1 = *(float *)(param_1 + 0x434) + *(float *)(param_2 + 0x25a8);
    *(float *)(param_2 + 0x25a8) = fVar1;
    if ((float)_DAT_005d99f4 < fVar1) {
      *(uint *)(param_2 + 0x25a8) = 0x42c80000;
    }
    *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + -1;
  }
  return *(uint *)(param_1 + 0x430);
}
