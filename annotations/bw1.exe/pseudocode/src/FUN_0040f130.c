// Name: FUN_0040f130
// Address: 0040f130
// Address Range: [[0040f130, 0040f17d]]
// Convention: unknown
// Signature: undefined4 FUN_0040f130(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0040f130(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fba80);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_00408730(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
