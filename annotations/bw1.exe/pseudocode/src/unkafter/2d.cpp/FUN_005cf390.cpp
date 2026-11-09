// Name: unkafter_2d.cpp_FUN_005cf390
// Address: 005cf390
// Address Range: [[005cf390, 005cf3c8]]
// Convention: unknown
// Signature: byte unkafter_2d_cpp_FUN_005cf390(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte unkafter_2d_cpp_FUN_005cf390(uint param_1)

{
  if (_DAT_02c9f6e0 != 0) {
    if (DAT_00626ad8 == 0x3a4) {
      return (&DAT_00626c09)[param_1 & 0xff] & 8;
    }
    if (param_1 != 0) {
      return 1;
    }
  }
  return 0;
}
