// Name: FUN_00566400
// Address: 00566400
// Address Range: [[00566400, 00566437]]
// Convention: unknown
// Signature: undefined4 FUN_00566400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566400(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if (_DAT_02cf6108 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6074)(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}
