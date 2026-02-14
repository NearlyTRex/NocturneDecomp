// Name: crt_unknown.c_FUN_00610970
// Address: 00610970
// Address Range: [[00610970, 00610983]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00610970(int param_1)

#include "nocturne.h"

int FUN_00610970(int param_1)

{
  if ((0x60 < (ushort)param_1) && ((ushort)param_1 < 0x7b)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}
