// Name: FUN_00428240
// Address: 00428240
// Address Range: [[00428240, 00428288]]
// Convention: unknown
// Signature: int FUN_00428240(int param_1,uint param_2)

#include "nocturne.h"

int FUN_00428240(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fd430);
    FUN_005c0336(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005fd414;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005c0344(param_1);
  return param_1;
}
