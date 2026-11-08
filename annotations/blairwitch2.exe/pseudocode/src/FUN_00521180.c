// Name: FUN_00521180
// Address: 00521180
// Address Range: [[00521180, 00521199]]
// Convention: unknown
// Signature: void FUN_00521180(char *param_1)

#include "nocturne.h"

void FUN_00521180(char *param_1)

{
  while (((&DAT_0061ed94)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
