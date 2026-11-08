// Name: FUN_004aa5e0
// Address: 004aa5e0
// Address Range: [[004aa5e0, 004aa609]]
// Convention: unknown
// Signature: undefined4 FUN_004aa5e0(int param_1)

#include "nocturne.h"

uint FUN_004aa5e0(int param_1)

{
  if (((((&DAT_00626114)[(byte)((char)param_1 + 1)] & 0xe0) == 0) && (param_1 != 0x5f)) &&
     (param_1 != 0x2d)) {
    return 0;
  }
  return 1;
}
