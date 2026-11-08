// Name: FUN_00584e00
// Address: 00584e00
// Address Range: [[00584e00, 00584e4d]]
// Convention: unknown
// Signature: undefined4 FUN_00584e00(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00584e00(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_00605f10);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_00408730(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
