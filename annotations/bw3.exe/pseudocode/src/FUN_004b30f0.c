// Name: FUN_004b30f0
// Address: 004b30f0
// Address Range: [[004b30f0, 004b3117]]
// Convention: unknown
// Signature: int FUN_004b30f0(int param_1,int param_2)

#include "nocturne.h"

int FUN_004b30f0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    param_1 = param_1 + param_2 * 4;
    return *(int *)(param_1 + 0x39e8) + *(int *)(param_1 + 0x3de8);
  }
  return 0;
}
