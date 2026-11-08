// Name: FUN_004a7550
// Address: 004a7550
// Address Range: [[004a7550, 004a75cf]]
// Convention: unknown
// Signature: int FUN_004a7550(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a7550(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0057ad70(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5e0094;
  FUN_004625f0(iVar2 + 0x158,"flashlit.kfm");
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 5;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  uVar1 = _DAT_005e008c;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x568) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
