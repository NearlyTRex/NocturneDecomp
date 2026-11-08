// Name: FUN_005b8e40
// Address: 005b8e40
// Address Range: [[005b8e40, 005b8e51]]
// Convention: unknown
// Signature: int FUN_005b8e40(int param_1)

#include "nocturne.h"

int FUN_005b8e40(int param_1)

{
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}
