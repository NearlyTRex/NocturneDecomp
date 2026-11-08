// Name: FUN_00550170
// Address: 00550170
// Address Range: [[00550170, 00550196]]
// Convention: unknown
// Signature: void FUN_00550170(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550170(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641640) = 1;
  *(uint *)(iVar1 + 0x264163c) = param_1;
  return;
}
