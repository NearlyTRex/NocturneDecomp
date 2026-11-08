// Name: FUN_005ad770
// Address: 005ad770
// Address Range: [[005ad770, 005ad8aa]]
// Convention: unknown
// Signature: void FUN_005ad770(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad770(int param_1,float param_2)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0x300)) &&
     (fVar1 = *(float *)(param_1 + 0x300) - param_2, *(float *)(param_1 + 0x300) = fVar1,
     fVar1 < 0.0)) {
    *(uint *)(param_1 + 0x300) = 0;
  }
  if (((*(int *)(param_1 + 0x304) == 0) && (*(int *)(param_1 + 0x2d4) == 0)) &&
     (0.0 < *(float *)(param_1 + 0x570))) {
    fVar1 = *(float *)(param_1 + 0x570) - param_2;
    *(float *)(param_1 + 0x570) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x570) = 0;
    }
    FUN_0041e0d0((uint *)(param_1 + 0x308),param_2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x308);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x30c);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x310);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x314)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x314);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x318);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x31c);
    }
  }
  FUN_004088b0(param_1);
  if (((*(int *)(param_1 + 0x304) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) &&
      (*(int *)(0x01CCF390 + 0x264) != 0)) && (*(int *)(param_1 + 0x2f0) != 0)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0xf4))(param_1);
    if (0.0 < _DAT_01ccf38c) {
      FUN_005518e0(0x01E82168,0x1ccc3e4);
      return;
    }
  }
  return;
}
