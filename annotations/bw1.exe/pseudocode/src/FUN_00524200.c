// Name: FUN_00524200
// Address: 00524200
// Address Range: [[00524200, 00524243]]
// Convention: unknown
// Signature: int FUN_00524200(int param_1,uint param_2)

#include "nocturne.h"

int FUN_00524200(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_006042f0);
    FUN_005c0336(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_006042e4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005c0344(param_1);
  return param_1;
}
