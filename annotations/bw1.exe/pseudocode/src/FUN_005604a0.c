// Name: FUN_005604a0
// Address: 005604a0
// Address Range: [[005604a0, 0056050f]]
// Convention: unknown
// Signature: int FUN_005604a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005604a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_00605354;
  FUN_00569f50(iVar3 + 0x158,"shadowscorp.dfm");
  *(uint *)(iVar3 + 0x2fec) = 0x3fe00000;
  uVar1 = _DAT_00605340;
  *(uint *)(iVar3 + 0x2ff0) = 0x40600000;
  uVar2 = _DAT_00605344;
  *(uint *)(iVar3 + 0xc27c) = 0;
  *(uint *)(iVar3 + 0xc284) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
