// Name: FUN_004415f0
// Address: 004415f0
// Address Range: [[004415f0, 00441603]]
// Convention: unknown
// Signature: void FUN_004415f0(undefined4 param_1)

#include "nocturne.h"

void FUN_004415f0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00440800(param_1);
  *puVar1 = &PTR_FUN_005dd4f4;
  return;
}
