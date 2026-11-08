// Name: FUN_004d1960
// Address: 004d1960
// Address Range: [[004d1960, 004d1a05]]
// Convention: unknown
// Signature: int FUN_004d1960(undefined4 param_1)

#include "nocturne.h"

int FUN_004d1960(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e11d4;
  FUN_004625f0(iVar1 + 0x158,"heal_stick.KFM");
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 0xe;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  *(uint *)(iVar1 + 0x56c) = 10;
  *(uint *)(iVar1 + 0x58c) = 0xf;
  *(uint *)(iVar1 + 0x574) = 3;
  *(uint *)(iVar1 + 0x57c) = 0;
  *(uint *)(iVar1 + 0x594) = 0;
  *(uint *)(iVar1 + 0x598) = 0;
  return iVar1;
}
