// Name: FUN_005600c0
// Address: 005600c0
// Address Range: [[005600c0, 005600df]]
// Convention: unknown
// Signature: undefined4 FUN_005600c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005600c0(uint param_1)

{
  uint uVar1;
  
  if (_DAT_0264bcdc == 0) {
    return 0;
  }
  _DAT_0264bba4 = param_1;
  uVar1 = (*_DAT_0264bc44)(param_1);
  return uVar1;
}
