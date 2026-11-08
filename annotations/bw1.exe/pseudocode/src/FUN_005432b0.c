// Name: FUN_005432b0
// Address: 005432b0
// Address Range: [[005432b0, 005432c9]]
// Convention: unknown
// Signature: void FUN_005432b0(char *param_1)

#include "nocturne.h"

void FUN_005432b0(char *param_1)

{
  while (((&DAT_00626114)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
