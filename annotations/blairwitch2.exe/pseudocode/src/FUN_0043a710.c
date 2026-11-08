// Name: FUN_0043a710
// Address: 0043a710
// Address Range: [[0043a710, 0043a733]]
// Convention: unknown
// Signature: undefined4 FUN_0043a710(int param_1)

#include "nocturne.h"

uint FUN_0043a710(int param_1)

{
  if (*(int *)(param_1 + 0x6d4) == 0) {
    return 0;
  }
  FUN_0049f850(param_1 + 0x6d8);
  return 1;
}
