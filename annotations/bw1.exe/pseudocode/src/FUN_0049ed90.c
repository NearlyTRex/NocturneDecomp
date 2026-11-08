// Name: FUN_0049ed90
// Address: 0049ed90
// Address Range: [[0049ed90, 0049eddd]]
// Convention: unknown
// Signature: undefined4 FUN_0049ed90(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0049ed90(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005ff9f0);
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
