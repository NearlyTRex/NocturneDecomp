// Name: FUN_0045e270
// Address: 0045e270
// Address Range: [[0045e270, 0045e2d5]]
// Convention: unknown
// Signature: int FUN_0045e270(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045e270(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f5344;
  FUN_005478b0(iVar3 + 0x2b4,"blackdog.dfm");
  uVar1 = _DAT_005f532c;
  *(uint *)(iVar3 + 0x3430) = 0x3f400000;
  uVar2 = _DAT_005f5330;
  *(uint *)(iVar3 + 0x3434) = 0x3fc00000;
  *(uint *)(iVar3 + 0x10b00) = 0;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
