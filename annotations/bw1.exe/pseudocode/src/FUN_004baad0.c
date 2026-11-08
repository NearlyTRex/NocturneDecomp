// Name: FUN_004baad0
// Address: 004baad0
// Address Range: [[004baad0, 004bab3e]]
// Convention: unknown
// Signature: int FUN_004baad0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004baad0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00600a00);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_00600944;
  FUN_0040d1c0(param_1 + 0x18);
  iVar1 = FUN_0040d0c0(param_1 + 0x18,0);
  iVar1 = FUN_004ba760(iVar1 + -0x18,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
