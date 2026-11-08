// Name: FUN_004e2560
// Address: 004e2560
// Address Range: [[004e2560, 004e25ad]]
// Convention: unknown
// Signature: undefined4 FUN_004e2560(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004e2560(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f9590);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  uVar1 = FUN_00408930(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005b7fdc(uVar1);
  return uVar1;
}
