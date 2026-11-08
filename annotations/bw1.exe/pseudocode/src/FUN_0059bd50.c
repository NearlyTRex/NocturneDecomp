// Name: FUN_0059bd50
// Address: 0059bd50
// Address Range: [[0059bd50, 0059bd72]]
// Convention: unknown
// Signature: undefined4 FUN_0059bd50(int param_1)

#include "nocturne.h"

uint FUN_0059bd50(int param_1)

{
  if (*(int *)(param_1 + 0x174) != 3) {
    return 1;
  }
  *(uint *)(param_1 + 0x2f0) = 1;
  return 1;
}
