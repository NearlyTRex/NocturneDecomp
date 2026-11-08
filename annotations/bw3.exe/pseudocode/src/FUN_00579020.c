// Name: FUN_00579020
// Address: 00579020
// Address Range: [[00579020, 00579041]]
// Convention: unknown
// Signature: void FUN_00579020(undefined4 param_1)

#include "nocturne.h"

void FUN_00579020(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00577d90(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e5fc4;
  *(uint *)(iVar1 + 0x298) = 1;
  return;
}
