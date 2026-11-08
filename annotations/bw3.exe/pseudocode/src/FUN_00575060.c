// Name: FUN_00575060
// Address: 00575060
// Address Range: [[00575060, 005751b9]]
// Convention: unknown
// Signature: int FUN_00575060(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00575060(uint param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = FUN_00488fd0(param_1);
  iVar1 = FUN_00462500(iVar1 + 0xd058);
  *(byte ***)(iVar1 + -0xcf04) = &PTR_FUN_005e5bd4;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  uVar2 = FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x17c) = uVar2;
  FUN_004625f0(iVar1,0x5d6f1e);
  *(uint *)(iVar1 + 0x194) = 0x40a00000;
  *(uint *)(iVar1 + 400) = 0x41700000;
  fVar3 = (float)FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x19c) = fVar3 * _DAT_005d6f27;
  fVar3 = (float)FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x198) = fVar3 * _DAT_005d6f2b;
  uVar2 = FUN_0040ce40(0,0x3f800000);
  *(uint *)(iVar1 + 0x1a4) = 0;
  *(uint *)(iVar1 + 0x1a8) = 0;
  *(uint *)(iVar1 + 0x1b8) = 0;
  *(uint *)(iVar1 + -0xa898) = 0;
  *(uint *)(iVar1 + 0x230) = 0;
  *(byte *)(iVar1 + 0x1bc) = 0;
  *(uint *)(iVar1 + 0x220) = 0x41700000;
  *(uint *)(iVar1 + 0x224) = 0x41f00000;
  *(uint *)(iVar1 + 0x22c) = 0;
  *(uint *)(iVar1 + 0x1a0) = uVar2;
  return iVar1 + -0xd058;
}
