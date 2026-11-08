// Name: FUN_0040c6a0
// Address: 0040c6a0
// Address Range: [[0040c6a0, 0040c74d]]
// Convention: unknown
// Signature: undefined4 FUN_0040c6a0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040c6a0(int param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  pfVar1 = (float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24) - _DAT_01fe37f4;
  fVar2 = *(float *)(param_1 + 0x28) - _DAT_01fe37f8;
  if (_DAT_005d2e39 <
      fVar2 * fVar2 + fVar3 * fVar3 + (*pfVar1 - _DAT_01fe37f0) * (*pfVar1 - _DAT_01fe37f0)) {
    return 0;
  }
  FUN_00559250(0x01E82168,param_1);
  FUN_005562c0(0x01E82168,pfVar1,0);
  FUN_00559220(0x01E82168);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x28))
                    (param_1,pfVar1,*(uint *)(0x01E82168 + 0x14d134),param_2);
  return uVar4;
}
