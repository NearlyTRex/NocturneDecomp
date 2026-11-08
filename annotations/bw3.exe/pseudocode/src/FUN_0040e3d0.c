// Name: FUN_0040e3d0
// Address: 0040e3d0
// Address Range: [[0040e3d0, 0040e411]]
// Convention: unknown
// Signature: int FUN_0040e3d0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040e3d0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040de60(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005db3d4;
  FUN_004625f0(iVar1 + 0x158,"?ammopouch.kfm" + 1);
  *(uint *)(iVar1 + 0x318) = 0xb;
  *(uint *)(iVar1 + 0x314) = 0x14;
  return iVar1;
}
