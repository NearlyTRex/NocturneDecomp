// Name: FUN_004ab560
// Address: 004ab560
// Address Range: [[004ab560, 004ab587]]
// Convention: unknown
// Signature: int FUN_004ab560(int param_1,int param_2)

#include "nocturne.h"

int FUN_004ab560(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    param_1 = param_1 + param_2 * 4;
    return *(int *)(param_1 + 0x39e8) + *(int *)(param_1 + 0x3de8);
  }
  return 0;
}
