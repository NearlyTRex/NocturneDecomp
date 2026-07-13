// Name: FUN_004f93e0
// Address: 004f93e0
// Address Range: [[004f93e0, 004f942d]]
// Convention: unknown
// Signature: undefined4 FUN_004f93e0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004f93e0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005a1510);
    FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = FUN_004f8840(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
