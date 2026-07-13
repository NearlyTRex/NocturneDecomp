// Name: FUN_00428ef0
// Address: 00428ef0
// Address Range: [[00428ef0, 00428f15]]
// Convention: unknown
// Signature: void FUN_00428ef0(int param_1)

#include "nocturne.h"

void FUN_00428ef0(int param_1)

{
  if (*(int *)(param_1 + 0x25ac) == 0) {
    return;
  }
  FUN_00455270(*(int *)(param_1 + 0x25ac));
  *(uint *)(param_1 + 0x25ac) = 0;
  return;
}
