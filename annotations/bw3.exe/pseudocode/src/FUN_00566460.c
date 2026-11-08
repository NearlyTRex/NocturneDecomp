// Name: FUN_00566460
// Address: 00566460
// Address Range: [[00566460, 00566472]]
// Convention: unknown
// Signature: undefined4 FUN_00566460(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566460(void)

{
  uint uVar1;
  
  if (_DAT_02cf607c == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf607c)();
  return uVar1;
}
