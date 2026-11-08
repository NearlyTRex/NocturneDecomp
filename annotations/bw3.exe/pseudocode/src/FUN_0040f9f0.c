// Name: FUN_0040f9f0
// Address: 0040f9f0
// Address Range: [[0040f9f0, 0040fab3]]
// Convention: unknown
// Signature: int FUN_0040f9f0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040f9f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0042ac20(param_1);
  iVar1 = FUN_0050acc0(iVar1 + 0xcdcc);
  *(byte ***)(iVar1 + -0xcc78) = &PTR_FUN_005dbb14;
  *(uint *)(iVar1 + -0x9b60) = 0x3f19999a;
  *(uint *)(iVar1 + -0x9b5c) = 0x3f666666;
  *(uint *)(iVar1 + -0x9b50) = 0x3fcccccd;
  *(uint *)(iVar1 + -0x9b4c) = 0xc479c000;
  uVar2 = FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x138e8) = 0;
  *(uint *)(iVar1 + 0x138ec) = 0;
  *(uint *)(iVar1 + 0x138e4) = uVar2;
  FUN_0054eae0(iVar1 + -0xcc74,0x5b637b);
  *(uint *)(iVar1 + -0xa60c) = 0;
  *(uint *)(iVar1 + 0x138dc) = 0;
  *(uint *)(iVar1 + 0x138e0) = 0;
  return iVar1 + -0xcdcc;
}
