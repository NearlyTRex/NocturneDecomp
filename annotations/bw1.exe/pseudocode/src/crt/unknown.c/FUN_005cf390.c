// Name: crt_unknown.c_FUN_005cf390
// Address: 005cf390
// Address Range: [[005cf390, 005cf3c8]]
// Convention: unknown
// Signature: byte crt_unknown_c_FUN_005cf390(uint param_1)

#include "nocturne.h"

byte FUN_005cf390(uint param_1)

{
  if (g_INT_02c9f6e0 != 0) {
    if (g_UINT_00626ad8 == 0x3a4) {
      return g_CHAR_ARRAY_00626c09[param_1 & 0xff] & 8;
    }
    if (param_1 != 0) {
      return 1;
    }
  }
  return 0;
}
