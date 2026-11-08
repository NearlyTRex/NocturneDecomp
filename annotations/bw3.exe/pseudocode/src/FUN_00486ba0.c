// Name: FUN_00486ba0
// Address: 00486ba0
// Address Range: [[00486ba0, 00486c29]]
// Convention: unknown
// Signature: int FUN_00486ba0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00486ba0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0057ad70(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5df104;
  FUN_004625f0(iVar2 + 0x158,"elephantgun.kfm");
  *(uint *)(iVar2 + 0x594) = 0x41200000;
  *(uint *)(iVar2 + 0x2d8) = 1;
  *(uint *)(iVar2 + 0x2dc) = 2;
  *(uint *)(iVar2 + 0x2e0) = 1;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x2e8) = 0x41700000;
  uVar1 = _DAT_005df0fc;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x598) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
