// Name: FUN_005066f0
// Address: 005066f0
// Address Range: [[005066f0, 0050670b]]
// Convention: unknown
// Signature: void FUN_005066f0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005066f0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x2d4)) {
    return;
  }
  *(uint *)(param_1 + 0x2d4) = 0;
  return;
}
