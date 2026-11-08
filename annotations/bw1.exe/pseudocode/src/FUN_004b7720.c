// Name: FUN_004b7720
// Address: 004b7720
// Address Range: [[004b7720, 004b7734]]
// Convention: unknown
// Signature: void FUN_004b7720(undefined4 param_1)

#include "nocturne.h"

void FUN_004b7720(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_00600064;
  return;
}
