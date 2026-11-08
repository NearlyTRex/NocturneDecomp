// Name: FUN_004e8f70
// Address: 004e8f70
// Address Range: [[004e8f70, 004e8fbd]]
// Convention: unknown
// Signature: undefined4 FUN_004e8f70(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004e8f70(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_00601a20);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_005ad5d0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
