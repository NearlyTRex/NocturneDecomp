// Name: FUN_0048ee00
// Address: 0048ee00
// Address Range: [[0048ee00, 0048ee4d]]
// Convention: unknown
// Signature: undefined4 FUN_0048ee00(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0048ee00(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_0059d9f0);
    FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = FUN_00553ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
