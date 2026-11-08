// Name: FUN_00527c10
// Address: 00527c10
// Address Range: [[00527c10, 00527c99]]
// Convention: unknown
// Signature: int FUN_00527c10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00527c10(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0057ad70(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5e3874;
  FUN_004625f0(iVar2 + 0x158,"delisle.kfm");
  *(uint *)(iVar2 + 0x594) = 0x40400000;
  *(uint *)(iVar2 + 0x2d8) = 2;
  *(uint *)(iVar2 + 0x2dc) = 3;
  *(uint *)(iVar2 + 0x2e0) = 9;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x2e8) = 0x420c0000;
  uVar1 = _DAT_005e386c;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x598) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
