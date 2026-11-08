// Name: FUN_004b95c0
// Address: 004b95c0
// Address Range: [[004b95c0, 004b965d]]
// Convention: unknown
// Signature: int FUN_004b95c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b95c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005ad4c0(param_1);
  *(uint *)(iVar2 + 0x154) = 0x6005d4;
  FUN_00468950(iVar2 + 0x158,"flamegun.kfm");
  *(uint *)(iVar2 + 0x57c) = 0;
  *(uint *)(iVar2 + 0x578) = 0;
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 2;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0x41700000;
  *(uint *)(iVar2 + 0x2ec) = 1;
  uVar1 = _DAT_006005bc;
  *(uint *)(iVar2 + 0x584) = 0;
  *(uint *)(iVar2 + 0x580) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
