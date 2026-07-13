// Name: FUN_0040d930
// Address: 0040d930
// Address Range: [[0040d930, 0040d9e7]]
// Convention: unknown
// Signature: undefined4 FUN_0040d930(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040d930(int param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  pfVar1 = (float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24) - _DAT_01fb8610;
  fVar2 = *(float *)(param_1 + 0x28) - _DAT_01fb8614;
  if (_DAT_00578011 <
      fVar2 * fVar2 + fVar3 * fVar3 + (*pfVar1 - _DAT_01fb860c) * (*pfVar1 - _DAT_01fb860c)) {
    return 0;
  }
  FUN_00511780(0x01E57284,param_1);
  FUN_0050ec80(0x01E57284,pfVar1,0);
  FUN_00511750(0x01E57284);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x20))
                    (param_1,pfVar1,*(uint *)(0x01E57284 + 0x14cd4c),param_2);
  return uVar4;
}
