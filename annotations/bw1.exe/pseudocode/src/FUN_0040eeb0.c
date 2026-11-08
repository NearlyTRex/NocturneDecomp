// Name: FUN_0040eeb0
// Address: 0040eeb0
// Address Range: [[0040eeb0, 0040ef11]]
// Convention: unknown
// Signature: int FUN_0040eeb0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040eeb0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x15c);
  *(uint *)(iVar1 + -8) = 0x5fb9a4;
  FUN_00468950(iVar1,"candle.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  *(uint *)(iVar1 + -4) = 1;
  return iVar1 + -0x15c;
}
