// Name: FUN_004b9910
// Address: 004b9910
// Address Range: [[004b9910, 004b998f]]
// Convention: unknown
// Signature: int FUN_004b9910(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b9910(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005ad4c0(param_1);
  *(uint *)(iVar2 + 0x154) = 0x600714;
  FUN_00468950(iVar2 + 0x158,"flashlit.kfm");
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 5;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  uVar1 = _DAT_0060070c;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x568) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
