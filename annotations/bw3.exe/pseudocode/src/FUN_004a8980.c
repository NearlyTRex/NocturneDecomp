// Name: FUN_004a8980
// Address: 004a8980
// Address Range: [[004a8980, 004a89fd]]
// Convention: unknown
// Signature: int FUN_004a8980(int param_1,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a8980(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_01d0cfa0;
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e03a0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_005e02c4;
  if (param_1 == iVar1) {
    _DAT_01d0cfa0 = 0;
  }
  iVar1 = FUN_004ad410(param_1 + 0xdc,0);
  iVar1 = FUN_004a83a0(iVar1 + -0xdc,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
