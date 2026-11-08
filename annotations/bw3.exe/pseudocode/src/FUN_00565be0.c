// Name: FUN_00565be0
// Address: 00565be0
// Address Range: [[00565be0, 00565c07]]
// Convention: unknown
// Signature: undefined4 FUN_00565be0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00565be0(void)

{
  uint uVar1;
  
  if ((_DAT_01c6cee8 != 0) && (_DAT_01c6cee8 = 0, _DAT_02cf5ff8 != (code *)0x0)) {
    uVar1 = (*_DAT_02cf5ff8)();
    return uVar1;
  }
  return 0;
}
