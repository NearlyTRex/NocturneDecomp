// Name: FUN_004a76a0
// Address: 004a76a0
// Address Range: [[004a76a0, 004a76ed]]
// Convention: unknown
// Signature: undefined4 FUN_004a76a0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004a76a0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005e0190);
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
