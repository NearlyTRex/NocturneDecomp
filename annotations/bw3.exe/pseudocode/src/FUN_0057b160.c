// Name: FUN_0057b160
// Address: 0057b160
// Address Range: [[0057b160, 0057b29a]]
// Convention: unknown
// Signature: void FUN_0057b160(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b160(int param_1,float param_2)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0x300)) &&
     (fVar1 = *(float *)(param_1 + 0x300) - param_2, *(float *)(param_1 + 0x300) = fVar1,
     fVar1 < 0.0)) {
    *(uint *)(param_1 + 0x300) = 0;
  }
  if (((*(int *)(param_1 + 0x304) == 0) && (*(int *)(param_1 + 0x2d4) == 0)) &&
     (0.0 < *(float *)(param_1 + 0x580))) {
    fVar1 = *(float *)(param_1 + 0x580) - param_2;
    *(float *)(param_1 + 0x580) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x580) = 0;
    }
    FUN_0041b410((uint *)(param_1 + 0x308),param_2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x308);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x30c);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x310);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x314)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x314);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x318);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x31c);
    }
  }
  FUN_004088f0(param_1);
  if (((*(int *)(param_1 + 0x304) == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) &&
      (*(int *)(0x01D2130C + 0x26c) != 0)) && (*(int *)(param_1 + 0x2f0) != 0)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0xf4))(param_1);
    if (0.0 < _DAT_01d21308) {
      FUN_00537270(0x01ED78C8,0x1d1e360);
      return;
    }
  }
  return;
}
