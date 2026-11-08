// Name: FUN_00582a80
// Address: 00582a80
// Address Range: [[00582a80, 00582a9a]]
// Convention: unknown
// Signature: undefined4 FUN_00582a80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582a80(uint param_1)

{
  uint uVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c83408)(param_1);
  return uVar1;
}
