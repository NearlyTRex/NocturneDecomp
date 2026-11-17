// Name: crt_unknown.c_FUN_005cc560
// Address: 005cc560
// Address Range: [[005cc560, 005cc599]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cc560(byte *param_1)

#include "nocturne.h"

uint FUN_005cc560(byte *param_1)

{
  if (*param_1 == 0) {
    return 1;
  }
  if (((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*param_1] & 1U) != 0)) &&
     (param_1[1] == 0)) {
    return 2;
  }
  return 0;
}
