// Name: crt_unknown.c_FUN_005b0d00
// Address: 005b0d00
// Address Range: [[005b0d00, 005b0d5b]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005b0d00(byte *param_1,byte *param_2)

#include "nocturne.h"

int FUN_005b0d00(byte *param_1,byte *param_2)

{
  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  if ((g_INT_02d25930 != 0) && ((g_CHAR_ARRAY_02d25941[*param_1] & 1U) != 0)) {
    if (param_1[1] != param_2[1]) {
      return (uint)param_1[1] - (uint)param_2[1];
    }
  }
  return 0;
}
