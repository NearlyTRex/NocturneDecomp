// Name: FUN_004928d0
// Address: 004928d0
// Address Range: [[004928d0, 0049291d]]
// Convention: unknown
// Signature: undefined4 FUN_004928d0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004928d0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005ff7c0);
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
