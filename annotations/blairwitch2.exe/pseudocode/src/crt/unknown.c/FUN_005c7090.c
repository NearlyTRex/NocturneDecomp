// Name: crt_unknown.c_FUN_005c7090
// Address: 005c7090
// Address Range: [[005c7090, 005c70c8]]
// Convention: unknown
// Signature: byte crt_unknown_c_FUN_005c7090(uint param_1)

#include "nocturne.h"

byte FUN_005c7090(uint param_1)

{
  if (g_MultibyteLocaleActive != 0) {
    if (g_CodePage == 0x3a4) {
      return g_ShiftJIS_TrailByteTable[param_1 & 0xff] & 8;
    }
    if (param_1 != 0) {
      return 1;
    }
  }
  return 0;
}
