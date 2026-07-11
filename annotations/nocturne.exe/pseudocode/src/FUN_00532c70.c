// Name: FUN_00532c70
// Address: 00532c70
// Address Range: [[00532c70, 00532c8a]]
// Convention: unknown
// Signature: undefined4 FUN_00532c70(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532c70(uint param_1)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9de8)(param_1);
  return uVar1;
}
