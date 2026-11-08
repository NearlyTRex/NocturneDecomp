// Name: FUN_004414f0
// Address: 004414f0
// Address Range: [[004414f0, 00441503]]
// Convention: unknown
// Signature: void FUN_004414f0(undefined4 param_1)

#include "nocturne.h"

void FUN_004414f0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00440800(param_1);
  *puVar1 = &PTR_FUN_005dd4c4;
  return;
}
