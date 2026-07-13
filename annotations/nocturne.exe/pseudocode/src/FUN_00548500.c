// Name: FUN_00548500
// Address: 00548500
// Address Range: [[00548500, 00548522]]
// Convention: unknown
// Signature: undefined4 FUN_00548500(int param_1)

#include "nocturne.h"

uint FUN_00548500(int param_1)

{
  if (*(int *)(param_1 + 0x16c) != 3) {
    return 1;
  }
  *(uint *)(param_1 + 0x2e8) = 1;
  return 1;
}
