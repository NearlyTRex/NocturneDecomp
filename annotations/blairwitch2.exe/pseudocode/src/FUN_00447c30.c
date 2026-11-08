// Name: FUN_00447c30
// Address: 00447c30
// Address Range: [[00447c30, 00447c4f]]
// Convention: unknown
// Signature: void FUN_00447c30(int param_1)

#include "nocturne.h"

void FUN_00447c30(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return;
}
