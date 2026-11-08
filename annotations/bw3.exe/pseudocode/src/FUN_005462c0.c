// Name: FUN_005462c0
// Address: 005462c0
// Address Range: [[005462c0, 0054635a]]
// Convention: unknown
// Signature: int FUN_005462c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005462c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_00488fd0(param_1);
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_005e4364;
  FUN_0054eae0(iVar4 + 0x158,"shadowscorp.dfm");
  uVar2 = _DAT_005e4354;
  uVar1 = _DAT_005e4350;
  *(uint *)(iVar4 + 0x326c) = 0x3f400000;
  *(uint *)(iVar4 + 0x3270) = 0x3fc00000;
  uVar3 = 0x01C6E360;
  *(uint *)(iVar4 + 0xd064) = 0;
  *(uint *)(iVar4 + 0x3274) = uVar1;
  *(uint *)(iVar4 + 0x3278) = uVar2;
  iVar5 = FUN_00491aa0(uVar3,"COMBATMODEHARD");
  if (iVar5 != 0) {
    *(uint *)(iVar4 + 0xd068) = 0x3f800000;
    return iVar4;
  }
  *(uint *)(iVar4 + 0xd068) = 0x3f400000;
  return iVar4;
}
