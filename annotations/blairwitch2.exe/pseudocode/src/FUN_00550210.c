// Name: FUN_00550210
// Address: 00550210
// Address Range: [[00550210, 00550236]]
// Convention: unknown
// Signature: void FUN_00550210(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550210(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641654) = 1;
  *(uint *)(iVar1 + 0x2641650) = param_1;
  return;
}
