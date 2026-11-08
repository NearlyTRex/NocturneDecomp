// Name: FUN_004b7530
// Address: 004b7530
// Address Range: [[004b7530, 004b7544]]
// Convention: unknown
// Signature: void FUN_004b7530(undefined4 param_1)

#include "nocturne.h"

void FUN_004b7530(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005fffe4;
  return;
}
