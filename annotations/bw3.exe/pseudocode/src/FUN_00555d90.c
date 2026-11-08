// Name: FUN_00555d90
// Address: 00555d90
// Address Range: [[00555d90, 00555db6]]
// Convention: unknown
// Signature: void FUN_00555d90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555d90(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb954) = 1;
  *(uint *)(iVar1 + 0x2ceb950) = param_1;
  return;
}
