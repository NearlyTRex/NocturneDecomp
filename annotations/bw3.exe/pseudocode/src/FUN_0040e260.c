// Name: FUN_0040e260
// Address: 0040e260
// Address Range: [[0040e260, 0040e2a1]]
// Convention: unknown
// Signature: int FUN_0040e260(undefined4 param_1)

#include "nocturne.h"

int FUN_0040e260(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040de60(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005db2f4;
  FUN_004625f0(iVar1 + 0x158,"mana_lg.kfm");
  *(uint *)(iVar1 + 0x318) = 10;
  *(uint *)(iVar1 + 0x314) = 0x32;
  return iVar1;
}
