// Name: FUN_00509a90
// Address: 00509a90
// Address Range: [[00509a90, 00509add]]
// Convention: unknown
// Signature: undefined4 FUN_00509a90(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00509a90(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_006038f0);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_005ad5d0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
