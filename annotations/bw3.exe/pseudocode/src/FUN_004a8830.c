// Name: FUN_004a8830
// Address: 004a8830
// Address Range: [[004a8830, 004a8884]]
// Convention: unknown
// Signature: int FUN_004a8830(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004a8830(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e0380);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_005e02b4;
  iVar1 = FUN_004a8710(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
