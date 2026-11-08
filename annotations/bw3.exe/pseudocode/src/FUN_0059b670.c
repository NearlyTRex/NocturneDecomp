// Name: FUN_0059b670
// Address: 0059b670
// Address Range: [[0059b670, 0059b735]]
// Convention: unknown
// Signature: int FUN_0059b670(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0059b670(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e81c4;
  FUN_0054eae0(iVar3 + 0x158,0x5d9bca);
  *(uint *)(iVar3 + 0x326c) = 0x3f19999a;
  *(uint *)(iVar3 + 0x3270) = 0x3f666666;
  *(uint *)(iVar3 + 0x2538) = 0x42b40000;
  *(uint *)(iVar3 + 0xd060) = 0x40000000;
  *(uint *)(iVar3 + 0xd064) = 0;
  *(uint *)(iVar3 + 0xd068) = 0;
  *(uint *)(iVar3 + 0xd05c) = 0x10000;
  uVar1 = _DAT_005e81b0;
  *(uint *)(iVar3 + 0xd06c) = 0;
  uVar2 = _DAT_005e81b4;
  *(uint *)(iVar3 + 0xd070) = 0;
  *(uint *)(iVar3 + 0xd074) = 0;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  iVar5 = iVar3;
  do {
    iVar4 = iVar5 + 4;
    *(uint *)(iVar5 + 0xd07c) = 0;
    iVar5 = iVar4;
  } while (iVar4 != iVar3 + 0x34);
  return iVar3;
}
