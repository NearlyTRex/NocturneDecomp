// Name: FUN_0040f780
// Address: 0040f780
// Address Range: [[0040f780, 0040f83d]]
// Convention: unknown
// Signature: int FUN_0040f780(undefined4 param_1)

#include "nocturne.h"

int FUN_0040f780(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5db9d4;
  FUN_004625f0(iVar1 + 0x158,0x5b6321);
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 3;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  *(uint *)(iVar1 + 0x56c) = 10;
  *(uint *)(iVar1 + 0x58c) = 0x14;
  *(uint *)(iVar1 + 0x574) = 4;
  *(uint *)(iVar1 + 0x59c) = 0;
  *(uint *)(iVar1 + 0x598) = *(uint *)(iVar1 + 0x59c);
  *(uint *)(iVar1 + 0x594) = *(uint *)(iVar1 + 0x598);
  *(uint *)(iVar1 + 0x590) = 1;
  *(uint *)(iVar1 + 0x578) = 2;
  *(uint *)(iVar1 + 0x57c) = 0;
  return iVar1;
}
