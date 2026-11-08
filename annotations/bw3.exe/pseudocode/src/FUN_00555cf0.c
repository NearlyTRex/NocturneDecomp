// Name: FUN_00555cf0
// Address: 00555cf0
// Address Range: [[00555cf0, 00555d16]]
// Convention: unknown
// Signature: void FUN_00555cf0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555cf0(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb940) = 1;
  *(uint *)(iVar1 + 0x2ceb93c) = param_1;
  return;
}
