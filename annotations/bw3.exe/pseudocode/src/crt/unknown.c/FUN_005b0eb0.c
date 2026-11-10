// Name: crt_unknown.c_FUN_005b0eb0
// Address: 005b0eb0
// Address Range: [[005b0eb0, 005b0ed1]]
// Convention: unknown
// Signature: undefined * crt_unknown_c_FUN_005b0eb0(uint param_1)

#include "nocturne.h"

byte * FUN_005b0eb0(uint param_1)

{
  if (3 < param_1) {
    return (byte *)0x0;
  }
  return &DAT_00607678 + param_1 * 0x1a;
}
