// Name: FUN_005615c0
// Address: 005615c0
// Address Range: [[005615c0, 00561649]]
// Convention: unknown
// Signature: int FUN_005615c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005615c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005ad4c0(param_1);
  *(uint *)(iVar2 + 0x154) = 0x6054e4;
  FUN_00468950(iVar2 + 0x158,0x5f1998);
  *(uint *)(iVar2 + 0x578) = 0x41200000;
  *(uint *)(iVar2 + 0x2d8) = 1;
  *(uint *)(iVar2 + 0x2dc) = 2;
  *(uint *)(iVar2 + 0x2e0) = 1;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x2e8) = 0x41700000;
  uVar1 = _DAT_006054dc;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x57c) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
