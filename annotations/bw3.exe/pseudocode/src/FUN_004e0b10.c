// Name: FUN_004e0b10
// Address: 004e0b10
// Address Range: [[004e0b10, 004e0b31]]
// Convention: unknown
// Signature: void FUN_004e0b10(int param_1)

#include "nocturne.h"

void FUN_004e0b10(int param_1)

{
  if (-1 < param_1) {
    if (0xffff < param_1) {
      param_1 = 0xffff;
    }
    DAT_006002c4 = param_1;
    return;
  }
  DAT_006002c4 = 0;
  return;
}
