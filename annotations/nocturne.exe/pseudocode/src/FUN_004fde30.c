// Name: FUN_004fde30
// Address: 004fde30
// Address Range: [[004fde30, 004fde7d]]
// Convention: unknown
// Signature: undefined4 FUN_004fde30(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004fde30(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005a16a0);
    FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = FUN_004b4800(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
