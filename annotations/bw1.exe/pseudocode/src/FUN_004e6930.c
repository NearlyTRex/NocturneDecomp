// Name: FUN_004e6930
// Address: 004e6930
// Address Range: [[004e6930, 004e69b3]]
// Convention: unknown
// Signature: int FUN_004e6930(undefined4 param_1)

#include "nocturne.h"

int FUN_004e6930(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x6017b4;
  FUN_00468950(iVar1,0x5e4192);
  *(uint *)(iVar1 + 0x17c) = 0;
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x18c) = 1;
  *(byte *)(iVar1 + 400) = 0;
  *(byte *)(iVar1 + 500) = 0;
  return iVar1 + -0x158;
}
