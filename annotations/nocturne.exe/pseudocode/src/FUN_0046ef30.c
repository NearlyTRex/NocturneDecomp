// Name: FUN_0046ef30
// Address: 0046ef30
// Address Range: [[0046ef30, 0046ef7d]]
// Convention: unknown
// Signature: undefined4 FUN_0046ef30(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0046ef30(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_0059ca20);
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
