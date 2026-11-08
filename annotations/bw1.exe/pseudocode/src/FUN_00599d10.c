// Name: FUN_00599d10
// Address: 00599d10
// Address Range: [[00599d10, 00599d5d]]
// Convention: unknown
// Signature: int FUN_00599d10(undefined4 param_1)

#include "nocturne.h"

int FUN_00599d10(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x606f94;
  FUN_00468950(iVar1,"beartrap.kfm");
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x158;
}
