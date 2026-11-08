// Name: FUN_00417ab0
// Address: 00417ab0
// Address Range: [[00417ab0, 00417ac9]]
// Convention: unknown
// Signature: undefined4 FUN_00417ab0(int param_1)

#include "nocturne.h"

uint FUN_00417ab0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2b4) != 0) {
    return 0;
  }
  uVar1 = FUN_00409f20(param_1);
  return uVar1;
}
