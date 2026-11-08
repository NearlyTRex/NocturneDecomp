// Name: FUN_005663b0
// Address: 005663b0
// Address Range: [[005663b0, 005663d8]]
// Convention: unknown
// Signature: undefined4 FUN_005663b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005663b0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_02cf6108 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf606c)(param_1,param_2,param_3);
  return uVar1;
}
