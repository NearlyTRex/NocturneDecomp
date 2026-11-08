// Name: FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 0041474b]]
// Convention: unknown
// Signature: int FUN_004146f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004146f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005fc434;
  FUN_00569f50(iVar3 + 0x158,"beast.dfm");
  uVar2 = _DAT_005fc42c;
  uVar1 = _DAT_005fc428;
  *(uint *)(iVar3 + 0x2fec) = 0x41200000;
  *(uint *)(iVar3 + 0x2ff0) = 0x41200000;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
