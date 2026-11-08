// Name: FUN_004baa10
// Address: 004baa10
// Address Range: [[004baa10, 004baa33]]
// Convention: unknown
// Signature: int FUN_004baa10(undefined4 param_1)

#include "nocturne.h"

int FUN_004baa10(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ba730(param_1);
  iVar1 = FUN_0040d0a0(iVar1 + 0x18);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_00600944;
  return iVar1 + -0x18;
}
