// Name: FUN_00566350
// Address: 00566350
// Address Range: [[00566350, 0056636a]]
// Convention: unknown
// Signature: undefined4 FUN_00566350(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566350(uint param_1)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6064)(param_1);
  return uVar1;
}
