// Name: FUN_005ade80
// Address: 005ade80
// Address Range: [[005ade80, 005adea5]]
// Convention: unknown
// Signature: void FUN_005ade80(int param_1)

#include "nocturne.h"

void FUN_005ade80(int param_1)

{
  if (*(int *)(param_1 + 0x3aafc) == 0) {
    return;
  }
  FUN_005b7fce(*(int *)(param_1 + 0x3aafc));
  *(uint *)(param_1 + 0x3aafc) = 0;
  return;
}
