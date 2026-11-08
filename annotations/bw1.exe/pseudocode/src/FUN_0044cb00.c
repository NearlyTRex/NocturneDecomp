// Name: FUN_0044cb00
// Address: 0044cb00
// Address Range: [[0044cb00, 0044cb5d]]
// Convention: unknown
// Signature: int FUN_0044cb00(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0044cb00(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fe640);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005fe624;
  FUN_0044cdf0(param_1);
  iVar1 = FUN_00428240(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
