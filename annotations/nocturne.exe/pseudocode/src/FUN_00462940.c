// Name: FUN_00462940
// Address: 00462940
// Address Range: [[00462940, 004629af]]
// Convention: unknown
// Signature: int FUN_00462940(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00462940(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059c714;
  FUN_0051e0c0(iVar3 + 0x150,"drone.dfm");
  *(uint *)(iVar3 + 0x2dd4) = 0x3f400000;
  uVar1 = _DAT_0059c6fc;
  *(uint *)(iVar3 + 0x2dd8) = 0x3fc00000;
  uVar2 = _DAT_0059c700;
  *(uint *)(iVar3 + 0x2608) = 1;
  *(uint *)(iVar3 + 0x2434) = 0x42960000;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
