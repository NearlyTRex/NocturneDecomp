// Name: FUN_00582920
// Address: 00582920
// Address Range: [[00582920, 00582932]]
// Convention: unknown
// Signature: undefined4 FUN_00582920(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582920(void)

{
  uint uVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c833f0)();
  return uVar1;
}
