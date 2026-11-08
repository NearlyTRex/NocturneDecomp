// Name: FUN_00540bc0
// Address: 00540bc0
// Address Range: [[00540bc0, 00540bde]]
// Convention: unknown
// Signature: void FUN_00540bc0(int param_1)

#include "nocturne.h"

void FUN_00540bc0(int param_1)

{
  if (*(float *)(param_1 + 0x15aecc) <= 0.0) {
    return;
  }
  *(uint *)(param_1 + 0x15aecc) = 0x1e3ce508;
  return;
}
