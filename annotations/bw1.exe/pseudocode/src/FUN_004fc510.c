// Name: FUN_004fc510
// Address: 004fc510
// Address Range: [[004fc510, 004fc567]]
// Convention: unknown
// Signature: int FUN_004fc510(undefined4 param_1)

#include "nocturne.h"

int FUN_004fc510(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x602ad4;
  FUN_00468950(iVar1,"key1.kfm");
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x158;
}
