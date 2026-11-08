// Name: FUN_005be180
// Address: 005be180
// Address Range: [[005be180, 005be18d]]
// Convention: unknown
// Signature: void FUN_005be180(undefined4 param_1)

#include "nocturne.h"

void FUN_005be180(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_0061f2a4)();
  *(uint *)(iVar1 + 4) = param_1;
  return;
}
