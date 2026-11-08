// Name: FUN_00527300
// Address: 00527300
// Address Range: [[00527300, 0052734d]]
// Convention: unknown
// Signature: undefined4 FUN_00527300(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00527300(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005e36a0);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  uVar1 = FUN_004d2620(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005a30c4(uVar1);
  return uVar1;
}
