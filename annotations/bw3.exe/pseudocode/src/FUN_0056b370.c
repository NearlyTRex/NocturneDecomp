// Name: FUN_0056b370
// Address: 0056b370
// Address Range: [[0056b370, 0056b403]]
// Convention: unknown
// Signature: int FUN_0056b370(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056b370(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0057ad70(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5e53c4;
  FUN_004625f0(iVar2 + 0x158,0x5d6449);
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 4;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x2e8) = 0x42c80000;
  *(uint *)(iVar2 + 0x2ec) = 1;
  *(uint *)(iVar2 + 0x598) = 0;
  uVar1 = _DAT_005e53bc;
  *(uint *)(iVar2 + 0x59c) = 0;
  *(uint *)(iVar2 + 0x594) = 0;
  *(uint *)(iVar2 + 0x564) = uVar1;
  return iVar2;
}
