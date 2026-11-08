// Name: FUN_004c4510
// Address: 004c4510
// Address Range: [[004c4510, 004c4537]]
// Convention: unknown
// Signature: int FUN_004c4510(int param_1,int param_2)

#include "nocturne.h"

int FUN_004c4510(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    param_1 = param_1 + param_2 * 4;
    return *(int *)(param_1 + 0x39e8) + *(int *)(param_1 + 0x3de8);
  }
  return 0;
}
