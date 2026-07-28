// Name: crt_string.c_mbtowc_next_FUN_0056da80
// Address: 0056da80
// Address Range: [[0056da80, 0056daad]]
// Convention: unknown
// Signature: byte * crt_string_c_mbtowc_next_FUN_0056da80(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * mbtowc_next(byte *param_1)

{
  if (((_DAT_02de5c30 != 0) && ((*(byte *)(*param_1 + 0x2de5c41) & 1) != 0)) && (param_1[1] != 0)) {
    return param_1 + 2;
  }
  return param_1 + 1;
}
