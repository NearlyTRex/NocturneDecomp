// Name: FUN_00532b30
// Address: 00532b30
// Address Range: [[00532b30, 00532b42]]
// Convention: unknown
// Signature: undefined4 FUN_00532b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532b30(void)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dd0)();
  return uVar1;
}
