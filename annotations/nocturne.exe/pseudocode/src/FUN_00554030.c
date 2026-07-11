// Name: FUN_00554030
// Address: 00554030
// Address Range: [[00554030, 0055416a]]
// Convention: unknown
// Signature: void FUN_00554030(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554030(int param_1,float param_2)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0x2f8)) &&
     (fVar1 = *(float *)(param_1 + 0x2f8) - param_2, *(float *)(param_1 + 0x2f8) = fVar1,
     fVar1 < 0.0)) {
    *(uint *)(param_1 + 0x2f8) = 0;
  }
  if (((*(int *)(param_1 + 0x2fc) == 0) && (*(int *)(param_1 + 0x2cc) == 0)) &&
     (0.0 < *(float *)(param_1 + 0x568))) {
    fVar1 = *(float *)(param_1 + 0x568) - param_2;
    *(float *)(param_1 + 0x568) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x568) = 0;
    }
    FUN_0041acb0((uint *)(param_1 + 0x300),param_2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x300);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x304);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x308);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x30c)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30c);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x314);
    }
  }
  FUN_0040a000(param_1);
  if (((*(int *)(param_1 + 0x2fc) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) &&
      (*(int *)(0x01C775EC + 0x244) != 0)) && (*(int *)(param_1 + 0x2e8) != 0)) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0xec))(param_1);
    if (0.0 < _DAT_01c775e8) {
      FUN_0050a970(0x01E57284,&DAT_01c74640);
      return;
    }
  }
  return;
}
