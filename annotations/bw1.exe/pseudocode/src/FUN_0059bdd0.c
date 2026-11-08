// Name: FUN_0059bdd0
// Address: 0059bdd0
// Address Range: [[0059bdd0, 0059bde8]]
// Convention: unknown
// Signature: void FUN_0059bdd0(int param_1)

#include "nocturne.h"

void FUN_0059bdd0(int param_1)

{
  if (*(int *)(param_1 + 0x174) != 4) {
    return;
  }
  *(uint *)(param_1 + 0x2f0) = 1;
  return;
}
