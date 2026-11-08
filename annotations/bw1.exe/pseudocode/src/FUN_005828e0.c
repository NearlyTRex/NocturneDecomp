// Name: FUN_005828e0
// Address: 005828e0
// Address Range: [[005828e0, 00582919]]
// Convention: unknown
// Signature: undefined4 FUN_005828e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005828e0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  _DAT_02c834b8 = param_2;
  _DAT_02c834bc = param_3;
  _DAT_02c834b4 = param_1;
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c833ec)(param_1,param_2,param_3);
  return uVar1;
}
