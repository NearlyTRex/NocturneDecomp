// Name: FUN_0048a310
// Address: 0048a310
// Address Range: [[0048a310, 0048a41b]]
// Convention: unknown
// Signature: int FUN_0048a310(undefined4 param_1)

#include "nocturne.h"

int FUN_0048a310(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5df4d4;
  FUN_004625f0(iVar1 + 0x158,"exo_bible.kfm");
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  *(uint *)(iVar1 + 0x56c) = 10;
  *(uint *)(iVar1 + 0x58c) = 1;
  *(uint *)(iVar1 + 0x574) = 2;
  *(uint *)(iVar1 + 0x594) = 0;
  *(uint *)(iVar1 + 0x598) = 0;
  *(uint *)(iVar1 + 0x59c) = 0;
  *(uint *)(iVar1 + 0x5a4) = 0;
  *(uint *)(iVar1 + 0x5e8) = 0x8000;
  *(byte *)(iVar1 + 0x5c8) = 0x20;
  FUN_0045ab30(iVar1 + 0x5ac,0x41000000);
  *(uint *)(iVar1 + 0x5cc) = 1;
  *(uint *)(iVar1 + 0x628) = 0x8000;
  *(byte *)(iVar1 + 0x608) = 0x20;
  FUN_0045ab30(iVar1 + 0x5ec,0x41000000);
  *(uint *)(iVar1 + 0x60c) = 1;
  *(uint *)(iVar1 + 0x57c) = 0;
  *(uint *)(iVar1 + 0x5a8) = 0;
  return iVar1;
}
