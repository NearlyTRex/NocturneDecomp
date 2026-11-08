// Name: FUN_004c4de0
// Address: 004c4de0
// Address Range: [[004c4de0, 004c4ed1]]
// Convention: unknown
// Signature: int FUN_004c4de0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c4de0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e0784;
  FUN_0054eae0(iVar3 + 0x158,"gargoyle.dfm");
  *(uint *)(iVar3 + 0x326c) = 0x3f19999a;
  *(uint *)(iVar3 + 0x3270) = 0x3f19999a;
  *(uint *)(iVar3 + 0x27a0) = 2;
  *(uint *)(iVar3 + 0x2538) = 0x41f00000;
  *(uint *)(iVar3 + 0x108) = 0xffff;
  *(uint *)(iVar3 + 0x10c) = 0xffff;
  *(uint *)(iVar3 + 0x110) = 0xffff;
  *(uint *)(iVar3 + 0xd09c) = 0xffff;
  *(uint *)(iVar3 + 0xd0a0) = 0xffff;
  *(uint *)(iVar3 + 0xd0a4) = 0xffff;
  *(uint *)(iVar3 + 0xd084) = 0x80;
  *(uint *)(iVar3 + 0xd088) = 0x80;
  *(uint *)(iVar3 + 0xd08c) = 0x80;
  *(uint *)(iVar3 + 0xd090) = 0;
  uVar1 = _DAT_005e0770;
  *(uint *)(iVar3 + 0xd0a8) = 0;
  uVar2 = _DAT_005e0774;
  *(uint *)(iVar3 + 0xd0ac) = 0;
  *(uint *)(iVar3 + 0x27c0) = 0;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
