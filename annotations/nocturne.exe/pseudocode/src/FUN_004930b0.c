// Name: FUN_004930b0
// Address: 004930b0
// Address Range: [[004930b0, 004930d1]]
// Convention: unknown
// Signature: undefined4 FUN_004930b0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004930b0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    return *(uint *)(param_2 * 4 + param_1 + 0x2568);
  }
  return 0;
}
