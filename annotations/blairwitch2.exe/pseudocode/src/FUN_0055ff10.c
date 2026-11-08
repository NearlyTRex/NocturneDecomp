// Name: FUN_0055ff10
// Address: 0055ff10
// Address Range: [[0055ff10, 0055ff3f]]
// Convention: unknown
// Signature: undefined4 FUN_0055ff10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055ff10(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc28)(param_1,param_2,param_3,param_4);
  return uVar1;
}
