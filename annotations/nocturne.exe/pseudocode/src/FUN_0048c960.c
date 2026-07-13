// Name: FUN_0048c960
// Address: 0048c960
// Address Range: [[0048c960, 0048c974]]
// Convention: unknown
// Signature: void FUN_0048c960(undefined4 param_1)

#include "nocturne.h"

void FUN_0048c960(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ef010(param_1);
  *(byte ***)(iVar1 + 0x34) = &PTR_FUN_0059d224;
  return;
}
