// Name: FUN_0051c110
// Address: 0051c110
// Address Range: [[0051c110, 0051c127]]
// Convention: unknown
// Signature: void FUN_0051c110(undefined4 param_1)

#include "nocturne.h"

void FUN_0051c110(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0051b080(param_1);
  *(byte ***)(iVar1 + 0x194) = &PTR_FUN_005fadd4;
  return;
}
