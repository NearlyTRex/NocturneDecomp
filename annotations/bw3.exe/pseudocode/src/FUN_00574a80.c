// Name: FUN_00574a80
// Address: 00574a80
// Address Range: [[00574a80, 00574ab6]]
// Convention: unknown
// Signature: void FUN_00574a80(undefined4 param_1)

#include "nocturne.h"

void FUN_00574a80(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005744a0(param_1);
  *puVar1 = &PTR_FUN_005e5b54;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 1;
  return;
}
