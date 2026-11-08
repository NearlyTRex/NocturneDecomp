// Name: FUN_004c5b80
// Address: 004c5b80
// Address Range: [[004c5b80, 004c5ba8]]
// Convention: unknown
// Signature: undefined4 FUN_004c5b80(int param_1)

#include "nocturne.h"

uint FUN_004c5b80(int param_1)

{
  if ((*(int *)(param_1 + 0x2dc) != 0) && (*(int *)(param_1 + 0x344) == 0)) {
    *(uint *)(param_1 + 0x100) = 1;
    return 0;
  }
  return 1;
}
