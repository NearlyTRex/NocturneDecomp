// Name: FUN_004cf210
// Address: 004cf210
// Address Range: [[004cf210, 004cf224]]
// Convention: unknown
// Signature: void FUN_004cf210(undefined4 param_1)

#include "nocturne.h"

void FUN_004cf210(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00509e10(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005e0e44;
  return;
}
