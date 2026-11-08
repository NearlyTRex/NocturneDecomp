// Name: FUN_00435400
// Address: 00435400
// Address Range: [[00435400, 0043544d]]
// Convention: unknown
// Signature: undefined4 FUN_00435400(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00435400(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,0x5f43f0);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  uVar1 = FUN_00433e90(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005b7fdc(uVar1);
  return uVar1;
}
