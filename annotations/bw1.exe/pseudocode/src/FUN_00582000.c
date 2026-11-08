// Name: FUN_00582000
// Address: 00582000
// Address Range: [[00582000, 00582012]]
// Convention: unknown
// Signature: undefined4 FUN_00582000(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582000(void)

{
  uint uVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c833a4)();
  return uVar1;
}
