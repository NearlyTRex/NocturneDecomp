// Name: FUN_0057dd20
// Address: 0057dd20
// Address Range: [[0057dd20, 0057dd3a]]
// Convention: unknown
// Signature: undefined4 FUN_0057dd20(int param_1)

#include "nocturne.h"

uint FUN_0057dd20(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_005baab0(*(int *)(param_1 + 4));
  return uVar1;
}
