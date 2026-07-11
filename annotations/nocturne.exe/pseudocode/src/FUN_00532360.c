// Name: FUN_00532360
// Address: 00532360
// Address Range: [[00532360, 00532372]]
// Convention: unknown
// Signature: undefined4 FUN_00532360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532360(void)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9d90)();
  return uVar1;
}
