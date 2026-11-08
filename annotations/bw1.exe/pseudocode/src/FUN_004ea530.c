// Name: FUN_004ea530
// Address: 004ea530
// Address Range: [[004ea530, 004ea574]]
// Convention: unknown
// Signature: undefined4 FUN_004ea530(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ea530(int param_1,int param_2)

{
  float fVar1;
  
  if (0 < *(int *)(param_1 + 0x2d4)) {
    fVar1 = *(float *)(param_1 + 0x2d8) + *(float *)(param_2 + 0x2538);
    *(float *)(param_2 + 0x2538) = fVar1;
    if ((float)_DAT_005e45f5 < fVar1) {
      *(uint *)(param_2 + 0x2538) = 0x42c80000;
    }
    *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + -1;
  }
  return *(uint *)(param_1 + 0x2d4);
}
