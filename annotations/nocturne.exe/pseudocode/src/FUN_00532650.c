// Name: FUN_00532650
// Address: 00532650
// Address Range: [[00532650, 00532678]]
// Convention: unknown
// Signature: undefined4 FUN_00532650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532650(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dac)(param_1,param_2,param_3);
  return uVar1;
}
