// Name: FUN_005cf2d0
// Address: 005cf2d0
// Address Range: [[005cf2d0, 005cf2e3]]
// Convention: unknown
// Signature: int FUN_005cf2d0(int param_1)

#include "nocturne.h"

int FUN_005cf2d0(int param_1)

{
  if ((0x60 < (ushort)param_1) && ((ushort)param_1 < 0x7b)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}
