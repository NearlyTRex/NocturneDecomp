// Name: FUN_0044c510
// Address: 0044c510
// Address Range: [[0044c510, 0044c55d]]
// Convention: unknown
// Signature: undefined4 FUN_0044c510(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0044c510(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fe5d0);
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
