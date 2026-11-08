// Name: FUN_0055fe90
// Address: 0055fe90
// Address Range: [[0055fe90, 0055fec9]]
// Convention: unknown
// Signature: undefined4 FUN_0055fe90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055fe90(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  _DAT_0264bce8 = param_2;
  _DAT_0264bcec = param_3;
  _DAT_0264bce4 = param_1;
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc1c)(param_1,param_2,param_3);
  return uVar1;
}
