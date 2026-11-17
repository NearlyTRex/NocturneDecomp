// Name: crt_unknown.c_FUN_00572d50
// Address: 00572d50
// Address Range: [[00572d50, 00572d88]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00572d50(byte *param_1,byte *param_2)

#include "nocturne.h"

void FUN_00572d50(byte *param_1,byte *param_2)

{
  if ((g_INT_02de5c30 != 0) && ((g_CHAR_ARRAY_02de5c41[*param_2] & 1U) != 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  *param_1 = *param_2;
  return;
}
