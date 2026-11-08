// Name: FUN_00568300
// Address: 00568300
// Address Range: [[00568300, 0056834d]]
// Convention: unknown
// Signature: undefined4 FUN_00568300(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00568300(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005e4d90);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  uVar1 = FUN_0057aed0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005a30c4(uVar1);
  return uVar1;
}
