// Name: FUN_005108f0
// Address: 005108f0
// Address Range: [[005108f0, 00510902]]
// Convention: unknown
// Signature: undefined4 FUN_005108f0(int param_1)

#include "nocturne.h"

uint FUN_005108f0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    return 0;
  }
  uVar1 = FUN_00510620(param_1);
  return uVar1;
}
