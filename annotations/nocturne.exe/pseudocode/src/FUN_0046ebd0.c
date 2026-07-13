// Name: FUN_0046ebd0
// Address: 0046ebd0
// Address Range: [[0046ebd0, 0046ec79]]
// Convention: unknown
// Signature: int FUN_0046ebd0(undefined4 param_1)

#include "nocturne.h"

int FUN_0046ebd0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00553d90(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_0059c924;
  FUN_00454580(iVar1 + 0x150,"dynamitestick.kfm");
  *(uint *)(iVar1 + 0x55c) = 0x3f800000;
  *(uint *)(iVar1 + 0x57c) = 0;
  *(uint *)(iVar1 + 0x578) = *(uint *)(iVar1 + 0x57c);
  *(uint *)(iVar1 + 0x574) = *(uint *)(iVar1 + 0x578);
  *(uint *)(iVar1 + 0x570) = 0xbf800000;
  *(uint *)(iVar1 + 0x2d0) = 0;
  *(uint *)(iVar1 + 0x2d4) = 0;
  *(uint *)(iVar1 + 0x2d8) = 3;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 0x43480000;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0;
  *(uint *)(iVar1 + 0x580) = 0;
  return iVar1;
}
