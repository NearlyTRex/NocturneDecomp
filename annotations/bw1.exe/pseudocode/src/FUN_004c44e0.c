// Name: FUN_004c44e0
// Address: 004c44e0
// Address Range: [[004c44e0, 004c4501]]
// Convention: unknown
// Signature: undefined4 FUN_004c44e0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004c44e0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    return *(uint *)(param_2 * 4 + param_1 + 0x35e8);
  }
  return 0;
}
