// Name: crt_unknown.c_FUN_005cdf70
// Address: 005cdf70
// Address Range: [[005cdf70, 005cdfcb]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005cdf70(byte *param_1,byte *param_2)

#include "nocturne.h"

int FUN_005cdf70(byte *param_1,byte *param_2)

{
  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  if ((g_INT_02c9f6e0 != 0) && ((g_CHAR_ARRAY_02c9f6f1[*param_1] & 1U) != 0)) {
    if (param_1[1] != param_2[1]) {
      return (uint)param_1[1] - (uint)param_2[1];
    }
  }
  return 0;
}
