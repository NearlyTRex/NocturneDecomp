// Name: crt_unknown.c_FUN_005cc560
// Address: 005cc560
// Address Range: [[005cc560, 005cc599]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cc560(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005cc560(byte *param_1)

{
  if (*param_1 == 0) {
    return 1;
  }
  if (((_DAT_02c9f6e0 != 0) && ((*(byte *)(*param_1 + 0x2c9f6f1) & 1) != 0)) && (param_1[1] == 0)) {
    return 2;
  }
  return 0;
}
