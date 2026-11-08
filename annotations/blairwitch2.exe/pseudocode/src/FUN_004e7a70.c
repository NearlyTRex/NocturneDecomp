// Name: FUN_004e7a70
// Address: 004e7a70
// Address Range: [[004e7a70, 004e7abd]]
// Convention: unknown
// Signature: undefined4 FUN_004e7a70(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004e7a70(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f9b10);
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
