// Name: FUN_005a1970
// Address: 005a1970
// Address Range: [[005a1970, 005a198a]]
// Convention: unknown
// Signature: undefined4 FUN_005a1970(int param_1)

#include "nocturne.h"

uint FUN_005a1970(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_005c2e90(*(int *)(param_1 + 4));
  return uVar1;
}
