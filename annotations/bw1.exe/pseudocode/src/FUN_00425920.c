// Name: FUN_00425920
// Address: 00425920
// Address Range: [[00425920, 0042593d]]
// Convention: unknown
// Signature: undefined4 FUN_00425920(int param_1)

#include "nocturne.h"

uint FUN_00425920(int param_1)

{
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  if (*(int *)(param_1 + 0xc268) == 3) {
    return 2;
  }
  return 0;
}
