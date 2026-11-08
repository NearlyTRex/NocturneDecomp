// Name: FUN_0040c8e0
// Address: 0040c8e0
// Address Range: [[0040c8e0, 0040c98d]]
// Convention: unknown
// Signature: undefined4 FUN_0040c8e0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040c8e0(int param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  pfVar1 = (float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24) - _DAT_02038f54;
  fVar2 = *(float *)(param_1 + 0x28) - _DAT_02038f58;
  if (_DAT_005b5e85 <
      fVar2 * fVar2 + fVar3 * fVar3 + (*pfVar1 - _DAT_02038f50) * (*pfVar1 - _DAT_02038f50)) {
    return 0;
  }
  FUN_0053ec10(0x01ED78C8,param_1);
  FUN_0053bc80(0x01ED78C8,pfVar1,0);
  FUN_0053ebe0(0x01ED78C8);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x28))
                    (param_1,pfVar1,*(uint *)(0x01ED78C8 + 0x14d134),param_2);
  return uVar4;
}
