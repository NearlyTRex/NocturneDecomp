// Name: FUN_004b7780
// Address: 004b7780
// Address Range: [[004b7780, 004b7794]]
// Convention: unknown
// Signature: void FUN_004b7780(undefined4 param_1)

#include "nocturne.h"

void FUN_004b7780(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_006000a4;
  return;
}
