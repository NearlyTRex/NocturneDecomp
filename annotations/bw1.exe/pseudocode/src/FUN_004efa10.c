// Name: FUN_004efa10
// Address: 004efa10
// Address Range: [[004efa10, 004efa6b]]
// Convention: unknown
// Signature: int FUN_004efa10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004efa10(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_00602314;
  FUN_00569f50(iVar3 + 0x158,"hotdemon.dfm");
  uVar2 = _DAT_00602304;
  uVar1 = _DAT_00602300;
  *(uint *)(iVar3 + 0x2fec) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2ff0) = 0x3f666666;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
