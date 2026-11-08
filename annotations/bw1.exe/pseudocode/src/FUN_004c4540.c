// Name: FUN_004c4540
// Address: 004c4540
// Address Range: [[004c4540, 004c4561]]
// Convention: unknown
// Signature: undefined4 FUN_004c4540(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004c4540(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    return *(uint *)(param_2 * 4 + param_1 + 0x3de8);
  }
  return 0;
}
