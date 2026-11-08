// Name: FUN_00541de0
// Address: 00541de0
// Address Range: [[00540a54, 00540a59] [00541de0, 00541e06]]
// Convention: unknown
// Signature: undefined4 FUN_00541de0(int param_1)

#include "nocturne.h"

uint FUN_00541de0(int param_1)

{
  if (((*(int *)(param_1 + 0x1ffac) != 0) && (*(int *)(param_1 + 0x1ffc0) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x1ffc0) + 0x2e0) == 8)) {
    return 1;
  }
  return 0;
}
