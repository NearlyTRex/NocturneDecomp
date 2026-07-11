// Name: FUN_0051b6e0
// Address: 0051b6e0
// Address Range: [[0051b6e0, 0051b74e]]
// Convention: unknown
// Signature: int FUN_0051b6e0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0051b6e0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_005a1f00);
    FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_005a1ed4;
  FUN_0051b7d0(param_1);
  iVar1 = FUN_0043f9a0(param_1 + 0x58,0);
  iVar1 = FUN_004e1150(iVar1 + -0x58,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
