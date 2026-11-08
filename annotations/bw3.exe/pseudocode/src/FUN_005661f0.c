// Name: FUN_005661f0
// Address: 005661f0
// Address Range: [[005661f0, 00566202]]
// Convention: unknown
// Signature: undefined4 FUN_005661f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005661f0(void)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf604c)();
  return uVar1;
}
