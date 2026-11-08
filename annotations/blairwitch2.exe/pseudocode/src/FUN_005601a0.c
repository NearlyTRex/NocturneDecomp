// Name: FUN_005601a0
// Address: 005601a0
// Address Range: [[005601a0, 005601ba]]
// Convention: unknown
// Signature: undefined4 FUN_005601a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005601a0(uint param_1)

{
  uint uVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc5c)(param_1);
  return uVar1;
}
