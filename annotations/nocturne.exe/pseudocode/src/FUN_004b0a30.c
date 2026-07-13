// Name: FUN_004b0a30
// Address: 004b0a30
// Address Range: [[004b0a30, 004b0a44]]
// Convention: unknown
// Signature: void FUN_004b0a30(undefined4 param_1)

#include "nocturne.h"

void FUN_004b0a30(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ef010(param_1);
  *(byte ***)(iVar1 + 0x34) = &PTR_FUN_0059e4f4;
  return;
}
