// Name: crt_unknown.c_FUN_005c5bc0
// Address: 005c5bc0
// Address Range: [[005c5bc0, 005c5bf8]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c5bc0(byte *param_1,byte *param_2)

#include "nocturne.h"

void FUN_005c5bc0(byte *param_1,byte *param_2)

{
  if ((g_INT_026807f0 != 0) && ((g_CHAR_ARRAY_02680801[*param_2] & 1U) != 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  *param_1 = *param_2;
  return;
}
