// Name: FUN_00462ba0
// Address: 00462ba0
// Address Range: [[00462ba0, 00462c8e]]
// Convention: unknown
// Signature: int FUN_00462ba0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00462ba0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f5674;
  FUN_005478b0(iVar3 + 0x2b4,0x5d0e22);
  *(uint *)(iVar3 + 0x3430) = 0x3f000000;
  *(uint *)(iVar3 + 0x3434) = 0x3f800000;
  *(byte *)(iVar3 + 0x10b1c) = 0;
  *(uint *)(iVar3 + 0x25a8) = 0x43070000;
  uVar1 = _DAT_005f5644;
  *(uint *)(iVar3 + 0x10b84) = 0;
  uVar2 = _DAT_005f5648;
  *(uint *)(iVar3 + 0x10b88) = 0;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  *(uint *)(iVar3 + 0x10b9c) = 0;
  *(uint *)(iVar3 + 0x10b98) = *(uint *)(iVar3 + 0x10b9c);
  *(uint *)(iVar3 + 0x10b94) = *(uint *)(iVar3 + 0x10b98);
  *(uint *)(iVar3 + 0x10ba0) = 0;
  *(uint *)(iVar3 + 0x10b80) = 1;
  iVar5 = iVar3;
  do {
    iVar4 = iVar5 + 4;
    *(uint *)(iVar5 + 0x10ba8) = 0;
    iVar5 = iVar4;
  } while (iVar4 != iVar3 + 0x78);
  *(uint *)(iVar3 + 0x10ba4) = 0;
  *(uint *)(iVar3 + 0x10c24) = 0;
  *(uint *)(iVar3 + 0x10b90) = 0;
  *(uint *)(iVar3 + 0x10c20) = 0;
  return iVar3;
}
