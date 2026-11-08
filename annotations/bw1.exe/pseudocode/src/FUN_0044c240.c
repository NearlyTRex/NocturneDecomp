// Name: FUN_0044c240
// Address: 0044c240
// Address Range: [[0044c240, 0044c252]]
// Convention: unknown
// Signature: undefined4 FUN_0044c240(int param_1)

#include "nocturne.h"

uint FUN_0044c240(int param_1)

{
  uint uVar1;
  
  if (65000 < *(int *)(param_1 + 0x17c)) {
    return 0;
  }
  uVar1 = FUN_0044bf20(param_1);
  return uVar1;
}
