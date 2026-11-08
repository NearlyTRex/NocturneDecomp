// Name: FUN_005a35a0
// Address: 005a35a0
// Address Range: [[005a35a0, 005a35b1]]
// Convention: unknown
// Signature: int FUN_005a35a0(int param_1)

#include "nocturne.h"

int FUN_005a35a0(int param_1)

{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}
