// Name: FUN_00568ab0
// Address: 00568ab0
// Address Range: [[00568ab0, 00568b41]]
// Convention: unknown
// Signature: int FUN_00568ab0(undefined4 param_1)

#include "nocturne.h"

int FUN_00568ab0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e5014;
  FUN_004625f0(iVar1 + 0x158,"rainvial.kfm");
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 0xd;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x56c) = 10;
  *(uint *)(iVar1 + 0x58c) = 0x23;
  *(uint *)(iVar1 + 0x574) = 3;
  *(uint *)(iVar1 + 0x57c) = 0;
  *(uint *)(iVar1 + 0x578) = 2;
  return iVar1;
}
