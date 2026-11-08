// Name: FUN_005a4120
// Address: 005a4120
// Address Range: [[005a4120, 005a4131]]
// Convention: unknown
// Signature: int FUN_005a4120(int param_1)

#include "nocturne.h"

int FUN_005a4120(int param_1)

{
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}
