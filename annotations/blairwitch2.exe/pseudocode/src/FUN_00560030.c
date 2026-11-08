// Name: FUN_00560030
// Address: 00560030
// Address Range: [[00560030, 0056004a]]
// Convention: unknown
// Signature: undefined4 FUN_00560030(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00560030(uint param_1)

{
  uint uVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc38)(param_1);
  return uVar1;
}
