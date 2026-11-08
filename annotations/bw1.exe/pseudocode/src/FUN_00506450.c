// Name: FUN_00506450
// Address: 00506450
// Address Range: [[00506450, 0050649d]]
// Convention: unknown
// Signature: int FUN_00506450(undefined4 param_1)

#include "nocturne.h"

int FUN_00506450(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x603534;
  FUN_00468950(iVar1,"mirrhack.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x158;
}
