// Name: FUN_0045dd90
// Address: 0045dd90
// Address Range: [[0045dd90, 0045ddaf]]
// Convention: unknown
// Signature: void FUN_0045dd90(int param_1)

#include "nocturne.h"

void FUN_0045dd90(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return;
}
