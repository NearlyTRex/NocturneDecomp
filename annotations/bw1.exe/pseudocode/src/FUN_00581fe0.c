// Name: FUN_00581fe0
// Address: 00581fe0
// Address Range: [[00581fe0, 00581ff2]]
// Convention: unknown
// Signature: undefined4 FUN_00581fe0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00581fe0(void)

{
  uint uVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c833a0)();
  return uVar1;
}
