// Name: FUN_00560140
// Address: 00560140
// Address Range: [[00560140, 00560152]]
// Convention: unknown
// Signature: undefined4 FUN_00560140(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00560140(void)

{
  uint uVar1;
  
  if (_DAT_0264bc50 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc50)();
  return uVar1;
}
