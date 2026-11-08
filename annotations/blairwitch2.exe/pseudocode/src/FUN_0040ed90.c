// Name: FUN_0040ed90
// Address: 0040ed90
// Address Range: [[0040ed90, 0040eddd]]
// Convention: unknown
// Signature: undefined4 FUN_0040ed90(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0040ed90(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f2640);
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
