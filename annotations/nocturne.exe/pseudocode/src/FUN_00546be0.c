// Name: FUN_00546be0
// Address: 00546be0
// Address Range: [[00546be0, 00546c2d]]
// Convention: unknown
// Signature: undefined4 FUN_00546be0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00546be0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005a3500);
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
