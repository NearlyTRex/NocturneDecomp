// Name: FUN_005a7a60
// Address: 005a7a60
// Address Range: [[005a7a60, 005a7aad]]
// Convention: unknown
// Signature: undefined4 FUN_005a7a60(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_005a7a60(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_006000c0);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  uVar1 = FUN_00589ae0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005b7fdc(uVar1);
  return uVar1;
}
