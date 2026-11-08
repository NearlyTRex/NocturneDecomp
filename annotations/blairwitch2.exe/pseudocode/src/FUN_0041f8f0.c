// Name: FUN_0041f8f0
// Address: 0041f8f0
// Address Range: [[0041f8f0, 0041f90d]]
// Convention: unknown
// Signature: undefined4 FUN_0041f8f0(int param_1)

#include "nocturne.h"

uint FUN_0041f8f0(int param_1)

{
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  if (*(int *)(param_1 + 0x10af8) == 3) {
    return 2;
  }
  return 0;
}
