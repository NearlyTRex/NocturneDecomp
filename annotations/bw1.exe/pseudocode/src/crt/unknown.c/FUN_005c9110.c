// Name: crt_unknown.c_FUN_005c9110
// Address: 005c9110
// Address Range: [[005c9110, 005c913b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c9110(byte *param_1)

#include "nocturne.h"

uint FUN_005c9110(byte *param_1)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*param_1] & 1U) != 0)) {
    return 2;
  }
  return 1;
}
