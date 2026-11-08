// Name: FUN_00565c40
// Address: 00565c40
// Address Range: [[00565c40, 00565c68]]
// Convention: unknown
// Signature: undefined4 FUN_00565c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00565c40(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6024)(param_1,param_2,param_3);
  return uVar1;
}
