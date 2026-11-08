// Name: FUN_004a2140
// Address: 004a2140
// Address Range: [[004a2140, 004a2163]]
// Convention: unknown
// Signature: int FUN_004a2140(undefined4 param_1)

#include "nocturne.h"

int FUN_004a2140(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a1e60(param_1);
  iVar1 = FUN_0040d420(iVar1 + 0x18);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005f6ee4;
  return iVar1 + -0x18;
}
