// Name: FUN_00415e40
// Address: 00415e40
// Address Range: [[00415e40, 00415edb]]
// Convention: unknown
// Signature: int FUN_00415e40(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00415e40(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059a860);
    FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_FUN_0059a744;
  FUN_00415ee0(param_1,0,0);
  iVar1 = FUN_0041a6c0(param_1 + 0xcb4,0);
  iVar1 = FUN_00418130(iVar1 + -0x56c,0);
  iVar1 = FUN_00418110(iVar1 + -0x4c0,0);
  iVar1 = FUN_00409ea0(iVar1 + -0x288,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
