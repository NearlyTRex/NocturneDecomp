// Name: FUN_0041fbb0
// Address: 0041fbb0
// Address Range: [[0041fbb0, 0041fc15]]
// Convention: unknown
// Signature: int FUN_0041fbb0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041fbb0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059ad24;
  FUN_0051e0c0(iVar3 + 0x150,"bride.dfm");
  uVar1 = _DAT_0059ad10;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f400000;
  uVar2 = _DAT_0059ad14;
  *(uint *)(iVar3 + 0x2dd8) = 0x3fc00000;
  *(uint *)(iVar3 + 0xbd48) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
