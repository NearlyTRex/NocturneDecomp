// Name: crt_unknown.c_FUN_005b2060
// Address: 005b2060
// Address Range: [[005b2060, 005b2073]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005b2060(int param_1)

#include "nocturne.h"

int FUN_005b2060(int param_1)

{
  if ((0x60 < (ushort)param_1) && ((ushort)param_1 < 0x7b)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}
