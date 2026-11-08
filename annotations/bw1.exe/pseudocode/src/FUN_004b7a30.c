// Name: FUN_004b7a30
// Address: 004b7a30
// Address Range: [[004b7a30, 004b7b1e]]
// Convention: unknown
// Signature: int FUN_004b7a30(undefined4 param_1)

#include "nocturne.h"

int FUN_004b7a30(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004085c0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x6003a4;
  *(uint *)(iVar1 + 0x158) = 0x3f800000;
  *(uint *)(iVar1 + 0x15c) = 0x40000000;
  *(uint *)(iVar1 + 0x160) = 0x3f800000;
  uVar2 = FUN_0040cc00(0,0x41000000);
  *(uint *)(iVar1 + 0x1a8) = 0;
  *(uint *)(iVar1 + 0x1ac) = 0x3f800000;
  *(uint *)(iVar1 + 0x290) = 1;
  *(uint *)(iVar1 + 0x1b0) = 0;
  *(byte *)(iVar1 + 0x1b8) = 0;
  *(byte *)(iVar1 + 0x21c) = 0;
  *(uint *)(iVar1 + 0x1b4) = 1;
  *(uint *)(iVar1 + 0xfc) = 1;
  *(uint *)(iVar1 + 0x284) = 0x3d4ccccd;
  *(uint *)(iVar1 + 0x280) = 0x3f000000;
  *(uint *)(iVar1 + 0x298) = 1;
  *(uint *)(iVar1 + 0x288) = 0;
  *(uint *)(iVar1 + 0x28c) = 0;
  *(uint *)(iVar1 + 0x29c) = 0;
  *(uint *)(iVar1 + 0x2a0) = 0;
  *(uint *)(iVar1 + 0x164) = uVar2;
  return iVar1;
}
