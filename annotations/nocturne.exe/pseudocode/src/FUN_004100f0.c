// Name: FUN_004100f0
// Address: 004100f0
// Address Range: [[004100f0, 0041013d]]
// Convention: unknown
// Signature: undefined4 FUN_004100f0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004100f0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_00599a80);
    FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
