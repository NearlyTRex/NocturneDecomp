// Name: FUN_005b84c0
// Address: 005b84c0
// Address Range: [[005b84c0, 005b84cf]]
// Convention: unknown
// Signature: void FUN_005b84c0(undefined4 param_1)

#include "nocturne.h"

void FUN_005b84c0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005b8490();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
  }
  return;
}
