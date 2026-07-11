// Name: FUN_004fe070
// Address: 004fe070
// Address Range: [[004fe070, 004fe089]]
// Convention: unknown
// Signature: void FUN_004fe070(char *param_1)

#include "nocturne.h"

void FUN_004fe070(char *param_1)

{
  while (((&DAT_005c168c)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
