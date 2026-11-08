// Name: FUN_00491c70
// Address: 00491c70
// Address Range: [[00491c70, 00491c99]]
// Convention: unknown
// Signature: undefined4 FUN_00491c70(int param_1)

#include "nocturne.h"

uint FUN_00491c70(int param_1)

{
  if (((((&DAT_0061ed94)[(byte)((char)param_1 + 1)] & 0xe0) == 0) && (param_1 != 0x5f)) &&
     (param_1 != 0x2d)) {
    return 0;
  }
  return 1;
}
