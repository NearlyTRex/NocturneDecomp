// Name: FUN_00448380
// Address: 00448380
// Address Range: [[00448380, 00448392]]
// Convention: unknown
// Signature: undefined4 FUN_00448380(int param_1)

#include "nocturne.h"

uint FUN_00448380(int param_1)

{
  uint uVar1;
  
  if (65000 < *(int *)(param_1 + 0x17c)) {
    return 0;
  }
  uVar1 = FUN_00448060(param_1);
  return uVar1;
}
