// Name: FUN_004a8510
// Address: 004a8510
// Address Range: [[004a8510, 004a8564]]
// Convention: unknown
// Signature: int FUN_004a8510(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004a8510(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e0340);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_005e0294;
  iVar1 = FUN_004a83a0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
