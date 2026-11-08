// Name: FUN_005c6450
// Address: 005c6450
// Address Range: [[005c6450, 005c645d]]
// Convention: unknown
// Signature: void FUN_005c6450(undefined4 param_1)

#include "nocturne.h"

void FUN_005c6450(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_006265fc)();
  *(uint *)(iVar1 + 4) = param_1;
  return;
}
