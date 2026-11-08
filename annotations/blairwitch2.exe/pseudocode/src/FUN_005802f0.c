// Name: FUN_005802f0
// Address: 005802f0
// Address Range: [[005802f0, 00580449]]
// Convention: unknown
// Signature: int FUN_005802f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005802f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = FUN_00487db0(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x10afc);
  *(uint *)(iVar1 + -0x1084c) = 0x5fd694;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  uVar2 = FUN_0040cf60(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x17c) = uVar2;
  FUN_0044fd70(iVar1,0x5ed83b);
  *(uint *)(iVar1 + 0x194) = 0x40a00000;
  *(uint *)(iVar1 + 400) = 0x41700000;
  fVar3 = (float)FUN_0040cf60(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x19c) = fVar3 * _DAT_005ed844;
  fVar3 = (float)FUN_0040cf60(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x198) = fVar3 * _DAT_005ed848;
  uVar2 = FUN_0040cf60(0,0x3f800000);
  *(uint *)(iVar1 + 0x1a4) = 0;
  *(uint *)(iVar1 + 0x1a8) = 0;
  *(uint *)(iVar1 + 0x1b8) = 0;
  *(uint *)(iVar1 + -0xe2d0) = 0;
  *(uint *)(iVar1 + 0x230) = 0;
  *(byte *)(iVar1 + 0x1bc) = 0;
  *(uint *)(iVar1 + 0x220) = 0x41700000;
  *(uint *)(iVar1 + 0x224) = 0x41f00000;
  *(uint *)(iVar1 + 0x22c) = 0;
  *(uint *)(iVar1 + 0x1a0) = uVar2;
  return iVar1 + -0x10afc;
}
