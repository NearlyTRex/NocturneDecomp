// Name: FUN_0057dd60
// Address: 0057dd60
// Address Range: [[0057dd60, 0057dd89]]
// Convention: unknown
// Signature: undefined4 FUN_0057dd60(int param_1)

#include "nocturne.h"

uint FUN_0057dd60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  FUN_005b89c0(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return 1;
}
