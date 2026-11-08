// Name: FUN_00566230
// Address: 00566230
// Address Range: [[00566230, 0056625f]]
// Convention: unknown
// Signature: undefined4 FUN_00566230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566230(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6054)(param_1,param_2,param_3,param_4);
  return uVar1;
}
