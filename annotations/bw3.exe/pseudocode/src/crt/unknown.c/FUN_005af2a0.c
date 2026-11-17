// Name: crt_unknown.c_FUN_005af2a0
// Address: 005af2a0
// Address Range: [[005af2a0, 005af2d9]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005af2a0(byte *param_1)

#include "nocturne.h"

uint FUN_005af2a0(byte *param_1)

{
  if (*param_1 == 0) {
    return 1;
  }
  if (((g_INT_02d25930 != 0) && ((g_CHAR_ARRAY_02d25941[*param_1] & 1U) != 0)) && (param_1[1] == 0))
  {
    return 2;
  }
  return 0;
}
