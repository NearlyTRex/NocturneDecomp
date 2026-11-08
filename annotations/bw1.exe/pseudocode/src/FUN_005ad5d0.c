// Name: FUN_005ad5d0
// Address: 005ad5d0
// Address Range: [[005ad5d0, 005ad63e]]
// Convention: unknown
// Signature: int FUN_005ad5d0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005ad5d0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00607f70);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_00607e74;
  iVar1 = FUN_0041dab0(param_1 + 0x308,0);
  iVar1 = FUN_00408730(iVar1 + -0x308,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
