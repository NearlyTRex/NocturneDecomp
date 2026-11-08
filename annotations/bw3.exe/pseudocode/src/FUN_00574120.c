// Name: FUN_00574120
// Address: 00574120
// Address Range: [[00574120, 0057414f]]
// Convention: unknown
// Signature: void FUN_00574120(undefined4 param_1)

#include "nocturne.h"

void FUN_00574120(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00572530(param_1);
  *puVar1 = &PTR_FUN_005e5ac4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}
