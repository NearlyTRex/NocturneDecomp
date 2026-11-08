// Name: FUN_0047b080
// Address: 0047b080
// Address Range: [[0047b080, 0047b129]]
// Convention: unknown
// Signature: int FUN_0047b080(undefined4 param_1)

#include "nocturne.h"

int FUN_0047b080(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5deed4;
  FUN_004625f0(iVar1 + 0x158,"dynamitestick.kfm");
  *(uint *)(iVar1 + 0x564) = 0x3f800000;
  *(uint *)(iVar1 + 0x5a0) = 0;
  *(uint *)(iVar1 + 0x59c) = *(uint *)(iVar1 + 0x5a0);
  *(uint *)(iVar1 + 0x598) = *(uint *)(iVar1 + 0x59c);
  *(uint *)(iVar1 + 0x594) = 0xbf800000;
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 3;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0x43480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  *(uint *)(iVar1 + 0x2f0) = 0;
  *(uint *)(iVar1 + 0x5a4) = 0;
  return iVar1;
}
