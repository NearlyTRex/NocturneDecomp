// Name: FUN_0057fe10
// Address: 0057fe10
// Address Range: [[0057fe10, 0057fe70]]
// Convention: unknown
// Signature: int FUN_0057fe10(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0057fe10(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e6550);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x6a44) = &PTR_FUN_005e6534;
  FUN_00580300(param_1);
  iVar1 = FUN_00509bb0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
