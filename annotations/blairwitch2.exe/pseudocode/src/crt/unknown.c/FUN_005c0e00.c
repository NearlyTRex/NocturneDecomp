// Name: crt_unknown.c_FUN_005c0e00
// Address: 005c0e00
// Address Range: [[005c0e00, 005c0e2d]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_005c0e00(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005c0e00(byte *param_1)

{
  if (((_DAT_026807f0 != 0) && ((*(byte *)(*param_1 + 0x2680801) & 1) != 0)) && (param_1[1] != 0)) {
    return param_1 + 2;
  }
  return param_1 + 1;
}
