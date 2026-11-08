// Name: FUN_0040c990
// Address: 0040c990
// Address Range: [[0040c990, 0040ca3d]]
// Convention: unknown
// Signature: undefined4 FUN_0040c990(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040c990(int param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  pfVar1 = (float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24) - _DAT_01fc7840;
  fVar2 = *(float *)(param_1 + 0x28) - _DAT_01fc7844;
  if (_DAT_005caed6 <
      fVar2 * fVar2 + fVar3 * fVar3 + (*pfVar1 - _DAT_01fc783c) * (*pfVar1 - _DAT_01fc783c)) {
    return 0;
  }
  FUN_00537e30(0x01E661B8,param_1);
  FUN_00534ea0(0x01E661B8,pfVar1,0);
  FUN_00537e00(0x01E661B8);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x30))
                    (param_1,pfVar1,*(uint *)(0x01E661B8 + 0x14d134),param_2);
  return uVar4;
}
