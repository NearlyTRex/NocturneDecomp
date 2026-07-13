// Name: FUN_004c8380
// Address: 004c8380
// Address Range: [[004c8380, 004c83cd]]
// Convention: unknown
// Signature: undefined4 FUN_004c8380(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004c8380(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_0059ffb0);
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
