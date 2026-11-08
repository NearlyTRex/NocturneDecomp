// Name: FUN_00596660
// Address: 00596660
// Address Range: [[00596660, 0059672b]]
// Convention: unknown
// Signature: int FUN_00596660(undefined4 param_1)

#include "nocturne.h"

int FUN_00596660(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00488fd0(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e76d4;
  FUN_0054eae0(iVar1 + 0x158,0x5d948f);
  *(uint *)(iVar1 + 0x326c) = 0x3f000000;
  *(uint *)(iVar1 + 0x3270) = 0x3f800000;
  *(uint *)(iVar1 + 0xd054) = 0;
  *(uint *)(iVar1 + 0xcde0) = 0xbf800000;
  *(uint *)(iVar1 + 0xd050) = 0;
  *(uint *)(iVar1 + 0x252c) = 0x3fc90fdb;
  *(uint *)(iVar1 + 0xd068) = 1;
  *(uint *)(iVar1 + 0xd06c) = 0x40000000;
  *(uint *)(iVar1 + 0xd070) = 0x4b;
  *(uint *)(iVar1 + 0xce60) = 0x41c80000;
  *(uint *)(iVar1 + 0xd07c) = 0;
  *(uint *)(iVar1 + 0xd080) = 0;
  *(uint *)(iVar1 + 0xd064) = *(uint *)(iVar1 + 0xd06c);
  iVar3 = iVar1;
  do {
    iVar2 = iVar3 + 4;
    *(uint *)(iVar3 + 0xd084) = 0;
    iVar3 = iVar2;
  } while (iVar2 != iVar1 + 0x34);
  return iVar1;
}
