// Name: FUN_004b7750
// Address: 004b7750
// Address Range: [[004b7750, 004b7764]]
// Convention: unknown
// Signature: void FUN_004b7750(undefined4 param_1)

#include "nocturne.h"

void FUN_004b7750(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_00600084;
  return;
}
