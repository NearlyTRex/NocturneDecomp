// Name: FUN_0041d950
// Address: 0041d950
// Address Range: [[0041d950, 0041d9bf]]
// Convention: unknown
// Signature: int FUN_0041d950(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041d950(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f3c94;
  FUN_005478b0(iVar3 + 0x2b4,"bride.dfm");
  *(uint *)(iVar3 + 0x3430) = 0x3f400000;
  uVar1 = _DAT_005f3c80;
  *(uint *)(iVar3 + 0x3434) = 0x3fc00000;
  uVar2 = _DAT_005f3c84;
  *(uint *)(iVar3 + 0x10b1c) = 0;
  *(uint *)(iVar3 + 0x259c) = 0x3fc90fdb;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
