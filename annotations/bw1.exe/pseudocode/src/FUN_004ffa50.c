// Name: FUN_004ffa50
// Address: 004ffa50
// Address Range: [[004ffa50, 004ffa71]]
// Convention: unknown
// Signature: void FUN_004ffa50(int param_1)

#include "nocturne.h"

void FUN_004ffa50(int param_1)

{
  if (-1 < param_1) {
    if (0xffff < param_1) {
      param_1 = 0xffff;
    }
    DAT_0061f310 = param_1;
    return;
  }
  DAT_0061f310 = 0;
  return;
}
