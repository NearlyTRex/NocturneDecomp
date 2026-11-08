// Name: FUN_00444170
// Address: 00444170
// Address Range: [[00444170, 004441bd]]
// Convention: unknown
// Signature: undefined4 FUN_00444170(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00444170(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fdb40);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_00442bb0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
