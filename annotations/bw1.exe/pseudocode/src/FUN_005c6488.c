// Name: FUN_005c6488
// Address: 005c6488
// Address Range: [[005c6488, 005c6495]]
// Convention: unknown
// Signature: void FUN_005c6488(undefined4 param_1)

#include "nocturne.h"

void FUN_005c6488(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_006265fc)();
  *(uint *)(iVar1 + 8) = param_1;
  return;
}
