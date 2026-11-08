// Name: FUN_005663e0
// Address: 005663e0
// Address Range: [[005663e0, 005663ff]]
// Convention: unknown
// Signature: undefined4 FUN_005663e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005663e0(uint param_1)

{
  uint uVar1;
  
  if (_DAT_02cf6108 == 0) {
    return 0;
  }
  _DAT_02cf5fd0 = param_1;
  uVar1 = (*_DAT_02cf6070)(param_1);
  return uVar1;
}
