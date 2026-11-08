// Name: FUN_004ae7e0
// Address: 004ae7e0
// Address Range: [[004ae7e0, 004ae849]]
// Convention: unknown
// Signature: int FUN_004ae7e0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ae7e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e0564;
  FUN_004625f0(iVar1 + 0x158,"flintlock.kfm");
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 1;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x574) = 0;
  *(uint *)(iVar1 + 0x56c) = 0xb;
  return iVar1;
}
