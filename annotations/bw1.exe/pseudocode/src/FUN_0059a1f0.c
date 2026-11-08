// Name: FUN_0059a1f0
// Address: 0059a1f0
// Address Range: [[0059a1f0, 0059a233]]
// Convention: unknown
// Signature: int FUN_0059a1f0(undefined4 param_1)

#include "nocturne.h"

int FUN_0059a1f0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x6070b4;
  FUN_00468950(iVar1,"question.kfm");
  return iVar1 + -0x158;
}
