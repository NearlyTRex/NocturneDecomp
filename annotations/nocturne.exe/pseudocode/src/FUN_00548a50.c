// Name: FUN_00548a50
// Address: 00548a50
// Address Range: [[00548a50, 00548a9d]]
// Convention: unknown
// Signature: undefined4 FUN_00548a50(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00548a50(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005a3740);
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
