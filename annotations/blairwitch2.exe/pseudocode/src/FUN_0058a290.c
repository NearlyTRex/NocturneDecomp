// Name: FUN_0058a290
// Address: 0058a290
// Address Range: [[0058a290, 0058a2b3]]
// Convention: unknown
// Signature: undefined4 FUN_0058a290(int param_1)

#include "nocturne.h"

uint FUN_0058a290(int param_1)

{
  if (0 < *(int *)(param_1 + 0x6c4)) {
    *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + -1;
    return 1;
  }
  return 0;
}
