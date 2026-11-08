// Name: FUN_0048b730
// Address: 0048b730
// Address Range: [[0048b730, 0048b77d]]
// Convention: unknown
// Signature: undefined4 FUN_0048b730(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0048b730(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005df5d0);
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
