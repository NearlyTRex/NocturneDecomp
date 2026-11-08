// Name: FUN_00414410
// Address: 00414410
// Address Range: [[00414410, 00414467]]
// Convention: unknown
// Signature: int FUN_00414410(undefined4 param_1)

#include "nocturne.h"

int FUN_00414410(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5fc314;
  FUN_00468950(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0x41f00000;
  return iVar1 + -0x158;
}
