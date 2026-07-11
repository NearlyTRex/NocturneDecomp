// Name: FUN_00532af0
// Address: 00532af0
// Address Range: [[00532af0, 00532b29]]
// Convention: unknown
// Signature: undefined4 FUN_00532af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532af0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  _DAT_02dc9e10 = param_2;
  _DAT_02dc9e14 = param_3;
  _DAT_02dc9e0c = param_1;
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dcc)(param_1,param_2,param_3);
  return uVar1;
}
