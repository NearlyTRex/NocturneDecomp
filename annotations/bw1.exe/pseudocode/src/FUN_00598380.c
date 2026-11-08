// Name: FUN_00598380
// Address: 00598380
// Address Range: [[00598380, 00598413]]
// Convention: unknown
// Signature: int FUN_00598380(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00598380(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005ad4c0(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_00606cc4;
  FUN_00468950(iVar2 + 0x158,"tommygun.kfm");
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 4;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x2e8) = 0x42c80000;
  *(uint *)(iVar2 + 0x2ec) = 1;
  *(uint *)(iVar2 + 0x57c) = 0;
  uVar1 = _DAT_00606cbc;
  *(uint *)(iVar2 + 0x580) = 0;
  *(uint *)(iVar2 + 0x578) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
