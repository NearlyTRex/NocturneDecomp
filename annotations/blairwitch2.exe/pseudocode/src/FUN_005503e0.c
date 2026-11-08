// Name: FUN_005503e0
// Address: 005503e0
// Address Range: [[005503e0, 00550410]]
// Convention: unknown
// Signature: void FUN_005503e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005503e0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641670) = param_1;
  *(uint *)(iVar1 + 0x2641674) = param_2;
  *(uint *)(iVar1 + 0x2641678) = param_3;
  return;
}
