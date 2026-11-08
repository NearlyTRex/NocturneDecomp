// Name: FUN_00582310
// Address: 00582310
// Address Range: [[00582310, 00582337]]
// Convention: unknown
// Signature: undefined4 FUN_00582310(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582310(void)

{
  uint uVar1;
  
  if ((_DAT_01c50948 != 0) && (_DAT_01c50948 = 0, _DAT_02c8339c != (code *)0x0)) {
    uVar1 = (*_DAT_02c8339c)();
    return uVar1;
  }
  return 0;
}
