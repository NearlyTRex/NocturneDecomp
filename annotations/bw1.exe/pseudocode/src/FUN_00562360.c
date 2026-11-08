// Name: FUN_00562360
// Address: 00562360
// Address Range: [[00562360, 005623ad]]
// Convention: unknown
// Signature: undefined4 FUN_00562360(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00562360(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_006055e0);
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
