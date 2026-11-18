// Name: crt_unknown.c_FUN_005cdec0
// Address: 005cdec0
// Address Range: [[005cdec0, 005cdef8]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cdec0(byte *param_1,byte *param_2)

#include "nocturne.h"

void FUN_005cdec0(byte *param_1,byte *param_2)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*param_2] & 1U) != 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  *param_1 = *param_2;
  return;
}
