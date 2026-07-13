// Name: FUN_00540a90
// Address: 00540a90
// Address Range: [[00540a90, 00540add]]
// Convention: unknown
// Signature: undefined4 FUN_00540a90(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00540a90(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005a2890);
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
