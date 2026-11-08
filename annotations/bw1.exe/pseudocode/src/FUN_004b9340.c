// Name: FUN_004b9340
// Address: 004b9340
// Address Range: [[004b9340, 004b936c]]
// Convention: unknown
// Signature: undefined4 FUN_004b9340(int param_1)

#include "nocturne.h"

uint FUN_004b9340(int param_1)

{
  if (*(int *)(param_1 + 0x5e4) == 0) {
    return *(uint *)(param_1 + 0x5e4);
  }
  FUN_004b8100(param_1 + 0x340);
  return *(uint *)(param_1 + 0x5e4);
}
