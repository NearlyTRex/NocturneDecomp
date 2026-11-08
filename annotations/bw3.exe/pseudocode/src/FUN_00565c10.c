// Name: FUN_00565c10
// Address: 00565c10
// Address Range: [[00565c10, 00565c38]]
// Convention: unknown
// Signature: undefined4 FUN_00565c10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00565c10(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6020)(param_1,param_2,param_3);
  return uVar1;
}
