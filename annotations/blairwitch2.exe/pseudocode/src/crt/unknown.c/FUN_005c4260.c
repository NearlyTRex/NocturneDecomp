// Name: crt_unknown.c_FUN_005c4260
// Address: 005c4260
// Address Range: [[005c4260, 005c4299]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c4260(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c4260(byte *param_1)

{
  if (*param_1 == 0) {
    return 1;
  }
  if (((_DAT_026807f0 != 0) && ((*(byte *)(*param_1 + 0x2680801) & 1) != 0)) && (param_1[1] == 0)) {
    return 2;
  }
  return 0;
}
