// Name: crt_unknown.c_FUN_005c4260
// Address: 005c4260
// Address Range: [[005c4260, 005c4299]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c4260(byte *param_1)

#include "nocturne.h"

uint FUN_005c4260(byte *param_1)

{
  if (*param_1 == 0) {
    return 1;
  }
  if (((g_INT_026807f0 != 0) && ((g_CHAR_ARRAY_02680801[*param_1] & 1U) != 0)) && (param_1[1] == 0))
  {
    return 2;
  }
  return 0;
}
