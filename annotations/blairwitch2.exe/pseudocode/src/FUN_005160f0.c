// Name: FUN_005160f0
// Address: 005160f0
// Address Range: [[005160f0, 0051613d]]
// Convention: unknown
// Signature: undefined4 FUN_005160f0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_005160f0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005fabf0);
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
