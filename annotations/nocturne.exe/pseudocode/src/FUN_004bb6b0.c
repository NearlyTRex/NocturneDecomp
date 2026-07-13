// Name: FUN_004bb6b0
// Address: 004bb6b0
// Address Range: [[004bb6b0, 004bb6fd]]
// Convention: unknown
// Signature: undefined4 FUN_004bb6b0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004bb6b0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_0059f530);
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
