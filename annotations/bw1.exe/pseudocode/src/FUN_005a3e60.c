// Name: FUN_005a3e60
// Address: 005a3e60
// Address Range: [[005a3e60, 005a3ead]]
// Convention: unknown
// Signature: undefined4 FUN_005a3e60(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_005a3e60(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_006075e0);
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
