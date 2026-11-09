// Name: unkafter_2d.cpp_FUN_005b2120
// Address: 005b2120
// Address Range: [[005b2120, 005b2158]]
// Convention: unknown
// Signature: byte unkafter_2d_cpp_FUN_005b2120(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte unkafter_2d_cpp_FUN_005b2120(uint param_1)

{
  if (_DAT_02d25930 != 0) {
    if (DAT_00607e7c == 0x3a4) {
      return (&DAT_00607fad)[param_1 & 0xff] & 8;
    }
    if (param_1 != 0) {
      return 1;
    }
  }
  return 0;
}
