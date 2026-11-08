// Name: FUN_004d50d0
// Address: 004d50d0
// Address Range: [[004d50d0, 004d516b]]
// Convention: unknown
// Signature: int FUN_004d50d0(undefined4 param_1)

#include "nocturne.h"

int FUN_004d50d0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e17c4;
  FUN_004625f0(iVar1 + 0x158,"holycross.kfm");
  *(uint *)(iVar1 + 0x2e0) = 7;
  *(uint *)(iVar1 + 0x56c) = 0xffffffff;
  *(uint *)(iVar1 + 0x568) = 0;
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0x40a00000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  *(uint *)(iVar1 + 0x57c) = 0;
  *(uint *)(iVar1 + 0x574) = 1;
  *(uint *)(iVar1 + 0x578) = 2;
  return iVar1;
}
