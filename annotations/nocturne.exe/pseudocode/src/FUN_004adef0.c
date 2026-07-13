// Name: FUN_004adef0
// Address: 004adef0
// Address Range: [[004adef0, 004adf64]]
// Convention: unknown
// Signature: int FUN_004adef0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004adef0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059e490);
    FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_004adf70(param_1 + 900,0);
  iVar1 = FUN_004d6570(iVar1 + -0x1a0,0);
  iVar1 = FUN_00409ea0(iVar1 + -0x1e4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
