// Name: FUN_00410830
// Address: 00410830
// Address Range: [[00410830, 0041087a]]
// Convention: unknown
// Signature: void FUN_00410830(undefined4 param_1)

#include "nocturne.h"

void FUN_00410830(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5fbd94;
  *(uint *)(iVar1 + 0x160) = 0x40a00000;
  *(byte *)(iVar1 + 0x168) = 0;
  *(uint *)(iVar1 + 0x164) = 1;
  *(uint *)(iVar1 + 0x15c) = *(uint *)(iVar1 + 0x160);
  *(uint *)(iVar1 + 0x158) = *(uint *)(iVar1 + 0x15c);
  return;
}
