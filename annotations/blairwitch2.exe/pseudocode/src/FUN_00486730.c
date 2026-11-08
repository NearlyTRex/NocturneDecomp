// Name: FUN_00486730
// Address: 00486730
// Address Range: [[00486730, 0048677d]]
// Convention: unknown
// Signature: undefined4 FUN_00486730(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00486730(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f5f00);
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
