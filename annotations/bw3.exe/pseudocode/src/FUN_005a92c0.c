// Name: FUN_005a92c0
// Address: 005a92c0
// Address Range: [[005a92c0, 005a92cd]]
// Convention: unknown
// Signature: void FUN_005a92c0(undefined4 param_1)

#include "nocturne.h"

void FUN_005a92c0(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_006079a0)();
  *(uint *)(iVar1 + 4) = param_1;
  return;
}
