// Name: FUN_004bfae0
// Address: 004bfae0
// Address Range: [[004bfae0, 004bfbd1]]
// Convention: unknown
// Signature: int FUN_004bfae0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004bfae0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f75f4;
  FUN_005478b0(iVar3 + 0x2b4,"gargoyle.dfm");
  *(uint *)(iVar3 + 0x3430) = 0x3f19999a;
  *(uint *)(iVar3 + 0x3434) = 0x3f19999a;
  *(uint *)(iVar3 + 0x280c) = 2;
  *(uint *)(iVar3 + 0x25a8) = 0x41f00000;
  *(uint *)(iVar3 + 0x108) = 0xffff;
  *(uint *)(iVar3 + 0x10c) = 0xffff;
  *(uint *)(iVar3 + 0x110) = 0xffff;
  *(uint *)(iVar3 + 0x10b40) = 0xffff;
  *(uint *)(iVar3 + 0x10b44) = 0xffff;
  *(uint *)(iVar3 + 0x10b48) = 0xffff;
  *(uint *)(iVar3 + 0x10b28) = 0x80;
  *(uint *)(iVar3 + 0x10b2c) = 0x80;
  *(uint *)(iVar3 + 0x10b30) = 0x80;
  *(uint *)(iVar3 + 0x10b34) = 0;
  uVar1 = _DAT_005f75e0;
  *(uint *)(iVar3 + 0x10b4c) = 0;
  uVar2 = _DAT_005f75e4;
  *(uint *)(iVar3 + 0x10b50) = 0;
  *(uint *)(iVar3 + 0x282c) = 0;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
