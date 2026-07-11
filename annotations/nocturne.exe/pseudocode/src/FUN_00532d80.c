// Name: FUN_00532d80
// Address: 00532d80
// Address Range: [[00532d80, 00532d92]]
// Convention: unknown
// Signature: undefined4 FUN_00532d80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532d80(void)

{
  uint uVar1;
  
  if (_DAT_02dc9e00 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9e00)();
  return uVar1;
}
