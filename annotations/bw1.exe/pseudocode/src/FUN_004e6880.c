// Name: FUN_004e6880
// Address: 004e6880
// Address Range: [[004e6880, 004e6894]]
// Convention: unknown
// Signature: void FUN_004e6880(undefined4 param_1)

#include "nocturne.h"

void FUN_004e6880(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_006016d4;
  return;
}
