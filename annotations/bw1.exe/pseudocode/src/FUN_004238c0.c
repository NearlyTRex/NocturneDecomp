// Name: FUN_004238c0
// Address: 004238c0
// Address Range: [[004238c0, 00423939]]
// Convention: unknown
// Signature: int FUN_004238c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004238c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005fd0a4;
  FUN_00569f50(iVar3 + 0x158,"bride.dfm");
  *(uint *)(iVar3 + 0x2fec) = 0x3f400000;
  *(uint *)(iVar3 + 0x2ff0) = 0x3fc00000;
  uVar1 = _DAT_005fd090;
  *(uint *)(iVar3 + 0xc290) = 0;
  uVar2 = _DAT_005fd094;
  *(uint *)(iVar3 + 0x252c) = 0x3fc90fdb;
  *(uint *)(iVar3 + 0xc28c) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
