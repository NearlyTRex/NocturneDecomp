// Name: unkafter_2d.cpp_FUN_005c7090
// Address: 005c7090
// Address Range: [[005c7090, 005c70c8]]
// Convention: unknown
// Signature: byte unkafter_2d_cpp_FUN_005c7090(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte unkafter_2d_cpp_FUN_005c7090(uint param_1)

{
  if (_DAT_026807f0 != 0) {
    if (DAT_0061f758 == 0x3a4) {
      return (&DAT_0061f889)[param_1 & 0xff] & 8;
    }
    if (param_1 != 0) {
      return 1;
    }
  }
  return 0;
}
