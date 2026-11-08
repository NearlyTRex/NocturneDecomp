// Name: FUN_00582b90
// Address: 00582b90
// Address Range: [[00582b90, 00582ba2]]
// Convention: unknown
// Signature: undefined4 FUN_00582b90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582b90(void)

{
  uint uVar1;
  
  if (_DAT_02c83420 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02c83420)();
  return uVar1;
}
