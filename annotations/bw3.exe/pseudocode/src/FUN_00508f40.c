// Name: FUN_00508f40
// Address: 00508f40
// Address Range: [[00508f40, 00509017]]
// Convention: unknown
// Signature: int FUN_00508f40(undefined4 param_1)

#include "nocturne.h"

int FUN_00508f40(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0042ac20(param_1);
  iVar1 = FUN_0050acc0(iVar1 + 0xcdcc);
  *(byte ***)(iVar1 + -0xcc78) = &PTR_FUN_005e2df4;
  *(uint *)(iVar1 + -0x9b60) = 0x3f19999a;
  *(uint *)(iVar1 + -0x9b5c) = 0x3f666666;
  *(uint *)(iVar1 + -0x9b50) = 0x3fcccccd;
  *(uint *)(iVar1 + -0x9b4c) = 0xc479c000;
  uVar2 = FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x138e4) = uVar2;
  FUN_0054eae0(iVar1 + -0xcc74,"nocchar.dfm");
  *(uint *)(iVar1 + -0xa60c) = 0;
  *(uint *)(iVar1 + 0x138dc) = 0;
  *(uint *)(iVar1 + 0x138e0) = 0;
  *(uint *)(iVar1 + 0x138e8) = 0x10000;
  *(uint *)(iVar1 + 0x138f0) = 100;
  *(uint *)(iVar1 + 0x138f8) = 0x40000000;
  *(uint *)(iVar1 + 0x138ec) = 0xffffffff;
  return iVar1 + -0xcdcc;
}
