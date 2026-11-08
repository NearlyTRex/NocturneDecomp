// Name: FUN_0045d670
// Address: 0045d670
// Address Range: [[0045d670, 0045d6bd]]
// Convention: unknown
// Signature: undefined4 FUN_0045d670(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0045d670(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fe930);
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
