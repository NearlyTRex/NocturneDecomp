// Name: FUN_004e3b30
// Address: 004e3b30
// Address Range: [[004e3b30, 004e3b7d]]
// Convention: unknown
// Signature: int FUN_004e3b30(undefined4 param_1)

#include "nocturne.h"

int FUN_004e3b30(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_00601594;
  FUN_00468950(iVar1,"doc-goggles.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x158;
}
