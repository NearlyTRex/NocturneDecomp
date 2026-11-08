// Name: FUN_005c0820
// Address: 005c0820
// Address Range: [[005c0820, 005c0831]]
// Convention: unknown
// Signature: int FUN_005c0820(int param_1)

#include "nocturne.h"

int FUN_005c0820(int param_1)

{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}
