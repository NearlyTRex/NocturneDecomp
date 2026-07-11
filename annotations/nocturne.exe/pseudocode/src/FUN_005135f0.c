// Name: FUN_005135f0
// Address: 005135f0
// Address Range: [[005135f0, 0051360e]]
// Convention: unknown
// Signature: void FUN_005135f0(int param_1)

#include "nocturne.h"

void FUN_005135f0(int param_1)

{
  if (*(float *)(param_1 + 0x15aacc) <= 0.0) {
    return;
  }
  *(uint *)(param_1 + 0x15aacc) = 0x1e3ce508;
  return;
}
