// Name: FUN_005b1b90
// Address: 005b1b90
// Address Range: [[005b1b90, 005b1bf0]]
// Convention: unknown
// Signature: int FUN_005b1b90(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005b1b90(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00608180);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x6a44) = &PTR_FUN_00608164;
  FUN_005b2080(param_1);
  iVar1 = FUN_00531ed0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
