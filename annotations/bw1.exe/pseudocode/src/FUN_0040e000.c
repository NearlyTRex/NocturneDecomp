// Name: FUN_0040e000
// Address: 0040e000
// Address Range: [[0040e000, 0040e04d]]
// Convention: unknown
// Signature: undefined4 FUN_0040e000(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0040e000(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fb550);
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
