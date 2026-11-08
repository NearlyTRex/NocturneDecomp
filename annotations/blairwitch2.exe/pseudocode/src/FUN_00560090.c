// Name: FUN_00560090
// Address: 00560090
// Address Range: [[00560090, 005600b8]]
// Convention: unknown
// Signature: undefined4 FUN_00560090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00560090(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_0264bcdc == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc40)(param_1,param_2,param_3);
  return uVar1;
}
