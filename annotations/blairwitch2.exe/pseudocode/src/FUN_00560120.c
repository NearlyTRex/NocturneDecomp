// Name: FUN_00560120
// Address: 00560120
// Address Range: [[00560120, 00560132]]
// Convention: unknown
// Signature: undefined4 FUN_00560120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00560120(void)

{
  uint uVar1;
  
  if (_DAT_0264bc4c == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc4c)();
  return uVar1;
}
