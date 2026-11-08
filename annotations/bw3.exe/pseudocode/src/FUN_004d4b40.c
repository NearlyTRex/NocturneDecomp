// Name: FUN_004d4b40
// Address: 004d4b40
// Address Range: [[004d4b40, 004d4b97]]
// Convention: unknown
// Signature: int FUN_004d4b40(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004d4b40(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e1780);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005e16a4;
  iVar1 = FUN_00408770(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
