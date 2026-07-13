// Name: FUN_0041fa10
// Address: 0041fa10
// Address Range: [[0041fa10, 0041fa84]]
// Convention: unknown
// Signature: int FUN_0041fa10(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0041fa10(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059acb0);
    FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_0044e1c0(param_1 + 0x668,0);
  iVar1 = FUN_0041a6c0(iVar1 + -0x2dc,0);
  iVar1 = FUN_00409ea0(iVar1 + -0x38c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
