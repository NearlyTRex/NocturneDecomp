// Name: FUN_00532b50
// Address: 00532b50
// Address Range: [[00532b50, 00532b62]]
// Convention: unknown
// Signature: undefined4 FUN_00532b50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532b50(void)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dd4)();
  return uVar1;
}
