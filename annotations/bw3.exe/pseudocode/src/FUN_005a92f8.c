// Name: FUN_005a92f8
// Address: 005a92f8
// Address Range: [[005a92f8, 005a9305]]
// Convention: unknown
// Signature: void FUN_005a92f8(undefined4 param_1)

#include "nocturne.h"

void FUN_005a92f8(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_006079a0)();
  *(uint *)(iVar1 + 8) = param_1;
  return;
}
