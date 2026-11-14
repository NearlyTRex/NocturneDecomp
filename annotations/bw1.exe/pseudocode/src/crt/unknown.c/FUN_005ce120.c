// Name: crt_unknown.c_FUN_005ce120
// Address: 005ce120
// Address Range: [[005ce120, 005ce141]]
// Convention: unknown
// Signature: undefined * crt_unknown_c_FUN_005ce120(uint param_1)

#include "nocturne.h"

byte * FUN_005ce120(uint param_1)

{
  if (3 < param_1) {
    return (byte *)0x0;
  }
  return &DAT_006262d4 + param_1 * 0x1a;
}
