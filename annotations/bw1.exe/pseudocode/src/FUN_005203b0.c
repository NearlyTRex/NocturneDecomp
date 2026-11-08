// Name: FUN_005203b0
// Address: 005203b0
// Address Range: [[005203b0, 0052042e]]
// Convention: unknown
// Signature: int FUN_005203b0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005203b0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00604070);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_00603f04;
  iVar1 = FUN_00522fc0(param_1 + 0x22424,0);
  iVar1 = FUN_005673f0(iVar1 + -0x2478,0);
  iVar1 = FUN_004ea980(iVar1 + -0x1ffac,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
