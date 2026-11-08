// Name: FUN_005a3630
// Address: 005a3630
// Address Range: [[005a3630, 005a364b]]
// Convention: unknown
// Signature: void FUN_005a3630(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a3630(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x85c)) {
    return;
  }
  *(uint *)(param_1 + 0x85c) = 0;
  return;
}
