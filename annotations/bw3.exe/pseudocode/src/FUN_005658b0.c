// Name: FUN_005658b0
// Address: 005658b0
// Address Range: [[005658b0, 005658c2]]
// Convention: unknown
// Signature: undefined4 FUN_005658b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005658b0(void)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf5ffc)();
  return uVar1;
}
