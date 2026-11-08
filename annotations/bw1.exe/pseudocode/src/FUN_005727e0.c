// Name: FUN_005727e0
// Address: 005727e0
// Address Range: [[005727e0, 00572806]]
// Convention: unknown
// Signature: void FUN_005727e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005727e0(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d10) = 1;
  *(uint *)(iVar1 + 0x2c78d0c) = param_1;
  return;
}
