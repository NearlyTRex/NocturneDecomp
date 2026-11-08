// Name: FUN_00510460
// Address: 00510460
// Address Range: [[00510460, 0051050f]]
// Convention: unknown
// Signature: int FUN_00510460(undefined4 param_1)

#include "nocturne.h"

int FUN_00510460(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00422340(param_1);
  iVar1 = FUN_00511c90(iVar1 + 0x10a60);
  *(uint *)(iVar1 + -0x107b0) = 0x5fa754;
  *(uint *)(iVar1 + -0xd630) = 0x3f19999a;
  *(uint *)(iVar1 + -0xd62c) = 0x3f666666;
  *(uint *)(iVar1 + -0xd620) = 0x3fcccccd;
  *(uint *)(iVar1 + -0xd61c) = 0xc479c000;
  uVar2 = FUN_0040cf60(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x138e4) = uVar2;
  FUN_005478b0(iVar1 + -0x107ac,"nocchar.dfm");
  *(uint *)(iVar1 + -0xe234) = 0;
  *(uint *)(iVar1 + 0x138dc) = 0;
  *(uint *)(iVar1 + 0x138e0) = 0;
  return iVar1 + -0x10a60;
}
