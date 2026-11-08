// Name: FUN_00568e00
// Address: 00568e00
// Address Range: [[00568e00, 00568e3f]]
// Convention: unknown
// Signature: void FUN_00568e00(undefined4 param_1)

#include "nocturne.h"

void FUN_00568e00(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e5234;
  *(uint *)(iVar1 + 0x158) = 0x40a00000;
  *(uint *)(iVar1 + 0x15c) = 0x41100000;
  *(uint *)(iVar1 + 0x160) = 0x40a00000;
  *(uint *)(iVar1 + 0x164) = 0;
  return;
}
