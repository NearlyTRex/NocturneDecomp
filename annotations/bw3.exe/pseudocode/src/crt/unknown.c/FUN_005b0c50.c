// Name: crt_unknown.c_FUN_005b0c50
// Address: 005b0c50
// Address Range: [[005b0c50, 005b0c88]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b0c50(byte *param_1,byte *param_2)

#include "nocturne.h"

void FUN_005b0c50(byte *param_1,byte *param_2)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*param_2] & 1U) != 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  *param_1 = *param_2;
  return;
}
