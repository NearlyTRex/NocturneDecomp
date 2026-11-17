// Name: crt_unknown.c_FUN_005c90c0
// Address: 005c90c0
// Address Range: [[005c90c0, 005c90ed]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_005c90c0(byte *param_1)

#include "nocturne.h"

byte * FUN_005c90c0(byte *param_1)

{
  if (((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*param_1] & 1U) != 0)) &&
     (param_1[1] != 0)) {
    return param_1 + 2;
  }
  return param_1 + 1;
}
