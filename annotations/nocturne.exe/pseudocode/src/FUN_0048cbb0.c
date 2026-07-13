// Name: FUN_0048cbb0
// Address: 0048cbb0
// Address Range: [[0048cbb0, 0048cbc4]]
// Convention: unknown
// Signature: void FUN_0048cbb0(undefined4 param_1)

#include "nocturne.h"

void FUN_0048cbb0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ef010(param_1);
  *(byte ***)(iVar1 + 0x34) = &PTR_FUN_0059d2c4;
  return;
}
