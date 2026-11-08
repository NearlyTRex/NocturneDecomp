// Name: FUN_0040f6d0
// Address: 0040f6d0
// Address Range: [[0040f6d0, 0040f71d]]
// Convention: unknown
// Signature: undefined4 FUN_0040f6d0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0040f6d0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005db990);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  uVar1 = FUN_00408770(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005a30c4(uVar1);
  return uVar1;
}
