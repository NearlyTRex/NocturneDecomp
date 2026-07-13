// Name: FUN_0048cb80
// Address: 0048cb80
// Address Range: [[0048cb80, 0048cb94]]
// Convention: unknown
// Signature: void FUN_0048cb80(undefined4 param_1)

#include "nocturne.h"

void FUN_0048cb80(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ef010(param_1);
  *(byte ***)(iVar1 + 0x34) = &PTR_FUN_0059d2a4;
  return;
}
