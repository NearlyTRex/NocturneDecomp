// Name: FUN_004bf670
// Address: 004bf670
// Address Range: [[004bf670, 004bf6bd]]
// Convention: unknown
// Signature: undefined4 FUN_004bf670(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004bf670(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_00600a80);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_004ba760(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
