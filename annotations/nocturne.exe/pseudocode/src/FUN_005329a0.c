// Name: FUN_005329a0
// Address: 005329a0
// Address Range: [[005329a0, 005329b2]]
// Convention: unknown
// Signature: undefined4 FUN_005329a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005329a0(void)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dc8)();
  return uVar1;
}
