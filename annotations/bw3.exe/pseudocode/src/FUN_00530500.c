// Name: FUN_00530500
// Address: 00530500
// Address Range: [[00530500, 00530521]]
// Convention: unknown
// Signature: void FUN_00530500(int param_1)

#include "nocturne.h"

void FUN_00530500(int param_1)

{
  FUN_00530390(param_1,*(uint *)(param_1 + 4));
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x4c) = 0;
  return;
}
