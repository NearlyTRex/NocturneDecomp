// Name: FUN_00459ce0
// Address: 00459ce0
// Address Range: [[00459ce0, 00459cff]]
// Convention: unknown
// Signature: void FUN_00459ce0(int param_1)

#include "nocturne.h"

void FUN_00459ce0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return;
}
