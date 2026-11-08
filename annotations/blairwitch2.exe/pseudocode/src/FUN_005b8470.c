// Name: FUN_005b8470
// Address: 005b8470
// Address Range: [[005b8470, 005b8481]]
// Convention: unknown
// Signature: int FUN_005b8470(int param_1)

#include "nocturne.h"

int FUN_005b8470(int param_1)

{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}
