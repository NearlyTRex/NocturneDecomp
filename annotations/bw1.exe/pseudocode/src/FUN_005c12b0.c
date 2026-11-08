// Name: FUN_005c12b0
// Address: 005c12b0
// Address Range: [[005c12b0, 005c12c1]]
// Convention: unknown
// Signature: int FUN_005c12b0(int param_1)

#include "nocturne.h"

int FUN_005c12b0(int param_1)

{
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}
