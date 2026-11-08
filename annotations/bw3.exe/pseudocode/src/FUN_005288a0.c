// Name: FUN_005288a0
// Address: 005288a0
// Address Range: [[005288a0, 005288b9]]
// Convention: unknown
// Signature: void FUN_005288a0(char *param_1)

#include "nocturne.h"

void FUN_005288a0(char *param_1)

{
  while (((&DAT_006074b8)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
