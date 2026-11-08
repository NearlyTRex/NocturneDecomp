// Name: FUN_0049e000
// Address: 0049e000
// Address Range: [[0049e000, 0049e089]]
// Convention: unknown
// Signature: int FUN_0049e000(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049e000(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005ad4c0(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5ff8f4;
  FUN_00468950(iVar2 + 0x158,"elephantgun.kfm");
  *(uint *)(iVar2 + 0x578) = 0x41200000;
  *(uint *)(iVar2 + 0x2d8) = 1;
  *(uint *)(iVar2 + 0x2dc) = 2;
  *(uint *)(iVar2 + 0x2e0) = 1;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x2e8) = 0x41700000;
  uVar1 = _DAT_005ff8ec;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x57c) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
