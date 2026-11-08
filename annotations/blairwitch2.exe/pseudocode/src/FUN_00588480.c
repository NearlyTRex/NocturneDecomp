// Name: FUN_00588480
// Address: 00588480
// Address Range: [[00588480, 005884cd]]
// Convention: unknown
// Signature: undefined4 FUN_00588480(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00588480(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005fdf20);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  uVar1 = FUN_00577840(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005b7fdc(uVar1);
  return uVar1;
}
