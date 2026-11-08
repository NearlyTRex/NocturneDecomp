// Name: FUN_004c15e0
// Address: 004c15e0
// Address Range: [[004c15e0, 004c170d]]
// Convention: unknown
// Signature: int FUN_004c15e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c15e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f78e4;
  FUN_005478b0(iVar3 + 0x2b4,0x5d8e8e);
  fVar4 = (float)FUN_0040cf60(0x41a00000,0x420c0000);
  fVar6 = (float10)fVar4 * (float10)_DAT_005d8e97;
  FUN_005b7ff0(0x40800000,0x41200000);
  *(int *)(iVar3 + 0x10afc) = (int)ROUND(fVar6);
  fVar4 = (float)FUN_0040cf60();
  *(uint *)(iVar3 + 0x10b04) = 0xa0000;
  *(uint *)(iVar3 + 0x10b08) = 0xffffffff;
  fVar6 = (float10)fVar4 * (float10)_DAT_005d8e97;
  *(uint *)(iVar3 + 0x10b0c) = 0;
  *(uint *)(iVar3 + 0x10b18) = 2;
  FUN_005b7ff0(3);
  *(int *)(iVar3 + 0x10b00) = (int)ROUND(fVar6);
  uVar5 = FUN_0040cfc0(1);
  *(uint *)(iVar3 + 0x3430) = 0x3f400000;
  *(uint *)(iVar3 + 0x3434) = 0x3fc00000;
  *(uint *)(iVar3 + 0x10b54) = 0;
  *(uint *)(iVar3 + 0x10b58) = 0;
  *(uint *)(iVar3 + 0x10b5c) = 0;
  *(uint *)(iVar3 + 0x10b60) = 0;
  *(uint *)(iVar3 + 0x10b64) = 0;
  uVar1 = _DAT_005f78d0;
  *(uint *)(iVar3 + 0x259c) = 0x3fc90fdb;
  uVar2 = _DAT_005f78d4;
  *(uint *)(iVar3 + 0x10b14) = uVar5;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
