// Name: FUN_0049f180
// Address: 0049f180
// Address Range: [[0049f180, 0049f26e]]
// Convention: unknown
// Signature: int FUN_0049f180(undefined4 param_1)

#include "nocturne.h"

int FUN_0049f180(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00408790(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f6914;
  *(uint *)(iVar1 + 0x2b4) = 0x3f800000;
  *(uint *)(iVar1 + 0x2b8) = 0x40000000;
  *(uint *)(iVar1 + 700) = 0x3f800000;
  uVar2 = FUN_0040cf60(0,0x41000000);
  *(uint *)(iVar1 + 0x304) = 0;
  *(uint *)(iVar1 + 0x308) = 0x3f800000;
  *(uint *)(iVar1 + 0x3ec) = 1;
  *(uint *)(iVar1 + 0x30c) = 0;
  *(byte *)(iVar1 + 0x314) = 0;
  *(byte *)(iVar1 + 0x378) = 0;
  *(uint *)(iVar1 + 0x310) = 1;
  *(uint *)(iVar1 + 0xfc) = 1;
  *(uint *)(iVar1 + 0x3e0) = 0x3d4ccccd;
  *(uint *)(iVar1 + 0x3dc) = 0x3f000000;
  *(uint *)(iVar1 + 0x3f4) = 1;
  *(uint *)(iVar1 + 0x3e4) = 0;
  *(uint *)(iVar1 + 1000) = 0;
  *(uint *)(iVar1 + 0x3f8) = 0;
  *(uint *)(iVar1 + 0x3fc) = 0;
  *(uint *)(iVar1 + 0x2c0) = uVar2;
  return iVar1;
}
