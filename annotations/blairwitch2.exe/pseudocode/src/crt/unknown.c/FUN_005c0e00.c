// Name: crt_unknown.c_FUN_005c0e00
// Address: 005c0e00
// Address Range: [[005c0e00, 005c0e2d]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_005c0e00(byte *param_1)

#include "nocturne.h"

byte * FUN_005c0e00(byte *param_1)

{
  if (((g_INT_026807f0 != 0) && ((g_CHAR_ARRAY_02680801[*param_1] & 1U) != 0)) && (param_1[1] != 0))
  {
    return param_1 + 2;
  }
  return param_1 + 1;
}
