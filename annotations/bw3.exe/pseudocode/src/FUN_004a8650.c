// Name: FUN_004a8650
// Address: 004a8650
// Address Range: [[004a8650, 004a8673]]
// Convention: unknown
// Signature: int FUN_004a8650(undefined4 param_1)

#include "nocturne.h"

int FUN_004a8650(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a8370(param_1);
  iVar1 = FUN_0040d2e0(iVar1 + 0x18);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005e02a4;
  return iVar1 + -0x18;
}
