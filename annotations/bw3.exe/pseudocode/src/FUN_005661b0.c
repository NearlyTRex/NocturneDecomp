// Name: FUN_005661b0
// Address: 005661b0
// Address Range: [[005661b0, 005661e9]]
// Convention: unknown
// Signature: undefined4 FUN_005661b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005661b0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  _DAT_02cf6114 = param_2;
  _DAT_02cf6118 = param_3;
  _DAT_02cf6110 = param_1;
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6048)(param_1,param_2,param_3);
  return uVar1;
}
