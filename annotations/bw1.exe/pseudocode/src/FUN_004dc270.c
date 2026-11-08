// Name: FUN_004dc270
// Address: 004dc270
// Address Range: [[004dc270, 004dc361]]
// Convention: unknown
// Signature: int FUN_004dc270(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004dc270(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_00601014;
  FUN_00569f50(iVar3 + 0x158,"gargoyle.dfm");
  *(uint *)(iVar3 + 0x2fec) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2ff0) = 0x3f19999a;
  *(uint *)(iVar3 + 0x27a0) = 2;
  *(uint *)(iVar3 + 0x2538) = 0x41f00000;
  *(uint *)(iVar3 + 0x108) = 0xffff;
  *(uint *)(iVar3 + 0x10c) = 0xffff;
  *(uint *)(iVar3 + 0x110) = 0xffff;
  *(uint *)(iVar3 + 0xc2b0) = 0xffff;
  *(uint *)(iVar3 + 0xc2b4) = 0xffff;
  *(uint *)(iVar3 + 0xc2b8) = 0xffff;
  *(uint *)(iVar3 + 0xc298) = 0x80;
  *(uint *)(iVar3 + 0xc29c) = 0x80;
  *(uint *)(iVar3 + 0xc2a0) = 0x80;
  *(uint *)(iVar3 + 0xc2a4) = 0;
  uVar1 = _DAT_00601000;
  *(uint *)(iVar3 + 0xc2bc) = 0;
  uVar2 = _DAT_00601004;
  *(uint *)(iVar3 + 0xc2c0) = 0;
  *(uint *)(iVar3 + 0x27c0) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
