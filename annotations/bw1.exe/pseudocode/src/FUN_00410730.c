// Name: FUN_00410730
// Address: 00410730
// Address Range: [[00410730, 0041077d]]
// Convention: unknown
// Signature: undefined4 FUN_00410730(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00410730(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fbd30);
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
