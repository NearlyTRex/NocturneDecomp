// Name: FUN_00560050
// Address: 00560050
// Address Range: [[00560050, 00560087]]
// Convention: unknown
// Signature: undefined4 FUN_00560050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00560050(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc3c)(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}
