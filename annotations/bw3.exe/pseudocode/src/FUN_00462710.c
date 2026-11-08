// Name: FUN_00462710
// Address: 00462710
// Address Range: [[00462710, 0046277f]]
// Convention: unknown
// Signature: int FUN_00462710(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00462710(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005de5d4;
  FUN_0054eae0(iVar3 + 0x158,"blackdog.dfm");
  *(uint *)(iVar3 + 0x326c) = 0x3f400000;
  uVar1 = _DAT_005de5bc;
  *(uint *)(iVar3 + 0x3270) = 0x3fc00000;
  uVar2 = _DAT_005de5c0;
  *(uint *)(iVar3 + 0xd05c) = 0;
  *(uint *)(iVar3 + 0xd060) = 0;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
