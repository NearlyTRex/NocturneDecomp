// Name: FUN_00582790
// Address: 00582790
// Address Range: [[00582790, 005827a2]]
// Convention: unknown
// Signature: undefined4 FUN_00582790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582790(void)

{
  uint uVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c833e8)();
  return uVar1;
}
