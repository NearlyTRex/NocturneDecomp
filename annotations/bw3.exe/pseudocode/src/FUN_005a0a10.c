// Name: FUN_005a0a10
// Address: 005a0a10
// Address Range: [[005a0a10, 005a0af1]]
// Convention: unknown
// Signature: int FUN_005a0a10(undefined4 param_1)

#include "nocturne.h"

int FUN_005a0a10(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00508f40(param_1);
  iVar1 = FUN_0050acc0(iVar1 + 0x206c8);
  *(byte ***)(iVar1 + -0x20574) = &PTR_FUN_005e8684;
  *(uint *)(iVar1 + -0x1d45c) = 0x3f19999a;
  *(uint *)(iVar1 + -0x1d458) = 0x3f666666;
  *(uint *)(iVar1 + -0x1d44c) = 0x3fcccccd;
  *(uint *)(iVar1 + -0x1d448) = 0xc479c000;
  uVar2 = FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x138e4) = uVar2;
  FUN_0054eae0(iVar1 + -0x20570,"bwp3_shaman.dfm");
  *(uint *)(iVar1 + -0x1df08) = 0;
  *(uint *)(iVar1 + 0x138dc) = 0;
  *(uint *)(iVar1 + 0x138e0) = 0;
  *(uint *)(iVar1 + 0x138ec) = 0;
  *(uint *)(iVar1 + 0x13904) = 0xffff;
  *(uint *)(iVar1 + -0xc) = 100;
  *(uint *)(iVar1 + -4) = 0x40000000;
  *(uint *)(iVar1 + 0x138fc) = 0xffffffff;
  return iVar1 + -0x206c8;
}
