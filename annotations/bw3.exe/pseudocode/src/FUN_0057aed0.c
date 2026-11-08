// Name: FUN_0057aed0
// Address: 0057aed0
// Address Range: [[0057aed0, 0057af3e]]
// Convention: unknown
// Signature: int FUN_0057aed0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0057aed0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e6340);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005e6244;
  iVar1 = FUN_0041adf0(param_1 + 0x308,0);
  iVar1 = FUN_00408770(iVar1 + -0x308,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
