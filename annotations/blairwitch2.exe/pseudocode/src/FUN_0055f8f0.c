// Name: FUN_0055f8f0
// Address: 0055f8f0
// Address Range: [[0055f8f0, 0055f918]]
// Convention: unknown
// Signature: undefined4 FUN_0055f8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055f8f0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bbf4)(param_1,param_2,param_3);
  return uVar1;
}
