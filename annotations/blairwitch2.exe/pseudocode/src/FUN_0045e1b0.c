// Name: FUN_0045e1b0
// Address: 0045e1b0
// Address Range: [[0045e1b0, 0045e1c1]]
// Convention: unknown
// Signature: undefined4 FUN_0045e1b0(int param_1)

#include "nocturne.h"

uint FUN_0045e1b0(int param_1)

{
  return *(uint *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4);
}
