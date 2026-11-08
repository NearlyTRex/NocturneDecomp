// Name: FUN_00572880
// Address: 00572880
// Address Range: [[00572880, 005728a6]]
// Convention: unknown
// Signature: void FUN_00572880(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572880(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d24) = 1;
  *(uint *)(iVar1 + 0x2c78d20) = param_1;
  return;
}
