// Name: FUN_00594f20
// Address: 00594f20
// Address Range: [[00594f20, 00594f5f]]
// Convention: unknown
// Signature: void FUN_00594f20(undefined4 param_1)

#include "nocturne.h"

void FUN_00594f20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x6069a4;
  *(uint *)(iVar1 + 0x158) = 0x40a00000;
  *(uint *)(iVar1 + 0x15c) = 0x41100000;
  *(uint *)(iVar1 + 0x160) = 0x40a00000;
  *(uint *)(iVar1 + 0x164) = 0;
  return;
}
