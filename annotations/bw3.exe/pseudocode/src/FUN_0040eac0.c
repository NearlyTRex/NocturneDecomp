// Name: FUN_0040eac0
// Address: 0040eac0
// Address Range: [[0040eac0, 0040eb0a]]
// Convention: unknown
// Signature: void FUN_0040eac0(undefined4 param_1)

#include "nocturne.h"

void FUN_0040eac0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5db674;
  *(uint *)(iVar1 + 0x160) = 0x40a00000;
  *(byte *)(iVar1 + 0x168) = 0;
  *(uint *)(iVar1 + 0x164) = 1;
  *(uint *)(iVar1 + 0x15c) = *(uint *)(iVar1 + 0x160);
  *(uint *)(iVar1 + 0x158) = *(uint *)(iVar1 + 0x15c);
  return;
}
