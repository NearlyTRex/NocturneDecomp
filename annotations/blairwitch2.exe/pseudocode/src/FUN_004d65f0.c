// Name: FUN_004d65f0
// Address: 004d65f0
// Address Range: [[004d65f0, 004d6655]]
// Convention: unknown
// Signature: int FUN_004d65f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d65f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f8d74;
  FUN_005478b0(iVar3 + 0x2b4,0x5da92e);
  uVar1 = _DAT_005f8d60;
  *(uint *)(iVar3 + 0x3430) = 0x3f19999a;
  uVar2 = _DAT_005f8d64;
  *(uint *)(iVar3 + 0x3434) = 0x3f000000;
  *(uint *)(iVar3 + 0x282c) = 0;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
