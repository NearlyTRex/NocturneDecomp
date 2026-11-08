// Name: FUN_004e0f70
// Address: 004e0f70
// Address Range: [[004e0f70, 004e106b]]
// Convention: unknown
// Signature: int FUN_004e0f70(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e0f70(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0057ad70(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5e24f4;
  FUN_004625f0(iVar2 + 0x158,0x5c69c6);
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 0xc;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0x42000000;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x56c) = 10;
  *(uint *)(iVar2 + 0x58c) = 10;
  *(uint *)(iVar2 + 0x574) = 1;
  *(uint *)(iVar2 + 0x594) = 0;
  *(uint *)(iVar2 + 0x57c) = 0;
  *(uint *)(iVar2 + 0x578) = 2;
  *(uint *)(iVar2 + 0x5bc) = 0x3dcccccd;
  uVar1 = _DAT_005e24ec;
  *(uint *)(iVar2 + 0x5c0) = 0;
  *(uint *)(iVar2 + 0x5c4) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  *(uint *)(iVar2 + 0x604) = 0x8000;
  *(byte *)(iVar2 + 0x5e4) = 0x20;
  FUN_0045ab30(iVar2 + 0x5c8,0x41000000);
  *(uint *)(iVar2 + 0x5e8) = 1;
  return iVar2;
}
