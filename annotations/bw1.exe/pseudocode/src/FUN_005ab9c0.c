// Name: FUN_005ab9c0
// Address: 005ab9c0
// Address Range: [[005ab9c0, 005ab9ff]]
// Convention: unknown
// Signature: void FUN_005ab9c0(undefined4 param_1)

#include "nocturne.h"

void FUN_005ab9c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059afb0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x607d54;
  *(uint *)(iVar1 + 0x160) = 0x3f000000;
  *(uint *)(iVar1 + 0x164) = 0x3f800000;
  *(uint *)(iVar1 + 0x168) = 0x3f000000;
  *(uint *)(iVar1 + 0x374) = 0;
  return;
}
