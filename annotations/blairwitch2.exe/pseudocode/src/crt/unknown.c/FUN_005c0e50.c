// Name: crt_unknown.c_FUN_005c0e50
// Address: 005c0e50
// Address Range: [[005c0e50, 005c0e7b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c0e50(byte *param_1)

#include "nocturne.h"

uint FUN_005c0e50(byte *param_1)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*param_1] & 1U) != 0)) {
    return 2;
  }
  return 1;
}
