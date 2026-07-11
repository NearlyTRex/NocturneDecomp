// Name: FUN_00564860
// Address: 00564860
// Address Range: [[00564860, 00564871]]
// Convention: unknown
// Signature: int FUN_00564860(int param_1)

#include "nocturne.h"

int FUN_00564860(int param_1)

{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}
