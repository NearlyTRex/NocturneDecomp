// Name: FUN_00526090
// Address: 00526090
// Address Range: [[00526090, 005260bd]]
// Convention: unknown
// Signature: void FUN_00526090(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00526090(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1bb8) = 1;
  *(uint *)(iVar1 + 0x2dc1bb4) = param_1;
  return;
}
