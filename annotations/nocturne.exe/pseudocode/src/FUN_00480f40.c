// Name: FUN_00480f40
// Address: 00480f40
// Address Range: [[00480f40, 00480f69]]
// Convention: unknown
// Signature: undefined4 FUN_00480f40(int param_1)

#include "nocturne.h"

uint FUN_00480f40(int param_1)

{
  if (((((&DAT_005c168c)[(byte)((char)param_1 + 1)] & 0xe0) == 0) && (param_1 != 0x5f)) &&
     (param_1 != 0x2d)) {
    return 0;
  }
  return 1;
}
