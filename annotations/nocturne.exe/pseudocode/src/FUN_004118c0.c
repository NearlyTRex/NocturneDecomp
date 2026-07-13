// Name: FUN_004118c0
// Address: 004118c0
// Address Range: [[004118c0, 0041190d]]
// Convention: unknown
// Signature: undefined4 FUN_004118c0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004118c0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_00599e50);
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
