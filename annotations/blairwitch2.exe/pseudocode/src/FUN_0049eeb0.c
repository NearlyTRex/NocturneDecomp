// Name: FUN_0049eeb0
// Address: 0049eeb0
// Address Range: [[0049eeb0, 0049eec4]]
// Convention: unknown
// Signature: void FUN_0049eeb0(undefined4 param_1)

#include "nocturne.h"

void FUN_0049eeb0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510dd0(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005f65f4;
  return;
}
