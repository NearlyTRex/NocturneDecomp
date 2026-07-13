// Name: FUN_004b5fc0
// Address: 004b5fc0
// Address Range: [[004b5fc0, 004b6017]]
// Convention: unknown
// Signature: int FUN_004b5fc0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004b5fc0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059ed60);
    FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_FUN_0059ec84;
  iVar1 = FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
