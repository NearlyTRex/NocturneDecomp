// Name: FUN_004dd9f0
// Address: 004dd9f0
// Address Range: [[004dd9f0, 004dda6e]]
// Convention: unknown
// Signature: int FUN_004dd9f0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004dd9f0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_005a0c10);
    FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_FUN_005a0ac4;
  iVar1 = FUN_004e0070(param_1 + 0x21dc4,0);
  iVar1 = FUN_0051b6e0(iVar1 + -0x2388,0);
  iVar1 = FUN_004b4800(iVar1 + -0x1fa3c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
