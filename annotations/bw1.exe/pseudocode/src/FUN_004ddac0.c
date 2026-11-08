// Name: FUN_004ddac0
// Address: 004ddac0
// Address Range: [[004ddac0, 004ddb0d]]
// Convention: unknown
// Signature: int FUN_004ddac0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ddac0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_006011a4;
  FUN_00468950(iVar1,"gasmask.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x158;
}
