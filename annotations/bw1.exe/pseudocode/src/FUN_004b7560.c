// Name: FUN_004b7560
// Address: 004b7560
// Address Range: [[004b7560, 004b7574]]
// Convention: unknown
// Signature: void FUN_004b7560(undefined4 param_1)

#include "nocturne.h"

void FUN_004b7560(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_00600004;
  return;
}
