// Name: FUN_00568e80
// Address: 00568e80
// Address Range: [[00568e80, 00568e8d]]
// Convention: unknown
// Signature: void FUN_00568e80(undefined4 param_1)

#include "nocturne.h"

void FUN_00568e80(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_005c1abc)();
  *(uint *)(iVar1 + 4) = param_1;
  return;
}
