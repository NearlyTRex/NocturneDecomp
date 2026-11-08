// Name: FUN_005747c0
// Address: 005747c0
// Address Range: [[005747c0, 005747da]]
// Convention: unknown
// Signature: void FUN_005747c0(undefined4 param_1)

#include "nocturne.h"

void FUN_005747c0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005744a0(param_1);
  *puVar1 = &PTR_FUN_005e5b24;
  puVar1[1] = 0;
  return;
}
