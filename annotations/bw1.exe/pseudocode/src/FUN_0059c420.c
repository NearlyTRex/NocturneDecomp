// Name: FUN_0059c420
// Address: 0059c420
// Address Range: [[0059c420, 0059c46d]]
// Convention: unknown
// Signature: undefined4 FUN_0059c420(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0059c420(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_006072b0);
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
