// Name: FUN_0053ff20
// Address: 0053ff20
// Address Range: [[0053ff20, 0053ffa9]]
// Convention: unknown
// Signature: int FUN_0053ff20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0053ff20(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005ad4c0(param_1);
  *(uint *)(iVar2 + 0x154) = 0x604b04;
  FUN_00468950(iVar2 + 0x158,"delisle.kfm");
  *(uint *)(iVar2 + 0x578) = 0x40400000;
  *(uint *)(iVar2 + 0x2d8) = 2;
  *(uint *)(iVar2 + 0x2dc) = 3;
  *(uint *)(iVar2 + 0x2e0) = 9;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x2e8) = 0x420c0000;
  uVar1 = _DAT_00604afc;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x57c) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
