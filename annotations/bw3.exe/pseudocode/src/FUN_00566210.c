// Name: FUN_00566210
// Address: 00566210
// Address Range: [[00566210, 00566222]]
// Convention: unknown
// Signature: undefined4 FUN_00566210(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566210(void)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6050)();
  return uVar1;
}
