// Name: FUN_00582b10
// Address: 00582b10
// Address Range: [[00582b10, 00582b2f]]
// Convention: unknown
// Signature: undefined4 FUN_00582b10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582b10(uint param_1)

{
  uint uVar1;
  
  if (_DAT_02c834ac == 0) {
    return 0;
  }
  _DAT_02c83374 = param_1;
  uVar1 = (*_DAT_02c83414)(param_1);
  return uVar1;
}
