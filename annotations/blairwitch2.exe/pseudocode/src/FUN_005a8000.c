// Name: FUN_005a8000
// Address: 005a8000
// Address Range: [[005a8000, 005a8026]]
// Convention: unknown
// Signature: int FUN_005a8000(int param_1)

#include "nocturne.h"

int FUN_005a8000(int param_1)

{
  *(uint *)(param_1 + 0x40) = 0x6002e4;
  if (*(int *)(param_1 + 0x38) == 0) {
    return param_1;
  }
  FUN_005b86a0(*(uint *)(param_1 + 0x3c));
  return param_1;
}
