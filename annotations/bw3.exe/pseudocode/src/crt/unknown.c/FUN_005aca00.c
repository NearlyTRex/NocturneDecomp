// Name: crt_unknown.c_FUN_005aca00
// Address: 005aca00
// Address Range: [[005aca00, 005aca2d]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_005aca00(byte *param_1)

#include "nocturne.h"

byte * FUN_005aca00(byte *param_1)

{
  if (((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*param_1] & 1U) != 0)) &&
     (param_1[1] != 0)) {
    return param_1 + 2;
  }
  return param_1 + 1;
}
