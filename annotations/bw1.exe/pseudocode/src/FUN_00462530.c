// Name: FUN_00462530
// Address: 00462530
// Address Range: [[00462530, 0046258d]]
// Convention: unknown
// Signature: int FUN_00462530(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00462530(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fec10);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005febf4;
  FUN_00462670(param_1);
  iVar1 = FUN_0044cb00(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
