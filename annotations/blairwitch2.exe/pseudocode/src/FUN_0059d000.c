// Name: FUN_0059d000
// Address: 0059d000
// Address Range: [[0059d000, 0059d032]]
// Convention: unknown
// Signature: void FUN_0059d000(int param_1)

#include "nocturne.h"

void FUN_0059d000(int param_1)

{
  if (*(float *)(param_1 + 0x700) <= 0.0) {
    FUN_00589b90(param_1);
    return;
  }
  FUN_0059ced0(param_1);
  FUN_00589b90(param_1);
  return;
}
